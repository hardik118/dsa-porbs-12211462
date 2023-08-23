# include<iostream>
using namespace std;
int main(){
	int var=1;
	double d=10.4;
	double *ptr2= &d;
	
	int *ptr= &var;
	cout<<&var<<endl;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(ptr2)<<endl;	
}
