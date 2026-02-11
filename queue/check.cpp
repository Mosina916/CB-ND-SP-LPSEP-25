#include<iostream>
#include<vector>
using namespace std;


int main(){
	
	vector<int> s;
	s.push_back(13);
	s.push_back(3);
	s.push_back(1);
	s.push_back(13);
	s.push_back(13);


	s.erase(s.begin());
	

for (auto x: s)
{
	cout<<x<<" ";

}

	return 0;
}