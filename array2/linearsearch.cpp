
#include<iostream>
using namespace std;


int main(){

	int arr[100];
	int n;
	cin>>n;//6
	for (int i = 0; i <=n-1; ++i)
	{
		cin>>arr[i];
	}

	int key;
	cin>>key;


	// sol
	// int i=0;

// 	for(;i<=n-1;i++){
// 	if(arr[i]==key){
// 		cout<<"key is present at index "<<i<<endl;
// 		break;
// 	}
// }

// if(i==n){
// 	cout<<"key is not present"<<endl;
// }
	bool kyakeymili=false;

	int i=0;
	for(;i<=n-1;i++){
	if(arr[i]==key){
		cout<<"key is present at index "<<i<<endl;
		kyakeymili=true;
		
	}
}

if(kyakeymili==false){
	cout<<"key is not present"<<endl;
}


	return 0;
}