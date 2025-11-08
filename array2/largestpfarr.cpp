
#include<iostream>
using namespace std;


int main(){

	int arr[100];
	int n;
	cin>>n;//6
	for (int i = 0; i <=n-1; ++i)
	{
		cin>>arr[i];
	}//3 5 2 12 -4 7


	int largest=arr[0];//3
	for(int i=1;i<=n-1;i++){
	if(arr[i]>largest){
		largest=arr[i];//17
	}
}


cout<<"largest ele is "<<largest<<endl;





	return 0;
}