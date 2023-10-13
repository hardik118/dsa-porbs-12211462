/* 
rule 1 - the left subtree of a node contains onoy nodes with keys less than the node's key
rule 2- the right subtree of anode contains only nodes with keys greater tham the nodes's key
rule 3- the lefta and right  subtree  must also be a binary serach tree there must be no duplicate nodes
*/ 
#include<iostream>
class node {
	public:
		 int data ;
		  node* left;
		  node* right;
	node(int val){
		data = val;
		left = NULL;
		right = NULL;
		
	}
};
 node* insert( node* root , int val){
 	if (root == NULL){
 		return new node (val);
 		
	 }
	if (val < root->data){
		insert(root->left, val);
		
	}
	else{
		root->right = insert(root->right ,val);
		
	}
 }
  void inorder(){
  	if(root= NULL){
	  
  	inorder(root->left);
  	cout<<root->data;
  	inorder(root->right);
  }
  }
int main{
node* root = NULL;
 root =insert(root,5);
 insert(root,1);
 insert(root,7);
 insert(root,2);
 insert(root,11);
  inorder(root);
 




}
 
