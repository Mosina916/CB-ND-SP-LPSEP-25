#include<iostream>
using namespace std;
string moveallxatend(string s){
	if(s.length()==0){
		return "";

	}


	char ch=s[0];//'p'
	if(ch=='x'){
		return moveallxatend(s.substr(1))+ch;//"abcxxxx"

	}
	else{
		return ch+moveallxatend(s.substr(1));//"pabcxxx"

	}
}

int main(){
	string s;
	getline(cin,s);
	cout<<moveallxatend(s)<<endl;

	
	


	return 0;
}