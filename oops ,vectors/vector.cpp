#include<iostream>

#include<vector>
using namespace std;
int main(){

	// vector<datatype> name;
	vector<int> v;
	// element push_back
	// vectorname.push_back(element)
	v.push_back(4);
	v.push_back(2);

	v.push_back(7);
	v.push_back(8);

	v.push_back(1);
	v.push_back(6);

	cout<<v.size()<<endl;

	cout<<v.capacity()<<endl;

	v.pop_back();
	v.pop_back();
	v.pop_back();

	v.push_back(17);
	v.push_back(13);

	for (int i = 0; i <v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}

	cout<<endl;



	sort(v.begin(),v.end());

	for (int i = 0; i <v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}

	cout<<endl;


	// int arr[5];


	// sort(arr,arr+n)





	return 0;
}