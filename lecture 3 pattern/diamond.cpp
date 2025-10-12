#include <iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;//9
// ==========================================================
	for(int rowno=1;rowno<=(tr+1)/2;rowno=rowno+1){
	
	// kuch spaces
	for(int i=1;i<=(tr+1)/2-rowno;i=i+1){
		cout<<"  ";

	}


	// kuch stars
	for(int j=1;j<=2*rowno-1;j=j+1){
		cout<<"* ";
	}
	cout<<endl;
}


// ===========================================
	// lowerpart
	


	for(int rowno=1;rowno<=tr-(tr+1)/2;rowno++){
		// spaces
	for(int i=1;i<=rowno;i=i+1){
		cout<<"  ";

	}


	// kuch stars
	for(int j=1;j<=tr-2*rowno;j=j+1){
		cout<<"* ";
	}
	cout<<endl;
	}


	return 0;
}