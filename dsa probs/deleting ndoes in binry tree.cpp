ndoe* inorder (nod* root){
	node* curr = root
}
node* deletekey(node* root , int ke){
	if(key<root->data){
		root->left= deleteinsbst(root->left, key);
	}
	else if (key->root->data){
		root->right = deleteinbst(root->right, key);
	}
	else {
		if(root->left){
			node* temp = root->right;
			delete root;
			return temp;
			
		}
		else if (root->right== NULL){
			node* temp= root->left;
			delete root ;
			 return 
		}
	}
}
