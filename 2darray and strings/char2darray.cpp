#include<iostream>
using namespace std;

int main(){
	// int arr[4][6]={
	// 	{4,3,6,5,7,1},
	// 	{6,8,0,9,2,3},
	// 	{5,7,6,8,9,1},
	// 	{3,6,8,5,9,0}
	// };



	// int arr[3][4]={
	// 	{4,3,6,5},
	// 	{6,8,0,9},
	// 	{5,7,6,8}
	// };


	// cout<<&arr[0][0]<<endl;
	// cout<<&arr[1][0]<<endl;
	// cout<<&arr[2][0]<<endl;

		char arr[3][4]={
		{'a','d','q','t'},
		{'f','a','j','k'},
		{'l','g','q','p'}
	};


	cout<<&arr[0][0]<<endl;//780
	cout<<&arr[1][0]<<endl;//784
	cout<<&arr[2][0]<<endl;//788



	return 0;
}