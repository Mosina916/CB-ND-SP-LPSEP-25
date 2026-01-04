#include<iostream>
using namespace std;
void decorder(int n){

	// /abase case
	if(n==0){
		return;

	}

	// rec case
	cout<<n<<" "; //5  4 3 2 1
	decorder(n-1);

}

int main(){
	int n;
	cin>>n;//5

	decorder(n);//5 4 3 2 1



	return 0;
}