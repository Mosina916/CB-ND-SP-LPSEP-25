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


bool checkcycle(node*head){

	node*slow=head;
	node*fast=head;
	while(fast!=NULL and fast->next!=NULL ){
		slow=slow->next;//1x
	
	fast=fast->next->next;//2x
	if(slow==fast){
		return true;
	}
}

return false;


}

void createcycle(node*head,int pos){
	node*temp=head;

	while(temp->next!=NULL){
	temp=temp->next;
}

node*a=head;
for(int jump=1;jump<=pos;jump++){
	a=a->next;
}


temp->next=a;


}


// floyd cycle detection
void breakcycle(node*head){
	// mai check karugi cycle hai ya nahi
	bool kyacyclehai=false;
	node*slow=head;
	node*fast=head;
	while(fast!=NULL and fast->next!=NULL ){
		slow=slow->next;//1x
	
	fast=fast->next->next;//2x
	if(slow==fast){
		kyacyclehai=true;
		break;
	}
}


if(kyacyclehai==true){
	// tou break karne wala kaam 

	slow=head;

	while(slow->next!=fast->next){
	slow=slow->next;
	fast=fast->next;
}

fast->next=NULL;

}
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

node* kreverse(node*head,int k){
	// b case
	if(head==NULL){
		return head;
	}


	// rec case
	node*temp=head;
	for(int jump=1;jump<=k-1;jump++){
		temp=temp->next;
	}

	node*a=temp->next;
	temp->next=NULL;
	node*p=revrsell(head);
	node*o=kreverse(a,k);
	node*l=p;

	for(int jump=1;jump<=k-1;jump++){
		l=l->next;
	}
	l->next=o;

	return p;


}
int main(){
	node* head=NULL;
	node*tail=NULL;

	
	int n;
	cin>>n;//8

	for (int i = 0; i <n; ++i)
	{
		int d;
	cin>>d;
	insertattail(head,tail,d);
	}

	node*h=kreverse(head,4);

	printll(h);
	

	
	


	return 0;
}