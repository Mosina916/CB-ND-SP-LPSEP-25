#include<iostream>
using namespace std;
int main(){

	// int a;//sma
	// a=10;
	// dma variables

	int*ptr =new int;
	*ptr=10;

	cout<<*ptr<<endl;


	// delete pointername
	delete ptr;//free 
	ptr=NULL;


	// int arr[5];
	// for (int i = 0; i <5; ++i)
	// {
	// 	cin>>arr[i];
	// }

	// for (int i = 0; i <5; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;

	int *ptrr=new int[5];

		for (int i = 0; i <5; ++i)
	{
		cin>>ptrr[i];
	}

		for (int i = 0; i <5; ++i)
	{
		cout<<ptrr[i]<<" ";
	}

	cout<<endl;


	// delete[]pointername;

	delete[] ptr;
	ptr=NULL;


	// 2d array 

	// int arr[4][5];

	// for (int i = 0; i <4; ++i)
	// {
	// 	for(int j=0;j<5;j++){
	// 		cin>>arr[i][j];
	// 	}
	// }

	// for (int i = 0; i <4; ++i)
	// {
	// 	for(int j=0;j<5;j++){
	// 		cout<<arr[i][j]<<" ";
	// 	}

	// 	cout<<endl;
	// }


	int **ttr=new int*[4];
	for(int i=0;i<4;i++){
		ttr[i]=new int[5];
	}



	for (int i = 0; i <4; ++i)
	{
		for(int j=0;j<5;j++){
			cin>>ttr[i][j];
		}
	}

	for (int i = 0; i <4; ++i)
	{
		for(int j=0;j<5;j++){
			cout<<ttr[i][j]<<" ";
		}

		cout<<endl;
	}

	for (int i = 0; i < 4; ++i)
	{
		delete[] ttr[i];
		ttr[i]=NULL:
	}

	delete[]ttr;

	ttr=NULL;








	return 0;
}