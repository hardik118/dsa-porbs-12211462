
#inclde<iostream>
using namespace  std;
class node {
	public :
		int data;
		node* left;
		node* right ;
	node(int val){
		data = data;
		left=NULL;
		right=NULL
	}
};
node* searchinbst(node* root , int val){
	if(root=NULL)return NULL ;
	if(root->data==key)return root;
	if(root->data>key){
		return searchinbst(root->left, key);
		
	}
	return searchinbst(root->right, key);
}
int main(){
	node* root = new  node(4);
	root->left= new  node(2);
	root->right= new node(3);
	root->left->left= new node (1);
	root->left->right  = new  node()
}

