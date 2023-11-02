#include <iostream>
using namespace std;

class time{
	int hour;
	int min;
	int sec;
	public:
		
	time (int h1,int m1,int s1) : hour(h1), min(m1), sec(s1) {}
	time operator -(const time& t){
		int sec1= hour*3600+ min*60 +sec;
		int sec2= t.hour*3600 +t.min*60 +t.sec;
		int difsec= sec2-sec1;
		int h= difsec/3600;
		int m= (difsec%3600)/60;
		int s= difsec %60;
		 return time(h,m,s);
	
	}
	void display(){
		cout<< hour<<" "<<min<<" "<<sec;
	}
};
int main(){
	time time1(5,22,25);
	time time2(7,44,40);
	time timediff= time1-time2;
	timediff.display();
	
}
