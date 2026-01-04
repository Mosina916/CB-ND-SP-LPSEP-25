#include<iostream>
using namespace std;
void sortarr(int arr[],int s,int e){
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;

	int temp[100];
	int k=s;

	while(j<=e and i<=mid){
	if(arr[i]<arr[j]){
		temp[k]=arr[i];
		k++;
		i++;

	}
	else{
		temp[k]=arr[j];
		j++;
		k++;
	}
}
	while(i<=mid){
	temp[k]=arr[i];
	k++;
	i++;
}

while(j<=e){
	temp[k]=arr[j];
	k++;
	j++;
}


// copy elements from temp to arr


for(int l=s;l<=e;l++){
	arr[l]=temp[l];

}



}


void mergesort(int arr[],int s,int e){

	// base case
	if(s==e){
		return;
	}


	// rec case 
	int mid=(s+e)/2;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	sortarr(arr,s,e);
}

 int main(){

 	int arr[]={4,1,3,5,2};
 	int n=sizeof(arr)/sizeof(int);
 	mergesort(arr,0,n-1);


 	for (int i = 0; i <=n-1 ; ++i)
 	{
 		cout<<arr[i]<<" ";
 	}
 	cout<<endl;
 	return 0;
 }


