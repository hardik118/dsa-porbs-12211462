#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
int num;
cin>>num;
int sum=0;
while(num!=0){
	sum=sum+num%10;
	num=num/10;
}
cout<<sum;

}
