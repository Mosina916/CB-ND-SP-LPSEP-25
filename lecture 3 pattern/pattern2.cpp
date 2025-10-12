#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int stno=1;
	
	for(int rowno=1;rowno<=n;rowno=rowno+1){


		

	for(int i=1;i<=rowno;i++){
		cout<<stno<<'\t';
		stno=stno+1;
	}
	cout<<endl;
}

	return 0;
}