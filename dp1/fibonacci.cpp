 #include<iostream>
using namespace std;

// 1 base index
int fibo(int pos){//5 4 3
	// base case
	if(pos==1||pos==2){
		return pos-1;
	}
	// rec case
	return fibo(pos-1)+fibo(pos-2);//without storing
	
}

int fibodp(int pos,int *arr){//5
	// base case
	if(pos==1||pos==2){
		return arr[pos]=pos-1;
	}

	// check
	if(arr[pos]!=-1){
		return arr[pos];

	}
	// rec case
	return arr[pos]=fibodp(pos-1,arr)+fibodp(pos-2,arr);//without storing
	
}


int fibo2ndappbu(int pos){//5{

	int *arr=new int[pos+1];
	arr[1]=0;
	arr[2]=1;

	for(int i=3;i<=pos;i++){
		arr[i]=arr[i-1]+arr[i-2];

	}
	for(int i=1;i<=pos;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return arr[pos];
}

// int arr[pos]

int main(){
	int pos;
	cin>>pos;//5
	// cout<<"fibo at pos is : "<<fibo(pos)<<endl;

	// int *arr=new int[pos+1];
	// for (int i = 0; i <=pos; ++i)
	// {
	// 	arr[i]=-1;
	// }

	// cout<<"fibo at pos is : "<<fibodp(pos,arr)<<endl;
	// for(int i=1;i<=pos;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	cout<<fibo2ndappbu(pos)<<endl<<endl;


	return 0;
}