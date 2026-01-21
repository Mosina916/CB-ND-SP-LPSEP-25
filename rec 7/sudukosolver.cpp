#include<iostream>
using namespace std;
int solmat[100][100]={0};

bool kyamainumrakhsaktihun(int mat[9][9],int i,int j,int n,int num){//i-->7 4 num-->8
	// vertical check
	for (int l = 0; l <n; l++)
	{
		if(mat[l][j]==num){
			return false;
		}
	}


	// horizontal check 
	for (int l = 0; l <n; l++)
	{
		if(mat[i][l]==num){
			return false;
		}
	}
	// root n * root
	int a=sqrt(n);//3
	int si=(i/a)*a;//6
	int sj=(j/a)*a;//3

	for(int s=si;s<si+a;s++){//6 7
	for(int t=sj;t<sj+a;t++){//3
	if(mat[s][t]==num){
		return false;
	}
}
}


	return true;



}


bool sudukosolver(int mat[9][9],int i,int j,int n){//0 2
	// base case
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<mat[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;

		return true;
	}


	// rec case
	if(j==n){
		return sudukosolver(mat,i+1,0,n);
	}

	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1,n);
	}
	else{
		for(int num=1;num<=n;num++){
		if(kyamainumrakhsaktihun(mat,i,j,n,num)){
			mat[i][j]=num;
			bool reckaans=sudukosolver(mat,i,j+1,n);//false
			if(reckaans==true){
				return true;
			}
			mat[i][j]=0;

		}
	}

	return false;


	}

}


 int main(){

 		int mat[9][9] =
	{{5,3,0,0,7,0,0,0,0},
	{6,0,0,1,9,5,0,0,0},
	{0,9,8,0,0,0,0,6,0},
	{8,0,0,0,6,0,0,0,3},
	{4,0,0,8,0,3,0,0,1},
	{7,0,0,0,2,0,0,0,6},
	{0,6,0,0,0,0,2,8,0},
	{0,0,0,4,1,9,0,0,5},
	{0,0,0,0,8,0,0,7,9}};

	sudukosolver(mat,0,0,9);
 	

 	return 0;
 }


