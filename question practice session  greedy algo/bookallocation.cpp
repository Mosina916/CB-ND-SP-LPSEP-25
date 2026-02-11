#include<iostream>
using namespace std;
bool kyamidjitnicapacityrakhkarbooksfinsihhorahihai(int bp[],int n,int m,int capacity){
	int sc=1;
	int spr=0;

	for(int i=0;i<n;i++){
	if(spr+bp[i]>capacity){//113>146
		sc++;//4
		spr=bp[i];//90
		if(sc>m){
			return false;
		}



	}
	else{
		// curre wale stend ko ye book
		spr=spr+bp[i];//12+34-->46+67-->113

	}
}

	return sc<=m;
}
int main(){
	int t;
	int bp[1000000];
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;//4 2
		int sum=0;
		for (int i = 0; i <n; ++i)
		{
			cin>>bp[i];//12 34 67 90
			sum+=bp[i];
		}


		int s=bp[n-1];//90
		int e=sum;
		int ans;
		while(s<=e){
			int mid=(s+e)/2;//146
		if(kyamidjitnicapacityrakhkarbooksfinsihhorahihai(bp,n,m,mid)){
			ans=mid;//146
			e=mid-1;
		}
		else{
			s=mid+1;
		}


		}


		cout<<ans<<endl;
		

	}


	return 0;
}