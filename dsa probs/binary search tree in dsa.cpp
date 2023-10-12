#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node* right ;
	node(int val){
		 data = val;
		 left = NULL;
		 rigt = NULL;
		 
	}
};
void printlevelorder{node* root}{
	if (root == NULL )return ;
queue<node*> q;
q.push(root);
q.push(NULL);
while(!q.empty()){
	node * Node = q.front();
	q.pop();
	if (node!=NULL){
	
	cout<< node->data<< " ";
	else if(node->left){
		q.push(node->left)
	}
	if(node->right){
		q.push(NULL);
	}
} 
}}
int main(){
	node* root = new node(1);
	root->left
}
