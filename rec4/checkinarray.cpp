#include<iostream>
#include<queue>
using namespace std;
// int check7firstindex(int arr[],int n,int i){
// 	// base case
// 	if(i==n){
// 		return -20;
// 	}

// 	// rec case
// 	if(arr[i]==7){
// 		return i;
// 	}
// 	return check7firstindex(arr,n,i+1);


// }


// int check7lastindex(int arr[],int n,int i){
// 	// base case
// 	if(i==n){
// 		return -1;
// 	}

// 	// rec case
// 	if(arr[i]==7){
// 		return i;
// 	}
// 	return check7lastindex(arr,n,i-1);


// }


void printallindex7(int arr[],int n,int i){

	if(i==n){
		return;
	}


	// rec case
	if(arr[i]==7){
		cout<<i<<" ";
	}
	printallindex7(arr,n,i+1);

}
int main(){


	int arr[]={2,3,7,4,7,4,7,3,6};
	int n=sizeof(arr)/sizeof(int);
	// int x=check7firstindex(arr,n,0);
	// if(x<0){
	// 	cout<<"7 is not prsent"<<endl;
	// }
	// else{
	// 	cout<<"7 is prsent at index "<<x<<endl;

	// }

	// int x=check7lastindex(arr,n,n-1);
	// if(x<0){
	// 	cout<<"7 is not prsent"<<endl;
	// }
	// else{
	// 	cout<<"7 is prsent at index "<<x<<endl;

	// }


	printallindex7(arr,n,0);







	return 0;
}