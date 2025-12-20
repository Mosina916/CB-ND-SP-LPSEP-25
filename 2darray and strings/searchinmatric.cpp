#include<iostream>
using namespace std;
bool searchinarr(int arr[100][100],int tr,int tc,int key){

	
	for(int i=0;i<=tr-1;i++){//2
	for(int j=0;j<=tc-1;j++){
	if(arr[i][j]==key){
		cout<<"key is present at index "<<i<<" "<<j<<endl;
		return true;

	}
}
}

	return false;
}
int main(){
	// datatype arrayname[tr][tc];
	int arr[100][100];
	int tr,tc;
	cin>>tr>>tc;//5 6


	for(int i=0;i<=tr-1;i++){
	for (int j = 0; j <=tc-1; j++)
	{
		cin>>arr[i][j];
	}
	
	}




	// for(int i=0;i<=tr-1;i++){
	// for (int j = 0; j <=tc-1; j++)
	// {
	// 	cout<<arr[i][j]<<" ";
	// }
	// cout<<endl;
	// }

	int key;
	cin>>key;//19


	// wave print
	cout<<searchinarr(arr,tr,tc,key)<<endl;





	return 0;
}