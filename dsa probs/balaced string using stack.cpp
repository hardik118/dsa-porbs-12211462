#include<iostream>

#include<stack>
using namespace std;
bool isvalid(string s){
 bool ans;
 stack<char> stk;
 
 
	for(int i=0;i<s.length();i++){
		if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
			stk.push(s[i]);
			
		}
		else if (s[i]==')'){
			if(s.empty() && stk.top()== '(')
			stk.pop();
			
		}
		else{
			ans= false;
			break;
			
		}
	}
	else if (s[i]=='}'){
			if(stk.empty() && stk.top()== '{')
			s.pop();
			
		}
		else{
			ans= false;
			break;
			
		}
	}
	else if (s[i]==']'){
			if(stk.empty() && stk.top()== '[')
			stk.pop();
			
		}
		else{
			ans= false;
			break;
			
		}
	}
}
int main(){
	string s= "[{({})}]"l;
	if(isvalid(s)){
		cout<< "isvalid"<<endl;
		
	}
	else{
		cout<<"invalid"<<endl;
		
	}
}

