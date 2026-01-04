#include<iostream>
#include<queue>
using namespace std;
void bubblesortprerec(int arr[],int n,int step,int j){
	if(step==n){
		return;
	}

	// rec case
	if(j==n-step){
		bubblesortprerec(arr,n,step+1,0);

	}
	else{
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
		bubblesortprerec(arr,n,step,j+1);
	}
	// 1 2 3 4 5
	
}
int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	bubblesortprerec(arr,n,1,0);


	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	




	return 0;
}