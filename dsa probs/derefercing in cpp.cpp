#include <iostream>
using namespace std;
int main(){
	int num=2;
	int a =num;
	cout <<"num before:"<<num<<endl;
	a++;
	cout <<"num before:"<<num<<endl;
	int *p= &num;
	(*p)++;
	cout <<*p<<endl;
	int *q=p;
	cout<<p<<" "<<q<<endl;
	cout<<*p<<" "<<*q<<endl;
	int i=2;
	int *m =&i;
	cout<<++(*m)<<endl;
	*m =*m+1;
	cout<<m<<endl;
	*m =*m+1;
	cout <<*m<<endl;
	m=m+1;
	cout<<m<<endl;
	
}
	
	
