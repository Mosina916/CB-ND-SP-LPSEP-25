#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node*prev;
	node(int d){
		next=NULL;
		prev=NULL;
		data=d;

	}
};

void insertathead(node* &head,node*&tail,int dat){//call by value 
	node*n=new node(dat);
	if(head==NULL){
		head=n;
		tail=n;
	}
	else{
		n->next=head;
		head->prev=n;
		head=n;

	
}

}





void printll(node*head){

	while(head!=NULL){
	cout<<head->data<<"-->";
	head=head->next;
}
cout<<endl;

}

void revrsell(node*tail){
	while(tail!=NULL){
	cout<<tail->data<<" ";
	tail=tail->prev;
}
	
}
int main(){
	node* head=NULL;
	node*tail=NULL;



	insertathead(head,tail,10);
	insertathead(head,tail,30);
	insertathead(head,tail,90);
	insertathead(head,tail,20);
	printll(head);

	cout<<endl;
	revrsell(tail);





	
	


	



	
	


	return 0;
}