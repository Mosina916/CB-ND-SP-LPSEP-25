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


void deleteatend(node*&head,node*&tail){
	if(head==NULL){
		return;
	}

	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;

		

	}

	else{


	// multiple nodes
	node*temp=head;

	while(temp->next!=tail){
	temp=temp->next;
	}
	delete tail;
	tail=temp;
	tail->next=NULL;
}



}


void printll(node*head){

	while(head!=NULL){
	cout<<head->data<<"-->";
	head=head->next;
}
cout<<endl;

}

int lengthofll(node* head){

	 node*temp=head;
	 int co=0;
	while(temp!=NULL){
		co++;
		temp=temp->next;

	}

	return co;
}


void insetanypost(node*&head,node*&tail,int pos,int dat){
	if(pos==0){
		insertathead(head,tail,dat);
	}
	else if(pos>=lengthofll(head)){
		insertattail(head,tail,dat);
	}
	else{
		// pos 3
		node*temp=head;
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}
		node*n=new node(dat);
		n->next=temp->next;
		temp->next=n;
	}
}

int lenusingrec(node*head){
	if(head==NULL){
		return 0;
	}


	return 1+lenusingrec(head->next);
}


void deleteanypost(node*&head,node*&tail,int pos){
	if(pos==0){
		deleteatfront(head,tail);
	}
	else if(pos>=lengthofll(head)-1){
		deleteatend(head,tail);
	}
	else{
		// pos 3
		node*temp=head;
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}
		node*x=temp->next;;

		temp->next=temp->next->next;
		delete x;
		x=NULL;
	}
}


bool searchinll(node*head,int key){

	while(head!=NULL){

	if(head->data==key){
		return true;
	}
	head=head->next;
}
return false;

}



bool searchinllusingrec(node*head,int key){
	if(head==NULL){
		return false;
	}



	if(head->data==key){
		return true;
	}

	return searchinllusingrec(head->next,key);


}

// head			tail
//  5-->4-->3-->2-->1

void bubblesort(node*head,node*tail){

	// 5 4 3 2 1
	for(int i=0;i<=lenusingrec(head)-2;i++){ //i==0  i=1 i==2 i==3
		for(node*temp=head;temp!=tail;temp=temp->next){
		if(temp->data>temp->next->data){
			swap(temp->data,temp->next->data);
		}
	}

	// 1 2 3 4 5
	}

}

node* mid(node*head){

	node* p1=head;
	node* p2=head;

	while(p1!=NULL and p1->next!=NULL){
	p2=p2->next;
	p1=p1->next->next;
}
return p2;
// return p2->data;
}


// node* mid(node*head){
// 	int l=lenusingrec(head);
// 	l=l/2;
// 	node*temp=head;
// 	for (int jump = 1; jump<=l;jump++)
// 	{
// 		temp=temp->next;
// 	}

// 	return temp;
// }


int nthnodefromend(node*head,int n){
	node*p1=head;
	node*p2=head;
	for (int jump = 1;jump<=n-1; jump++)
	{
		p1=p1->next;

	}

	while(p1->next!=NULL){
	p1=p1->next;
	p2=p2->next;
}
	return p2->data;


}


node* mergetwosortedll(node*head1,node*head2){

	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}

	node*newhead=NULL;
	if(head1->data<head2->data){
		newhead=head1;
		newhead->next=mergetwosortedll(head1->next,head2);

		// return newhead;

	}
	else{
		newhead=head2;
		newhead->next=mergetwosortedll(head1,head2->next);


		// return newhead;
	}
	return newhead;
}

node* mergesort(node*head){

	if(head==NULL){
		return head;
	}
	if(head->next==NULL){
		return head;
	}


	node*x=mid(head);
	node*temp=x->next;
	x->next=NULL;

	node*a=mergesort(head);//4 5 1 --> 1 4 5

	node*b=mergesort(temp);//3 2 --> 2 3


	return mergetwosortedll(a,b);

}
int main(){
	node* head=NULL;
	node*tail=NULL;

	insertathead(head,tail,70);
	insertathead(head,tail,9);
	insertathead(head,tail,10);
	insertathead(head,tail,20);
	insertathead(head,tail,30);
	insertathead(head,tail,80);

	// insertathead(head,tail,1);
	// insertathead(head,tail,0);
	// insertathead(head,tail,3);
	// insertathead(head,tail,8);

	// printll(head);

	// cout<<nthnodefromend(head,5)<<endl;



	// node* head1=NULL;
	// node*tail1=NULL;

	// node* head2=NULL;
	// node*tail2=NULL;




	// int n,d,m;
	// cin>>n;//4

	// for (int i = 0; i <n; ++i)
	// {
	// 		cin>>d;
	// 	insertattail(head1,tail1,d);
	// // }
	// printll(head1);

	// cout<<endl;
	node*h=mergesort(head);

	printll(h);

	// cin>>m;//6

	// for (int i = 0; i <m; ++i)
	// {
	// 		cin>>d;
	// 	insertattail(head2,tail2,d);
	// }


	// node*x=mergetwosortedll(head1,head2);

	// printll(x);



	// node*d=mid(head);//5 ka address 

	// cout<<d->data<<endl;

	// cout<<mid(head)<<endl;




	// printll(head);

	// bubblesort(head,tail);
	// printll(head);



	return 0;
}