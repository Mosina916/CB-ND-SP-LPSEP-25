#include<iostream>
using namespace std;

int main(){
	int no;
	cin>>no;

	int sum=0;
	while(no!=0){

		int ld=no%10;//yahan last digit nikal rahe hai 
		sum=sum+ld;////yahan last digit add kar rahe hai 
		no=no/10;////yahan last hata rahe hai 
	}


	cout<<sum<<endl;

	return 0;
}