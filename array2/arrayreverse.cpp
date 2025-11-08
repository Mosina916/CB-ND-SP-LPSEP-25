
#include<iostream>
using namespace std;


int main(){

	int arr[100];
	int n;
	cin>>n;//8
	for (int i = 0; i <=n-1; ++i)
	{
		cin>>arr[i];
	}


	// sol

	int i=0;
	int j=n-1;

	while(i<j){
	swap(arr[i],arr[j]);
	i++;
	j--;
}


for (int i = 0; i <=n-1; i++)
{
	cout<<arr[i]<<" ";
}

cout<<endl;


	return 0;
}