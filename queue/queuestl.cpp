#include<iostream>
#include<queue>
using namespace std;


int main(){

	
	queue<int> s;
	s.push(3);
	s.push(13);
	s.push(2);
	s.push(4);
	s.push(14);
	s.push(40);//overflow

	s.pop();
	s.pop();
	s.pop();

	s.push(80);
	s.push(70);
	

	// cout<<s.v[2]<<endl;
	

	while(!s.empty()){
	cout<<s.front()<<" ";//4 14
	s.pop();
}

	return 0;
}