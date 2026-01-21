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


// int &p=x;

// void f(int p,int y){

// }
// int main(){
// 	int x=4;
// 	f(&x,5);
// }

void insertathead(node* &head,node*&tail,int dat){//call by value 
	node*n=new node(dat);
	if(head==NULL){
		head=n;
		tail=n;
	}
	else{

	n->next=head;
	head=n;
}

}


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


void deleteatfront(node*&head,node*&tail){
	if(head==NULL){
		return;
	}
	// single node
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	else{

	node*temp=head;
	head=head->next;
	delete temp;
	temp=NULL;
}
}


void printll(node*head){

	while(head!=NULL){
	cout<<head->data<<"-->";
	head=head->next;
}
cout<<endl;

}
int main(){
	node* head=NULL;
	node*tail=NULL;


	insertathead(head,tail,9);
	insertathead(head,tail,10);
	insertathead(head,tail,20);
	insertathead(head,tail,30);
	insertathead(head,tail,80);


	printll(head);
	insertattail(head,tail,10);

	insertattail(head,tail,40);
	printll(head);


	deleteatfront(head,tail);
	deleteatfront(head,tail);
	printll(head);


	



	
	


	return 0;
}