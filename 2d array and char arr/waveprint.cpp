#include<iostream>
using namespace std;
void waveprint(int arr[100][100],int tr,int tc){

	
	for(int j=0;j<=tc-1;j++){//6
	if(j%2==0){
		// dw
		for(int k=0;k<=tr-1;k++){
			cout<<arr[k][j]<<" ";
		}
	}
	else{
		// upw
		for(int k=tr-1;k>=0;k--){
			cout<<arr[k][j]<<" ";
		}
	}
}



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




	for(int i=0;i<=tr-1;i++){
	for (int j = 0; j <=tc-1; j++)
	{
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
	}




	// wave print
	waveprint(arr,tr,tc);





	return 0;
}