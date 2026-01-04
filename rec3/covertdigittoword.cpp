#include<iostream>
using namespace std;
string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void converttowordrev(int n){//2048 -->eight four zero two
	// base case
	if(n==0){
		return;
	}



	// rec case
	int x=n%10;//8
	cout<<arr[x]<<" ";//eight
	converttowordrev(n/10);



}


void converttowordinc(int n){//2048 -->eight four zero two
	// base case
	if(n==0){
		return;
	}

	// rec case
	converttowordinc(n/10);//"two zero four"

	int x=n%10;
	cout<<arr[x]<<" ";


}
int main(){

	int n;
	cin>>n;//2048
	converttowordrev(n);
	cout<<endl;
	converttowordinc(n);

	


	return 0;
}