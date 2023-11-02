#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class weatherdata{
	float temp;
	public:
	weatherdata(float val){
		temp=val;
	}
	void operator +(){
		temp= (temp*1.8)+32;
		
	}
	void print(){
		cout<<" temp is "<<fixed << setprecision(2)<<temp<<endl;
	}
};
int main(){
	weatherdata faren(35);
	
	faren.print();
	+faren;
	faren.print();
	
}
