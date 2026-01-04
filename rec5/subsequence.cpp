#include<iostream>
#include<queue>
using namespace std;
int co=0;
void subsequence(char inpu[100],char out[100],int i,int j){
	// base case
	if(inpu[i]=='\0'){
		out[j]='\0';
		cout<<out<<" ";
		co++;
		return;
	}
	// rec case
	// without a
	subsequence(inpu,out,i+1,j);
	// with a
	out[j]=inpu[i];
	subsequence(inpu,out,i+1,j+1);
}


int main(){

	char inpu[100];
	cin.getline(inpu,100);

	char out[100];

	subsequence(inpu,out,0,0);
	cout<<co<<endl;
	




	return 0;
}