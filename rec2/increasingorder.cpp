#include<iostream>
using namespace std;
void incorder(int n){
	// /abase case
	if(n==0){
		return;
	}
	
	// rec case
	incorder(n-1);
	cout<<n<<" ";//1 2 3 4 5
	

}

int main(){
	int n;
	cin>>n;//5

	incorder(n);//1 2 3 4 5



	return 0;
}