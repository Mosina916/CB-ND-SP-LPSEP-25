#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;


	// ist row
	int stno=1;
	for(int i=1;i<=tr;i++){
		cout<<stno;
		stno=stno+1;
	}
	cout<<endl;


	// 1 to 5 rows



	for(int rowno=1;rowno<=(tr-1)/2;rowno=rowno+1){//2

		// stars
		int stnoo=1;
	for(int i=1;i<=(tr+1)/2-rowno;i++){
		cout<<stnoo;
		stnoo=stnoo+1;

	}
	// space
	for(int j=1;j<=2*rowno-1;j++){
		cout<<' ';
		
	}
	// star
	int startno=(tr+1)/2-rowno;
	for(int i=1;i<=(tr+1)/2-rowno;i++){
		cout<<startno;
		startno=startno-1;

	}
	cout<<endl;

}	




// part 3
for(int rowno=1;rowno<=(tr-2)/2;rowno=rowno+1){

		// stars
	int stano=1;
	for(int i=1;i<=rowno+1;i++){
		cout<<stano;
		stano=stano+1;

	}
	// space
	for(int j=1;j<=tr-2-2*rowno;j++){
		cout<<' ';
		
	}
	// star
	int sno=rowno+1;
	for(int i=1;i<=rowno+1;i++){
		cout<<sno;
		sno=sno-1;

	}
	cout<<endl;
}



// part 4 
	int starttno=1;
	for(int i=1;i<=tr;i++){
		cout<<starttno;
		starttno=starttno+1;
	}
	cout<<endl;



	


	return 0;
}

