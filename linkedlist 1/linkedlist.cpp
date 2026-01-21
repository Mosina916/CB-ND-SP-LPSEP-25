#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(){
		next=NULL;

	}
	node(int d){
		next=NULL;
		data=d;

	}
};

int main(){
	node x(3);
	node y(5);

	x.next=&y;//link create

	// cout<<x.data<<endl;
	// cout<<(*(x.next)).data<<endl;

	// cout<<x.next->data<<endl;




	


	return 0;
}