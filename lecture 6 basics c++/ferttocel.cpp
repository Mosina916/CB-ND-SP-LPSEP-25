
#include<iostream>
using namespace std;


int main(){

	int init;
	cin>>init;//0
	int fiv;
	cin>>fiv;//300
	int step;
	cin>>step;//20

	for(int fer=init;fer<=fiv;fer=fer+step){//40]

	int cel=(5/9.0)*(fer-32);

	cout<<fer<<'\t'<<cel;

	cout<<endl;
}



	





	return 0;
}