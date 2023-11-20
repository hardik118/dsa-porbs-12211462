#include<iostream>
#include<vector>
using namespace std;
class person{
	public:
	string pname;
	string address;
	int phone_no;

		person(string pname ,string address, int phone_no) : pname(pname ),address(address),phone_no(phone_no) {}
	
};
class employee : public person{
	public:

    int eno;

    string ename;



    employee(string pname, string address, int phone_no, int eno, string ename) : person(pname, address, phone_no), eno(eno), ename(ename) {}
};

class Manager : public employee {

private:

    string designation;

    string deptname;

    float basic_salary;



public:

    Manager(string pname, string address, int phone_no, int eno, string ename, string designation, string deptname, float basic_salary)

        : employee(pname, address, phone_no, eno, ename), designation(designation), deptname(deptname), basic_salary(basic_salary) {}


    void accept_details() {

        cin >> eno >> ename >> address >> phone_no >> deptname >> basic_salary;

    }



    float getSalary() {

        return basic_salary;

    }

};
int main(){
	int cnt ;
	cin>>cnt;
	vector<Manager> managers;
	for(int i=0;i<cnt;i++){
		Manager manager("none","none",0,0,"none","none","none",0.0);
		manager.accept_details();
		managers.push_back(manager);
		
	}
	float maxsal=-1;
	string maxnum=" ";
	for (Manager manager : managers){
		if(manager.getSalary()>maxsal){
			maxsal=manager.getSalary();
			maxnum=manager.ename;
			
		}
	}
	cout<<maxsal<<endl;
	cout<<maxnum<<endl;
	
}
