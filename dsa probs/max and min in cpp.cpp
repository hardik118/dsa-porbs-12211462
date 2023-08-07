#include <iostream>
using namespace std;
 int max(int num1,int num2,int num3){
 	if (num1>num2){
 	return num1;
 }
 else if (num2>num3){
 	return  num2;
 }
 else {
 	return num3;
 }
 }
  int min(int num1,int num2,int num3){
 	if (num1<num2 && num1<num2){
 	return num1;
 }
 else if (num2<num3){
 	return  num2;
 }
 else {
 	return num3;
 }
 }
  int main(){
  	int num1,num2,num3;
  	cout<<"enter the numbers num1 and num2 and num3"<<endl;
  	cin>> num1>>num2>>num3;
  	cout<<max(num1,num2,num3)<<endl;
  	cout<<min(num1,num2,num3);
  }
  
