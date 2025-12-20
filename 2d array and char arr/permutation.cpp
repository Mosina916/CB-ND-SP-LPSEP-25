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
bool permutation(char arr[100],char brr[100]){
	int l1=length(arr);//8
	int l2=length(brr);//8
	if(l1!=l2){
		return false;
	}
	else{
		// l1==l2
		int freq[26]={0};
		for(int i=0;arr[i]!='\0';i++){
		int indx=arr[i]-'A';//'c'-/'A'
		freq[indx]++;
	}
	for(int i=0;brr[i]!='\0';i++){
		int indx=brr[i]-'A';//'c'-/'A'
		freq[indx]--;
	}

	for(int k=0;k<=25;k++){
		if(freq[k]!=0){
			return false;
		}

	}
	return true;

	}
}
int main(){

	char arr[100];
	cin.getline(arr,100);//
	char brr[100];
	cin.getline(brr,100);//

	cout<<permutation(arr,brr)<<endl;



	return 0;
}