#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};
class stack{
	node*head;
	int l;
	


	public:
		stack(){
			head=NULL;
			l=0;
		}
	

	void push(int d){

		//insertat front tc 0(1)-->constant


		node*n=new node(d);
		n->next=head;
		head=n;
		l++;

		
		
	}

	// pop

	void pop(){
		node*temp=head;
		head=head->next;
		delete temp;
		l--;
		temp=NULL;

	}


	// top

	// char top(){
	int top(){

		return head->data;
		
	}


	// empty

	bool empty(){

		// return l==0;

		return head==NULL;
		
	}


	// siZe
	int size(){

		return l;
		
	}
	
};

int main(){
	
	// stack s;

	stack s;
	s.push(3);
	s.push(13);
	s.push(2);
	s.push(4);
	s.push(7);


	// cout<<s.v[2]<<endl;
	

	while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}

	return 0;
}