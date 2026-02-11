#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
		while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}


}
void insertatbottomofstack(stack<int> &s,int x){
	if(s.empty()){
		s.push(x);
		return;

	}


	int t=s.top();
	s.pop();
	insertatbottomofstack(s,x);
	s.push(t);


}
void reversestack(stack<int> &s){

	// base case

	if(s.empty()){
		return;
	}


	// rec case
	int x=s.top();//9
	s.pop();
	reversestack(s);


	insertatbottomofstack(s,x);
}

int main(){

	stack<int> s;
	s.push(3);
	s.push(13);
	s.push(2);
	s.push(4);
	s.push(7);

	reversestack(s);

		print(s);






	return 0;
}