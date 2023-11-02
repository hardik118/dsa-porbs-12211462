#include <iostream>
using namespace std;

class time{
	float real;
	float img ;
	public:
	time(int re,int im) : real(re),img(im)	{}

	time operator +(const time& t){
		float newreal= real +t.real;
		float newimg= img  +t.img;
		return time(newreal,newimg );
		
	}
void display(){
	cout<<real <<" "<<img<<"j"<<endl;
	

}
};
int main(){
	time time1(4.5,8.1);
	time time2(2.3,4.5);
	time newtime= time1+time2;
	newtime.display();
	
}
