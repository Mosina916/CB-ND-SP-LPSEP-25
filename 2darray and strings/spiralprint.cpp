#include<iostream>
using namespace std;
void spiralprint(int arr[100][100],int tr,int tc){

	int sr=0,er=tr-1,sc=0,ec=tc-1;
	while(sr<=er and sc<=ec){
	// pehla row print 
	for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<" ";
	}
	sr++;


	// last col
	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<" ";
	}
	ec--;


	// last row
	if(sr<=er){
	for(int k=ec;k>=sc;k--){
		cout<<arr[er][k]<<" ";
	}
}
	er--;
	// ist row
	if(sc<=ec){
	for(int l=er;l>=sr;l--){
		cout<<arr[l][sc]<<" ";
	}
}
	sc++;
}



}

int main(){
	int arr[100][100];
	int tr,tc;
	cin>>tr>>tc;//6 5


	for(int i=0;i<=tr-1;i++){
	for (int j = 0; j <=tc-1; j++)
	{
		cin>>arr[i][j];
	}
	
	}


	spiralprint(arr,tr,tc);

	return 0;
}