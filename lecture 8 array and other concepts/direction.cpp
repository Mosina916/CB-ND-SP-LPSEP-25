#include<iostream>
using namespace std;
int main(){

	int x=0;
	int y=0;



	char ch;
	ch=cin.get();//W
	while(ch!='\n'){
	if(ch=='S'){
		y--;// 
	}
	else if(ch=='N'){
		y++; //2 -2
	}
	else if(ch=='E'){
		x++; //
	}
	else{
		x--;//2 -2
	}
	ch=cin.get();//W
}

// cout<<x<<" "<<y<<endl; //2 -2 



if(x>=0 and y>=0){
	// ist q
	for(int i=1;i<=x;i++){
		cout<<'E';
	}
	for(int i=1;i<=y;i++){
		cout<<'N';
	}
}
else if(x<=0 and y>=0){
	// 2nd q
	for(int i=1;i<=y;i++){
		cout<<'N';
	}
	for(int i=1;i<=abs(x);i++){
		cout<<'W';
	}
}
else if(x<=0 and y<=0){
	// 3rd q
	for(int i=1;i<=abs(y);i++){
		cout<<'S';
	}
	for(int i=1;i<=abs(x);i++){
		cout<<'W';
	}
}
else{
	// 4th q
	for(int i=1;i<=x;i++){
		cout<<'E';
	}
	for(int i=1;i<=abs(y);i++){
		cout<<'S';
	}
}



	return 0;
}