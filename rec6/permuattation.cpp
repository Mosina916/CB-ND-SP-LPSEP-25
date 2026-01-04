#include<iostream>
using namespace std;
void permutation(char inpu[100],int i){
	// base case
	if(inpu[i]=='\0'){
		cout<<inpu<<" ";
		return;
	}


	// rec case
	for(int j=i;inpu[j]!='\0';j++){
	swap(inpu[i],inpu[j]);
	permutation(inpu,i+1);
	// swap(inpu[i],inpu[j]);//backtracking
	

}

}

 int main(){

 	char inpu[100];//"ABC"
 	cin.getline(inpu,100);
 	permutation(inpu,0);


 	return 0;
 }


