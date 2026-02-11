#include<iostream>
using namespace std;

class circularqueue{
public:
	int *arr;
	int f;
	int r;
	int cs;
	int ts;
	circularqueue(int size){
		arr=new int[size];
		cs=0;
		ts=size;
		f=0;
		r=-1;

	}
	void push(int d){
		if(cs<ts){
			r=(r+1)%ts;
			arr[r]=d;
			cs++;
		}

		else{
			cout<<"overflow"<<endl;
		}
	}

	void deleteele(){
		if(cs>0){
			f=(f+1)%ts;

			
			cs--;
		}

		else{
			cout<<"underflow"<<endl;
		}
	}

	int front(){
		return arr[f];
	}

	int size(){

		return cs;

	}

	bool empty(){
		return cs==0;
	}
	
	
};

int main(){
// int arr[1000];
	// int n;
	// cin>>n;//1000000000
	// int arr[n];
	// int *ptr=new int [n];

	
	circularqueue s(5);
	s.push(3);
	s.push(13);
	s.push(2);
	s.push(4);
	s.push(14);
	s.push(40);//overflow

	s.deleteele();
	s.deleteele();
	s.deleteele();

	s.push(80);
	s.push(70);
	

	// cout<<s.v[2]<<endl;
	

	while(!s.empty()){
	cout<<s.front()<<" ";//4 14
	s.deleteele();
}

	return 0;
}