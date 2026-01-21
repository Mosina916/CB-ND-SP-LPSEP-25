#include<iostream>
using namespace std;
int solmat[100][100]={0};

bool kyamaiqueenrakhsaktihun(int n,int i,int j){//4 3
	// vertical check
	for (int l = 0; l <i; l++)
	{
		if(solmat[l][j]==1){
			return false;
		}
	}
	// eft dia

	int u=i-1;//3
	int v=j-1;//2

	while(u>=0 and v>=0){

	if(solmat[u][v]==1){
			return false;
		}
		u--;
		v--;

	}


	// right dia

	u=i-1;//3
	v=j+1;//2

	while(u>=0 and v<=n-1){

	if(solmat[u][v]==1){
			return false;
		}
		u--;
		v++;

	}


	return true;



}


int co=0;

bool nqueen(int n,int i){
	if(i==n){

		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<solmat[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		co++;

		// return true;
		return false;

	}


	for(int j=0;j<n;j++){
	if(kyamaiqueenrakhsaktihun(n,i,j)){
		solmat[i][j]=1;
		bool reckaans=nqueen(n,i+1);//true
		if(reckaans==true){
			return true;
		}


		solmat[i][j]=0;

	}
}
return false;

}


 int main(){

 	int n;
 	cin>>n;
 	nqueen(n,0);

 	cout<<co<<endl;

 	

 	return 0;
 }


