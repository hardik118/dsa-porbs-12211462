#include <iostream>
using namespace std;
class student{
	int id;
	static int count;
	public :
		void set_(){
			cout <<"the id entered is: "<<endl;
			cin>>id;
			count++;
		}
		void get_()
		{
			cout<<"the id is : "<< id <<" the count is "<<count <<endl;
			
		}
		static void getval(){
			cout<<"the value of count is "<<count <<endl;
			
		}
		
};
int student :: count ;

int main(){
	student s1,s2,s3;
	s1.set_();
	s1.get_();
	student::getval();
	s2.set_();
	s2.get_();
	student::getval();
	
	s3.set_();
	s3.get_();
	student::getval();	
}
// here as we have a common variable count which all the student classess are using hence to makethe entity accesible,
// to ever updation we declare the varible count as static 
// static fucntion only work with static  variable  where we cannot use the s1 or s1 or s3 to acess the static fucton which is  getval()


