#include<iostream>
#include<queue>
using namespace std;
int co=0;
vector<string>v;

void subsequence(char inpu[100],char out[100],int i,int j){
	// base case
	if(inpu[i]=='\0'){
		out[j]='\0';
		// cout<<out<<" ";
		v.push_back(out);

		co++;
		return;
	}
	// rec case
	// without a
	subsequence(inpu,out,i+1,j);
	// with a
	out[j]=inpu[i];
	subsequence(inpu,out,i+1,j+1);
}
bool abc(string s1,string s2){//abc bc

	return s1>s2;

}

int main(){

	char inpu[100];
	cin.getline(inpu,100);

	char out[100];

	subsequence(inpu,out,0,0);
	cout<<co<<endl;

	sort(v.begin(),v.end(),abc);//comperator
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}

	cout<<endl;
	




	return 0;
}