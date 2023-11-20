#include<iostream>
#include<string>
using namespace std;
class person{
private :
	string name ;
	string gender;
	int age ;
	public:
	void setdetail(string n, string g ,int a){
		name =n;
		gender=g;
		age =a;
		
	}
	void  setgen(){
		string gen=gender;
		for(char &c : gen){
		c=toupper(gen);
	}
		cout<<"the gnder is "<<gen;
	}
	void setname(){
		string na= name;
		for(char &c na){
			c= toupper(c);
		}
		cout<<"the name is "<<na;
	}
};
int main(){
	string name, gender;
	int age;
	cin>> name>>gender>>age;
	person per;
	per.setdetail(name,gender,age);
	per.setgen();
	per.setname();
	
}
