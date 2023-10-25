#include<iostream>
using namespace std;
class node{
	public:
		int key;
		node* left;
		node* right;
		int hei_;
		
};
node* newnode(int key){
	node* node= new node();
	node->key = key;
	node->left- NULL;
	node->right= NULL;
	node->hei_= 1;
	return (node);
	
}
int hei_ (node* ndoe){
	return (node->hei_)
}
int getbal_(node* ndoe){
	if(node==NULL) return 0;
	return hei_(node->left)- hei_(node->right);
}
node*  rightnode(node* node){
	node* x== y->left;
	node* t1= x->right;
	x->right =y;
	y->left= t1;
	y->hei_ = max(hei_(y->left),hei_(y->right))+1;
	x->hei_= max(hei_(x->left), (x->right))+1;
	
	return x;
	
}
node* leftrotate(node* x){
	node* 
}
node* insert(node* node, int key){
	if(node==NULL){
		return(newnode(key));
	}
	if (key<node->key){
		node->left= insert(node->left);
		
	}
	else if(key> node->key){
		node->key = insert(node->right);
		
	}
	else {
		return  node;
	}
	// updating height
	node->hei_= max(hei_(node->left),hei_(node->right))+1;
	
	int bal =getbal_(node);
	// llcase
	if(bal >1 && key<node->left){
		
	}
}


