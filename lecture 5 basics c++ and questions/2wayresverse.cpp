#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int no;
	cin>>no;//5439
	int rev=0;



	while(no!=0){
	int ld=no%10;//5


		rev=rev*10+ld;//9345

		no=no/10;//0
	}
	cout<<rev<<endl;



	return 0;
}