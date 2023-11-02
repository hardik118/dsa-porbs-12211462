#include<bits/stdc++.h>
using namespace std;
class bicycle{
	public:
	int speed;
	int gear;
	
		bicycle(int sp, int ge) : speed(sp), gear(ge) {}
	void speedup(int incri){
		speed+=incri;
	}
	void speeddown(int decri){
		speed-=decri;
	}
};
class mountain:public bicycle{
	public:
	int height;
	mountain(int g ,int s, int h) : bicycle(s, g),height(h) {}
	void display(){
		cout<< gear<<endl;
		cout<<speed<<endl;
		cout<<height<<endl;
		
	}
};
int main(){
int gear, speed , height;
cin >> gear>>speed>> height;
mountain m(gear,speed,height);
m.display();

}
