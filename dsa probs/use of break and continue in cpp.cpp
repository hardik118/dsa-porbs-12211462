#include<iostream>
using namespace std;
int main(){
	 int i=0;
	 for(i=0;i<10;i++){
	if (i==4){
		continue ;
		i++;
}
	if (i==8){
	 		break;
	}
	 	cout<<i<<endl;
	 	//i++;
	 }
}

