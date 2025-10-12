#include <iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;
	int stno=1;
	for(int rowno=1;rowno<=tr;rowno=rowno+1){
	
	// kuch spaces
	for(int i=1;i<=tr-rowno;i=i+1){
		cout<<" "<<'\t';

	}
	// kuch stars
	int stno=1;
	for(int j=1;j<=rowno;j=j+1){
		cout<<stno<<'\t';
		stno=stno+1;//5
	
	}

		// kuch hash
	stno=stno-2;
	for(int j=1;j<=rowno-1;j=j+1){
		cout<<stno<<'\t';
		stno=stno-1;
		
	}
	
	cout<<endl;
}

	return 0;
}