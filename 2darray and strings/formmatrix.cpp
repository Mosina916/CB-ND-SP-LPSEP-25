#include<iostream>
using namespace std;
void formmatxo(int arr[100][100],int tr,int tc){
	char ch='X';
	int sr=0,er=tr-1,sc=0,ec=tc-1;
	while(sr<=er and sc<=ec){
	// pehla row print 
	for(int i=sc;i<=ec;i++){
		arr[sr][i]=ch;
	}
	sr++;


	// last col
	for(int j=sr;j<=er;j++){
		arr[j][ec]=ch;
	}
	ec--;


	// last row
	if(sr<=er){
	for(int k=ec;k>=sc;k--){
		arr[er][k]=ch;
	}
}
	er--;
	// ist row
	if(sc<=ec){
	for(int l=er;l>=sr;l--){
		arr[l][sc]=ch;
	}
}
	sc++;
	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}
}



}

int main(){
	char arr[100][100];
	int tr,tc;
	cin>>tr>>tc;//8 9


	


	formmatxo(arr,tr,tc);
	for(int i=0;i<=tr-1;i++){
	for (int j = 0; j <=tc-1; j++)
	{
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
	
	}


	return 0;
}