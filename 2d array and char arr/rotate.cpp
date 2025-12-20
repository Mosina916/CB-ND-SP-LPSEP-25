#include<iostream>
using namespace std;
int length(char arr[100]){
	int l=0;
	int i=0;
	while(arr[i]!='\0'){
		l++;
		i++;
	}
	return l;
}


void rotatebyn(char arr[100],int n){
	int l1=length(arr);//12

	int i=l1;
	while(i>=0){
	arr[i+n]=arr[i];
	i--;
}

int j=l1;//12
int k=0;


	for(int time=1;time<=n;time++){
	arr[k]=arr[j];
	j++;
	k++;
}


arr[l1]='\0';



}
int main(){

	int n;
	cin>>n;//4

	cin.ignore();
	char arr[100];
	cin.getline(arr,100);//codingblocks;-->ockscodingbl

	rotatebyn(arr,n);


	cout<<arr<<endl;

	


	return 0;
}