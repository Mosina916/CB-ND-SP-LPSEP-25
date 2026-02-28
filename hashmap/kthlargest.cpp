#include<iostream>
#include<queue>
using namespace std;
#define heap priority_queue<int,vector<int> , greater<int> >
int main(){

	// 4 1 7 8 0 9  22  6 -->n =8

	int count=0;
	heap h;
	int n;
	cin>>n;//8
	int k;cin>>k;//4

	for(int i=0;i<n;i++){
	int data;//
	cin>>data;//4 1 7 8 0 9
	if(count<=k-1){

	h.push(data);// 4 1 7 8
	count++;//4
	}
	else{
		if(data>h.top()){ //9
			h.pop();
			h.push(data);


		}

	}

}


cout<<h.top()<<endl;


while(!h.empty()){
cout<<h.top()<<" ";
h.pop();
}






	// kth largest -->4  o/p 8

	// all k largest -->4  o/p 22 15 9 8
	

	return 0;
}