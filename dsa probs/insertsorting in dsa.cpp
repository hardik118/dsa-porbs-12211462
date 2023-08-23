#include<iostream>
using namespace std;
void insertsort(int arr[],int size){
	for(int i=1;i<size;i++){
	int temp = arr[i];
	int j=i-1;
	for (;j>=0;j--){
		if arr[j]>arr[i]{
		arr[j+1]=arr[i];
		
		}
	}
}
