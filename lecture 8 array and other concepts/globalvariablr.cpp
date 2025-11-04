#include<iostream>
using namespace std;
// int d=30;
#define d 30;
int main(){
	int a=10;
	int b=90;
	int d=78;
	::d=::d+20;
	if(b>50){
		int a=40;
		int c=80;
		b=b+20;
		int d=65;
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
			cout<<::d<<endl;

	}
	
		cout<<a<<endl;
		cout<<b<<endl;
		// cout<<c<<endl;
		cout<<d<<endl;


	return 0;
}