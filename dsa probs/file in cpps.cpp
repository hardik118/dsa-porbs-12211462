#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream onfile;
	//ifstream for input 
	//onfile.open("file.txt");
	onfile.open("C:\\Users\\hp\\Desktop\/dsa\\dsa-porbs-12211462\\dsa probs\\file.txt");
	cout<<"file created successfuly"<<endl;
	onfile.close();
	
}

