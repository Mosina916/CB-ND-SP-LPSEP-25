#include<iostream>
using namespace std;
bool binarysearchrec(int arr[],int s,int e,int key){
	// base case
	if(s>e){
		return false;
	}


	// rec case
	int mid=(s+e)/2;//4
	if(arr[mid]==key){
		return true;

	}
	else if(key>arr[mid]){
		return binarysearchrec(arr, mid+1,e,key);
	}
	else{
		return binarysearchrec(arr,s,mid-1,key);
	}

}

int main(){

	int arr[]={2,3,5,7,9,10,12,16,17,20};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	
	cout<<binarysearchrec(arr,0,n-1,key)<<endl;

	


	return 0;
}