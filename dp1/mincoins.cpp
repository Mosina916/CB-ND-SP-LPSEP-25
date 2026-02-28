 #include<iostream>
using namespace std;

// int minsteps(int n){
// 	// base case
// 	if(n==1){
// 		return 0;
// 	}
// 	// rec case
// 	int x=INT_MAX;
// 	int y=INT_MAX;
// 	// int z=INT_MAX;
// 	if(n%3==0){
// 		x=minsteps(n/3);
// 	}
// 	if(n%2==0){
// 		y=minsteps(n/2);
// 	}
// 	int z=minsteps(n-1);//4
// 	return min(x,min(y,z))+1;
// }

// int minstepstd(int n,int *arr){
// 	// base case
// 	if(n==1){
// 		return arr[n]=0;
// 	}

// 	// check
// 	if(arr[n]!=-1){
// 		return arr[n];
// 	}
// 	// rec case
// 	int x=INT_MAX;
// 	int y=INT_MAX;
// 	// int z=INT_MAX;
// 	if(n%3==0){
// 		x=minstepstd(n/3,arr);
// 	}
// 	if(n%2==0){
// 		y=minstepstd(n/2,arr);
// 	}
// 	int z=minstepstd(n-1,arr);//4
// 	return arr[n]=min(x,min(y,z))+1;
// }


int minstepbu(int n){
	int *arr=new int[n+1];
	// td bc bu intiliztion comdition
	arr[1]=0;

	for(int i=2;i<=n;i++){
		int x=INT_MAX;
		int y=INT_MAX;
		int z=INT_MAX;
		if(i%3==0){
			x=arr[i/3];//0

		}
		if(i%2==0){
			y=arr[i/2];//0
			
		}

		z=arr[i-1];//1

		arr[i]=min(x,min(y,z))+1;

	}
	for (int i = 1; i<=n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return arr[n];


	}
int main(){
	int n;
	cin>>n;//min steps n to 1
	// cout<<minsteps(n)<<endl;
	// int *arr=new int[n+1];

	// for (int i = 0; i <=n; ++i)
	// {
	// 	arr[i]=-1;
	// }
	// cout<<minstepstd(n,arr)<<endl;

	// for (int i = 1; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;

	cout<<minstepbu(n)<<endl;

	// for (int i = 1; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;


	

	return 0;
}