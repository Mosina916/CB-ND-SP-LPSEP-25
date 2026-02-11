#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		next=NULL;
		data=d;

	}
};



void insertattail(node* &head,node*&tail,int dat){//call by value 
	node*n=new node(dat);
	if(head==NULL){
		head=n;
		tail=n;
	}
	else{
		tail->next=n;
		tail=n;

	
}

}


void printll(node*head){

	while(head!=NULL){
	cout<<head->data<<"-->";
	head=head->next;
}
cout<<endl;

}

node* revrsell(node*head){
	node*curr=head;
	node*prev=NULL;

	while(curr!=NULL){
	node*fw=curr->next;
	curr->next=prev;
	prev=curr;
	curr=fw;
}

return prev;
}
int main(){
	node* head=NULL;
	node*tail=NULL;



	insertattail(head,tail,10);

	insertattail(head,tail,40);
		insertattail(head,tail,4);
			insertattail(head,tail,30);
				insertattail(head,tail,10);

	printll(head);
	node*a=revrsell(head);


	
	printll(a);


	



	
	


	return 0;
}