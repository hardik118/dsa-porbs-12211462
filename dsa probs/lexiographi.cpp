#include<iostream>
#include<algorithm>
using namespace  std;
int main(){
	int arr[4]= {1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(std::next_permutation(arr,arr+n)){
	
	for(int i=0;i<n;i++){
		  std::cout << arr[i] << " ";
	}
}
	return 0;
	
}

