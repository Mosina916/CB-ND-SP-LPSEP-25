#include<iostream>
#include<queue>
using namespace std;
void toh(char src,char helper,char dest,int n){
	// base case
	if(n==0){
		return;
	}

	// rec case
	toh(src,dest,helper,n-1);
	cout<<"move disc no "<<n<<" from "<<src<<" to "<<dest<<endl;
	toh(helper,src,dest,n-1);


}
int main(){
	int n;
	cin>>n;
	toh('A','B','C',n);




	return 0;
}