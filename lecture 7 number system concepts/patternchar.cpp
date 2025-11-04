#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main(){
	int tr;
	cin>>tr;

	for(int rowno=1;rowno<=tr;rowno++){

	// stars
		char stc='A';
	for(int i=1;i<=tr+1-rowno;i++){
		cout<<stc<<" ";
		stc=stc+1;//f
	}

	stc=stc-1;//e
	// hash

	for(int i=1;i<=tr+1-rowno;i++){
		cout<<stc<<" ";
		stc=stc-1;
	}

	cout<<endl;
}



	return 0;
}