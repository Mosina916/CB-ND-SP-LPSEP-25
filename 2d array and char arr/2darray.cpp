#include<iostream>
using namespace std;

int main(){
	// datatype arrayname[tr][tc];
	int arr[5][6];

	for(int i=0;i<=4;i++){
	for (int j = 0; j <=5; j++)
	{
		cin>>arr[i][j];
	}
	
	}

	for(int i=0;i<=4;i++){
	for (int j = 0; j <=5; j++)
	{
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
	}


	// for (int i = 0; i <=5; ++i)
	// {
	// 	cin>>arr[1][i];
	// }

	// for (int i = 0; i <=5; ++i)
	// {
	// 	cin>>arr[2][i];
	// }

	// for (int i = 0; i <=5; ++i)
	// {
	// 	cin>>arr[3][i];
	// }

	// for (int i = 0; i <=5; ++i)
	// {
	// 	cin>>arr[4][i];
	// }



	return 0;
}