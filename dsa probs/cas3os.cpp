#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define MAX_WAITING_ROOM_CAPACITY 5
#define NUM_CUSTOMERS 20
#define HAIRCUT_TIME 3

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t barber_ready = PTHREAD_COND_INITIALIZER;

int waiting_room[MAX_WAITING_ROOM_CAPACITY];
int num_waiting = 0;
int next_customer = 0;

void* barber_work(void* arg) {
    while (1) {
        pthread_mutex_lock(&mutex);

        if (num_waiting == 0) {
            printf("Barber is sleeping.\n");
            pthread_cond_wait(&barber_ready, &mutex);
        } else {
            int current_customer = waiting_room[next_customer];
            printf("Barber is cutting hair for customer %d\n", current_customer);
            num_waiting--;
            next_customer = (next_customer + 1) % MAX_WAITING_ROOM_CAPACITY;
            pthread_mutex_unlock(&mutex);

            sleep(HAIRCUT_TIME); 

            printf("Haircut finished for customer %d\n", current_customer);
        }
    }
    return NULL;
}

void add_customer(int customer_id) {
    pthread_mutex_lock(&mutex);

    if (num_waiting < MAX_WAITING_ROOM_CAPACITY) {
        waiting_room[(next_customer + num_waiting) % MAX_WAITING_ROOM_CAPACITY] = customer_id;
        num_waiting++;
        printf("Customer %d is in the waiting room.\n", customer_id);
        pthread_cond_signal(&barber_ready);
    } else {
        printf("Waiting room is full. Customer %d is leaving.\n", customer_id);
    }

    pthread_mutex_unlock(&mutex);
}

int main() {
    pthread_t barber_thread;
    pthread_create(&barber_thread, NULL, barber_work, NULL);

    pthread_t customer_threads[NUM_CUSTOMERS];
    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        usleep(rand() % 2000000);
		
        pthread_create(&customer_threads[i], NULL, (void*)add_customer, (void*)(i + 1));
    }

    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        pthread_join(customer_threads[i], NULL);
    }

    return 0;
}

