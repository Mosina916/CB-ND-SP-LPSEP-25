#include<iostream>
using namespace std;
int convertstringtoint(string s,int l){//"3402"
// base case
if(l==0){
	return 0;

}
// rec case
int x=convertstringtoint(s,l-1);//340
int a=s[l-1]-'0';//'2'-'0'-->2
return x*10+a;//3402

}
int main(){

	string s;
	getline(cin,s);
	// cout<<s+"4356"<<endl;
	int l=s.length();
	cout<<convertstringtoint(s,l)<<endl;



	return 0;
}