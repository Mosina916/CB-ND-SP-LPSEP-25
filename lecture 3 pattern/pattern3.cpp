#include <iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;
	
	for(int rowno=1;rowno<=tr;rowno=rowno+1){

	for(int i=1;i<=tr+1-rowno;i++){
		cout<<'*';
	}
	cout<<endl;
}

	return 0;
}