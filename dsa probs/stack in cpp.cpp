#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s;
	//push in stack
	s.push(1);
	s.push(2);
	cout<< s.top()<<endl;
	cout<<"size is :"<<s.size()<<endl;
	if(s.empty()){
		cout<<"stak is empty"<<endl;
	}
	else{
		cout<<" stak isnot empty"<<endl;
		
	}
}
