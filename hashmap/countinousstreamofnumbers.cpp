#include<iostream>
#include<queue>
using namespace std;
#define heap priority_queue<int,vector<int> , greater<int> >

void printheap(heap h){
	while(!h.empty()){
			cout<<h.top()<<" ";
			h.pop();
			}

}
int main(){

	// 4 1 7 8 0 9  22  6 -->n =8

	int count=0;
	heap h;
	


	int k;cin>>k;//3
	while(30){
	
	int data;//13
	cin>>data;//
	if(count<=k-1){

	h.push(data);// 2 4 0
	count++;//4
	}
	else{
		if(data>h.top()){ //-2
			h.pop();
			h.push(data);


		}
		else if(data==-1){


			printheap(h);

		}

	}

}








	// kth largest -->4  o/p 8

	// all k largest -->4  o/p 22 15 9 8
	

	return 0;
}