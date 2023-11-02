#include <iostream>
#include<string>
using namespace std;
class roman{
	string rom;
	public:
		roman(string ro): rom(ro) {}
	operator int(){
		int decimal;
		int prevalue;
	for (int i=rom.length();i>=0;i--){
		int curval= getval(rom[i]);
		if(curval>=prevalue){
			decimal+=curval;
			
		}
		else{
			decimal-=curval;
			
		}
		prevalue = curval;
		
	}
	return decimal;
	}
private:
	int getval(char sy){
		switch(sy)
		{
			
            case 'I': return 1;

            case 'V': return 5;

            case 'X': return 10;

            case 'L': return 50;

            case 'C': return 100;

            case 'D': return 500;

            case 'M': return 1000;

            default: return 0;
		}
	}
		
};
int main(){
	string ro;
	cin>>ro;
	roman r1(ro);
	int decimalnum= r1;
	cout<<decimalnum;
	
}
