#include<iostream>
#include<queue>
using namespace std;
void bubblesort(int arr[],int n,int step){
	if(step==n){
		return;
	}

	// rec case
	for(int j=0;j<=n-1-step;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
	// 1 2 3 4 5
	bubblesort(arr,n,step+1);


}
int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	bubblesort(arr,n,1);


	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	




	return 0;
}