#include<iostream>
#include<math.h>
#include<stack>
using namespace std;
int prefixval(string s )
{ int res;
	stack<int> st;
	for(int i=s.length()-1;i>=0;i--)
	{
	if(s[i]>='0' && s[i]<='9'){
		st.push(s[i]-'0');
	}
	else{
		int op1= st.top();
		st.pop();
		int op2= st.top();
		st.pop();
		switch (s[i]){
		case '+':
			res =op1+op2;
			st.push(res);
			break;
		case '-':
			 res =op1-op2;
			st.push(res);
			break;
		case '*':
			 res =op1*op2;
			st.push(res);
			break;
		case '/':
			 res =op1/op2;
			st.push(res);
			break;
		case '^':
			 res =pow(op1,op2);
			st.push(res);
			break;
		
		
		
		
		}
	} 
		
	}
	 return st.top();
}
int main(){
	string s = "-+7*45+20";
	cout<<prefixval(s)<<endl;
	
}
