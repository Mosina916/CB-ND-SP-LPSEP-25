#include<iostream>
#include<queue>
using namespace std;

class stack{
public:

	queue<int> q1;
	queue<int> q2;


	void push(int d){//30 10 20 50 60
		if(q1.empty() and q2.empty()){
			q1.push(d);
		}
		else if(!q1.empty() and q2.empty()){
			q1.push(d);
		}
		else{
			q2.push(d);
		}
	}

	void pop(){

		if(q1.empty() and q2.empty()){
			return;
		}
		else if(!q1.empty() and q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();
		}
		else{
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();

		}

	}

	int top(){
		int x=-1;

		if(q1.empty() and q2.empty()){
			// return ;
		}
		else if(!q1.empty() and q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			x=q1.front();//20
			q2.push(q1.front());
			q1.pop();

			// return x;
		}
		else{
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			x=q2.front();//20
			q1.push(q2.front());
			q2.pop();

			// return x;

		}

		return x;


	}

	int size(){
		return q1.size()+q2.size();
	}

	bool empty(){

		  return (q1.size()+q2.size()) ==0;

	}

	
	
};

int main(){


	stack s;
	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		int ele;//-10
	cin>>ele;
	s.push(ele);
	}
	// int ele;
	// cin>>ele;

	// s.push(3);
	// s.push(13);
	// s.push(2);
	// s.push(4);
	// s.push(14);
	// s.push(40);//overflow

	s.pop();
	s.pop();
	s.pop();

	s.push(80);
	s.push(70);


	while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}


	

	return 0;
}