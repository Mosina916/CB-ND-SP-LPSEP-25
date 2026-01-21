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
int main(){
	node* head=NULL;
	node*tail=NULL;


	// insertathead(head,tail,9);
	// insertathead(head,tail,10);
	// insertathead(head,tail,20);
	// insertathead(head,tail,30);
	// insertathead(head,tail,80);

	int n,d;
	cin>>n;//4

	for (int i = 0; i <n; ++i)
	{
			cin>>d;
		insertattail(head,tail,d);
	}




	printll(head);

	bubblesort(head,tail);
	printll(head);
	// insertattail(head,tail,10);

	// insertattail(head,tail,40);
	// printll(head);


	// deleteatfront(head,tail);
	// deleteatfront(head,tail);
	// printll(head);

	// // deleteatend(head,tail);
	// // deleteatend(head,tail);
	// printll(head);
	// printll(head);


	// cout<<lenusingrec(head)<<endl;


	// cout<<searchinllusingrec(head,80)<<endl;
	// // int pos;
	// // cin>>pos;
	// insetanypost(head,tail,3,85);
	// // cin>>pos;
	// insetanypost(head,tail,4,60);
	// printll(head);
	// deleteanypost(head,tail,4);

	// deleteanypost(head,tail,2);

	// printll(head);







	



	
	


	return 0;
}