#Include<iostream>
#include<map>
using namespace std;
class node(node* &head){
	int val;
	node* next;
	node(int val){
		data= val;
		next= NULL;
		
	}
}
bool det_(node* head){
	if(head==NULL){
		return ;
	}
	
	map<node*,bool> visited;
	node*temp =head;
	while(temp!=NULL){
		if(visited[temp]==true ){
			return true ;
		}
		visited[temp]=true;
		temp=temp->next;
		
	}
	return false;
}
 int main(){
 	node* head= NULL;
 	insertattail
 }
