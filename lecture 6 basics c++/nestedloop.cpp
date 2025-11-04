
#include<iostream>
using namespace std;


int main(){



	
	// for(int j=1;j<=5;j++){
	// 	if(j==4){
	// 	break;
	// }
	// 	for(int i=1;i<=6;i++){
	// 		if(i==5){
	// 			break;
	// 		}
	// 	cout<<i<<" ";
	// }

	// cout<<endl;


	// }

	for(int j=1;j<=5;j++){
		if(j==4){
		continue;
	}
		for(int i=1;i<=6;i++){
			if(i==5){
				continue;
			}
		cout<<i<<" ";
	}

	cout<<endl;


	}

	





	return 0;
}