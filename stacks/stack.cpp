#include<iostream>
using namespace std;

class stack{
	
	vector<int>v;

	public:
	// push

	void push(int d){
		v.push_back(d);
	}

	// pop

	void pop(){
		v.pop_back();
	}


	// top

	int top(){
		return v[v.size()-1];
	}


	// empty

	bool empty(){
		return v.size()==0;

	}


	// siZe
	int size(){
		return v.size();
	}
	
};

int main(){
	
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