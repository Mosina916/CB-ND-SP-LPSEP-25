#include<iostream>
using namespace std;

vector<int> maxandmincandies(int candies[],int n,int k){
	sort(candies,candies+n);//1 2 3 4
	int minc=0;
	int j=n-1;
	int i=0;
	while(j>=i){
	minc=minc+candies[i];//1
	i++;
	j=j-k;
}
	int maxc=0;
	j=n-1;
	i=0;


	while(j>=i){
	maxc=maxc+candies[j];//1
	j--;
	i=i+k;
}

vector<int> v;
v.push_back(minc);
v.push_back(maxc);


return v;


}
int main(){
	int candies[]={3,2,1,4};
	int n=sizeof(candies)/sizeof(int);
	int k;
	cin>>k;
	vector<int> c=maxandmincandies(candies,n,k);


	for (int i = 0; i <c.size(); ++i)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;

	// for (int x: c)
	// {
	// 	cout<<x<<" ";
	// }

	cout<<endl;


	return 0;
}