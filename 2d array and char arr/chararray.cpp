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
void reverse(char arr[100]){
	int i=0;
	int j=length(arr)-1;
	while(i<j){
		swap(arr[i],arr[j]);
		i++;
		j--;
	}


}
bool palindrome(char arr[100]){
	int i=0;
	int j=length(arr)-1;

	while(i<j){
	if(arr[i]==arr[j]){
		i++;
		j--;
	}
	else{
		return false;
	}
}
return true;

}


int main(){
	char arr[100];
	cin.getline(arr,100);

	char b[100];
	cin.getline(b,100);
	int i=0;
	int j=length(arr);//5
	while(i<length(b)+1){

	arr[j]=b[i];
	i++;
	j++;
}

cout<<arr<<endl;


}