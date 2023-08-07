#include <iostream>
using namespace std;
 int mul(int num1,int num2){
 	return num1*num2;
 }
  int main(){
  	int num1,num2;
  	cout<<"enter the numbers num1 and num2 "<<endl;
  	cin>> num1>>num2;
  	cout<<mul(num1,num2);
  }
