#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
		while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}


}

int main(){
	

	stack<int> s;
	s.push(3);
	s.push(13);
	s.push(2);
	s.push(4);
	s.push(7);


	// cout<<s.v[2]<<endl;

	print(s);
	


	return 0;
}