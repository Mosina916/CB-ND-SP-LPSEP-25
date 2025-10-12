#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;


	// ist row
	for(int i=1;i<=tr;i++){
		cout<<'*';
	}
	cout<<endl;


	// 1 to 5 rows



	for(int rowno=1;rowno<=(tr-1)/2;rowno=rowno+1){//2

		// stars
	for(int i=1;i<=(tr+1)/2-rowno;i++){
		cout<<'*';

	}
	// space
	for(int j=1;j<=2*rowno-1;j++){
		cout<<' ';
		
	}
	// star
	for(int i=1;i<=(tr+1)/2-rowno;i++){
		cout<<'*';

	}
	cout<<endl;

}	




// part 3
for(int rowno=1;rowno<=(tr-2)/2;rowno=rowno+1){

		// stars
	for(int i=1;i<=rowno+1;i++){
		cout<<'*';

	}
	// space
	for(int j=1;j<=tr-2-2*rowno;j++){
		cout<<' ';
		
	}
	// star
	for(int i=1;i<=rowno+1;i++){
		cout<<'*';

	}
	cout<<endl;
}



// part 4 

	for(int i=1;i<=tr;i++){
		cout<<'*';
	}
	cout<<endl;



	


	return 0;
}

