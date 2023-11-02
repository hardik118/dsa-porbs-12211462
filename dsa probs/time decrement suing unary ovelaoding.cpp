#include<iostream>
using namespace std;

class  time{
	int hour;
	int minute ;
	
	public:
         time(int h, int m){
			hour =h;
			minute =m ;
			
		}
	int  operator -(){ 
minute =minute-1;
	return minute;
	
	}
	int operator --(){
		hour= hour-1;
	return  hour ;
	}
	void print (){
		/*if (minute ==00&&hour==00){
			cout<<"worng time is entered"<<endl;
			
		}
		else if (minute==00){
			
			cout<<--hour<<minute<<endl;	
		}
		else{
			cout<<hour<<" "<<(-minute)<<endl;
			
			
		}*/
		cout<< hour << " " <<minute<<endl;
		
	}
	
};
int main(){
	time t1(23,23) ,t2(12,00);
t1.operator -();

	t1.print();
	t2.operator --();
	t2.print();
}
