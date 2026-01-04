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


 int main(){

 	int arr[]={1,4,7,8,13,15,0,2,3,10,11};
 	int n=sizeof(arr)/sizeof(int);
 	sortarr(arr,0,n-1);


 	for (int i = 0; i <=n-1 ; ++i)
 	{
 		cout<<arr[i]<<" ";
 	}
 	cout<<endl;
 	return 0;
 }


