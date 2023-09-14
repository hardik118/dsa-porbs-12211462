void atlast(stack<int> &stk){
	stack<int> tempstack= stk;
	while(!stk.empty())P
	tempstack.push(stk.pop());
	stk.pop();
	
}
stk.push(11);
while(!tempstack.empty()){
	stk.push(tempstack.top());
	tempstack.pop();
	
}
	
