#include<iostream>
#include<stack>
using namespace std;
bool checkbalance(string a){
	stack<char> s;


	for (int i = 0; a[i]!='\0'; i++)
	{
		char ch=a[i];
		switch(ch){
			case '(':s.push(ch);
					break;
			case '[':s.push(ch);
					break;
			case '{':s.push(ch);
					break;
			case '<':s.push(ch);
					break;


			case ')':if(!s.empty() and s.top()=='('){
					s.pop();
					}
					else{
						return false;
					}
					break;

			case '}':if(!s.empty() and s.top()=='{'){
					s.pop();
					}
					else{
						return false;
					}
					break;

			case '>':if(!s.empty() and s.top()=='<'){
					s.pop();
					}
					else{
						return false;
					}
					break;

			case ']':if(!s.empty() and s.top()=='['){
					s.pop();
					}
					else{
						return false;
					}
					break;
		}
	}


	return s.empty();


}

int main(){


	// string a="([[{<>}]({})]())";
	string a="([[{<>}>({})]())";
	cout<<checkbalance(a)<<endl;
	

	

	return 0;
}