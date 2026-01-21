#include<iostream>
using namespace std;
int solmat[100][100]={0};
int co=0;
bool ratinamaze(char arr[100][100],int tr,int tc,int i,int j){
	if(i==tr-1 and j==tc-1){
		solmat[i][j]=1;
		for(int k=0;k<tr;k++){
			for(int l=0;l<tc;l++){
				cout<<solmat[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		co++;
		// return true;

		return false;

	}

	solmat[i][j]=1;
	// forward jaane se pehle check
	if(j<=tc-2 and arr[i][j+1]=='O'){
		bool riakaans=ratinamaze(arr,tr,tc,i,j+1);//4 3
		if(riakaans==true){
			return true;
		}


	}

	if(i<=tr-2 and arr[i+1][j]=='O'){
		bool riakaans=ratinamaze(arr,tr,tc,i+1,j);
		if(riakaans==true){
			return true;
		}

		
	}

	solmat[i][j]=0;
	return false;


}

 int main(){

 	char arr[100][100]={"OOOCO",
 						"OOOOC",
 						"CCOCC",
 						"OCOCC",
 						"OOOOC",
 						"OCCOO"
							};

int tr=6;
int tc=5;
ratinamaze(arr,tr,tc,0,0);

cout<<co<<endl;

 	

 	return 0;
 }


