#include <iostream>
#include<cmath>
using namespace std;

class population{
	private:
	int curpop;
	public:
		population(int pop) : curpop(pop) {}
	int projpop(double years){
		double gr= 2.00;
		double  projpop= ((curpop) * pow(1 + gr, years));
		return projpop;
		
	}
};
int main(){
	int pop;
	double years;
	cin >> pop>> years;
population pop1(pop);
cout<< pop1.projpop(years)<<endl;

}
