#include<iostream>
using namespace std;
class weight{
	int kg;
	public:
		weight(){
			kg =0;
		}
		void printweight(){
		cout<<"weight is in kg "<<kg<<endl;
				
		}
		void operator ++(){
			++kg;
			
		}
		void operator ++(int ){
			kg++;
			
		}
};
int main(){
	weight obj1;
	obj1.printweight();
	++obj1;
	obj1.printweight();
	obj1++;
	obj1.printweight();
	
	
	
	
}
