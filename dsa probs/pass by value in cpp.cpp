#include<iostream>
using namespace std;
 void  test(int &n){
 	n++;
 	cout<<"the value of n is: "<<n <<endl;
 	
 }
 int& test1(int n){
 	int num= n;
 	int &ans= num;
 	return ans;
 }
 int main(){
 	int n;
 	cin>>n;
 	test(n);
 	 int num1=test1(n);
	cout<<"the value of n : "<<num1<<endl;
 	
 }
