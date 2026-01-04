#include<iostream>
#include<queue>
using namespace std;
string repalceby314(string s){
	// base case
	if(s.length()<=1){
		return s;

	}


	// rec case
	string x=s.substr(0,2);//"pi"
	if(x=="pi"){
		return "3.14"+repalceby314(s.substr(2));
	}
	else{
		return s[0]+repalceby314(s.substr(1));

	}
}

int main(){

	string s;
	getline(cin,s);
	cout<<repalceby314(s)<<endl;
	



	return 0;
}