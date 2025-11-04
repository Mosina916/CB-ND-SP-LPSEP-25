#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int no;
	cin>>no;//5439
	
	int x=no;//5439

	
	int cd=0;
	while(no!=0){
	no=no/10;//0
	cd=cd+1;//4
}


// cd-->4
// no-->0

// x-->5392


int sum=0;


// while(x!=0){

// 	int ld=x%10;//5
// 	int p=ld*pow(10,cd-1);//5
// 	sum=sum+p;//2935
// 	x=x/10;//5/10 -->0
// 	cd=cd-1;//0
// }

// cout<<x<<endl;


for(;x!=0;x=x/10){

	int ld=x%10;//5
	int p=ld*pow(10,cd-1);//5
	sum=sum+p;//2935
	
	cd=cd-1;//0
}

cout<<x<<endl;



	return 0;
}