#include <iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;

	for(int rowno=1;rowno<=tr;rowno=rowno+1){
	
	// kuch spaces
	for(int i=1;i<=rowno-1;i=i+1){
		cout<<"  ";

	}


	// kuch stars
	for(int j=1;j<=2*tr+1-2*rowno;j=j+1){
		cout<<"* ";
	}
	cout<<endl;
}

	return 0;
}