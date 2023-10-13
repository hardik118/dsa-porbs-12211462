node* count(node* root , int ke){
	if (root== nullptr){
		return 0;
	}
	int countL= countnodes(root->left);
	int cointR= countnodes(root->right;)
	retunrn 1+ countL+ countR;
}
