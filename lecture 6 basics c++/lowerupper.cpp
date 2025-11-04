
#include<iostream>
using namespace std;


int main(){

	char ch;
	cin>>ch;//T ? /
	// impliciti type  casting
	// 'A'-->65
	// "Z"-->90

	// 'a'-->97
	// 'z'-->122

	// if(ch>='A' && ch<='Z'){
	// 	cout<<"uppercase"<<endl;
	// }
	// else if(ch>='a' and ch<='z'){
	// 	cout<<"lowercase"<<endl;
	// }
	// else{
	// 	cout<<"some other character"<<endl;
	// }


	// if(ch>=65 && ch<=90){
	// 	cout<<"uppercase"<<endl;
	// }
	// else if(ch>=97 and ch<=122){
	// 	cout<<"lowercase"<<endl;
	// }
	// else{
	// 	cout<<"some other character"<<endl;
	// }



		if(isupper(ch)){
		cout<<"uppercase"<<endl;
	}
	else if(islower(ch)){
		cout<<"lowercase"<<endl;
	}
	else{
		cout<<"some other character"<<endl;
	}



	





	return 0;
}