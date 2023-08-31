#include<iostream>
using namespace std;
int factorial(int n ){
	// base case
	if(n==0)
	 return 1;
	int sp_= factorial(n-1);
	//int bp_=n * factorial(n-1);
	return n* sp_;
}
int main(){
	int n;
	cin>>n;
	int ans=factorial(n);
	cout<<ans<<endl;
	
}
