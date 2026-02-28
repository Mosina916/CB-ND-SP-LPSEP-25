 #include<iostream>
using namespace std;
// int mincoinsneed(int amount,int denom[],int n){

// 	// base case
// 	if(amount==0){
// 		return 0;
// 	}


// 	// rec case
// 	int ans=INT_MAX;
// 	for(int i=0;i<n;i++){
// 		int bachamt=amount-denom[i];//13-11
// 		if(bachamt>=0){
// 			int rans=mincoinsneed(bachamt,denom,n);//2
// 			if(rans<ans){
// 				ans=rans+1;

// 			}

// 		}
// 	}

// 	return ans;
// }

// int mincoinsneedtd(int amount,int denom[],int n,int *arr){

// 	// base case
// 	if(amount==0){
// 		return arr[amount]=0;
// 	}

// 	if(arr[amount]!=INT_MAX){
// 		return  arr[amount];
// 	}


// 	// rec case
// 	int ans=INT_MAX;
// 	for(int i=0;i<n;i++){
// 		int bachamt=amount-denom[i];//13-11
// 		if(bachamt>=0){
// 			int rans=mincoinsneedtd(bachamt,denom,n,arr);//2
// 			if(rans<ans){
// 				ans=rans+1;

// 			}

// 		}
// 	}

// 	return arr[amount]=ans;
// }


// int mincoinsneedtd(int amount,int denom[],int n,int *arr){

// 	// 


// 	// rec case
	
// }


int bumincoins(int amount,int *denom,int n){

	int *arr=new int[amount+1];

	arr[0]=0;

	for(int i=1;i<=amount;i++){
	int ans=INT_MAX;
	for(int j=0;j<n;j++){
	int bachaamt=i-denom[j];//2
	if(bachaamt>=0){
		ans=min(ans,arr[bachaamt]+1);//2


	}
}
	arr[i]=ans;
}

for (int i = 0; i <=amount; ++i)
{
	cout<<arr[i]<<" ";
}

cout<<endl;

return arr[amount];



}
int main(){
	int amount;
	cin>>amount;//13
	// int denom[]={11,9,6,5,1,4};
	int denom[]={9,6,5,1};
	int n=sizeof(denom)/sizeof(int);


	cout<<bumincoins(amount,denom,n)<<endl;
	// cout<<mincoinsneed(amount,denom,n)<<endl;

	// int *arr=new int[amount+1];
	// for (int i = 0; i <=amount; ++i)
	// {
	// 	arr[i]=INT_MAX;
	// }

	// cout<<mincoinsneedtd(amount,denom,n,arr)<<endl;
	// for (int i = 0; i <=amount; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }	
	// cout<<endl;

	return 0;
}