node* flyoddetector(node* head){
	if(head==NULL){
		return NULL;
	}
	node* slow= head;
	node* fast= head;
	while(slow!=NULL && fast!=NULL){
		slow= slow->next;
		fast= fast->next;
		if(fast==NULL){
			
		}
	}
}
