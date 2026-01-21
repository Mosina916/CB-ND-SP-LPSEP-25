#include<iostream>
using namespace std;

class x{
public:
	string name;
	string col;
	int seats;
	int price;


	// constructor
	// default constor
	// x(){

	// }

	x(){
		cout<<"hello"<<endl;
	}

	// parametrized const
	x(string n,int p){

		name=n;
		seats=p;

	}

		x(string name,int p,int y){

		this->name=name;
		seats=p;
		price=y;

	}



	// memeber funtion

	void setvalues(){//setter
		cin>>name;
		cin>>col;
		cin>>price;
		cin>>seats;
	}

	void printvalues(){//getter
		cout<<name<<endl;
		cout<<col<<endl;
		cout<<price<<endl;
		cout<<seats<<endl;
	}





};
int main(){

	x a;
	a.setvalues();
	a.printvalues();
	// whenever object is created construtor is called 

	// a.name="bmw";
	// a.col="blue";
	// a.seats=5;
	// a.price=20;


	// x b("abc",4);
	// b.price=50;
	// b.col="white";

	// x c("olm",6,60);


	// cout<<a.name<<endl;
	// cout<<a.col<<endl;
	// cout<<a.seats<<endl;
	// cout<<a.price<<endl;


	return 0;
}