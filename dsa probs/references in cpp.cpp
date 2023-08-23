#include <iostream>
using namespace std;
// reference variable 
// is a refernce  to an exsisting variable 
int main(){
	string name= "hardik";
	string &ref= name;
	cout <<name<<endl;
	cout<<ref<<endl;
}
