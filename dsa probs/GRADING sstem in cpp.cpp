#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter your grade"<<endl;
	cin >>num;
	if (num<0 || num>100){
		cout<<"invaid input"<<endl;
	}
	else if (num<=100 && num>90){
		cout<<"you ahve got A"<<endl;
	}
	else if (num<=90 && num>80){
		cout<<" you ahve got garde B"<<endl;
	}
	else if(num<=80 && num>70){
		cout <<"you hav got garde C"<<endl;
	}
	else {
		cout<<"you have F GARDE"<<endl;
	}
}
