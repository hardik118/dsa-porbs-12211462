#include <iostream>
using namespace std;
int main(){
	int  a=5;
	int &b= a;
	cout<<a<<endl;
	a++;
	cout<<a<<endl;
	b++;
	cout<<a<<endl;
}
