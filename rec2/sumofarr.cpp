#include<iostream>
using namespace std;
int sumofarr(int arr[],int n){
	// base case 
	if(n==0){
		return 0;
	}
	// rec case
	return sumofarr(arr,n-1)+arr[n-1];

}

int sumofarr2(int arr[],int n){
	// base case 
	if(n==0){
		return 0;
	}

	// rec case
	return sumofarr2(arr+1,n-1)+arr[0];

}


int sumofarr3(int arr[],int n,int i){
	// base case 
	if(i==n){
		return 0;
	}
	// rec case
	return sumofarr3(arr,n,i+1)+arr[i];

}


int main(){
	int arr[]={3,5,2,1,6};
	int n=sizeof(arr)/sizeof(int);
	cout<<sumofarr(arr,n)<<endl;
		cout<<sumofarr2(arr,n)<<endl;
		cout<<sumofarr3(arr,n,0)<<endl;



	return 0;
}