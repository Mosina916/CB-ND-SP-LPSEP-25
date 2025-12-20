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
void copy(char abhitakkilargestarr[100],char arr[100]){
		int i=0;
		int j=0;
	while(j<length(arr)+1){

	abhitakkilargestarr[j]=arr[i];
	i++;
	j++;
}
}
int main(){
	int n;
	cin>>n;//4
	cin.ignore();
	char arr[100];
	cin.getline(arr,100); //"board"
	char abhitakkilargestarr[100];
	int abhitakmaxlen=length(arr);//5
	copy(abhitakkilargestarr,arr);//board

	for(int times=1;times<=n-1;times++){
	cin.getline(arr,100);
	if(length(arr)>abhitakmaxlen){//8>5
		copy(abhitakkilargestarr,arr);
		abhitakmaxlen=length(arr);

	}
}


cout<<abhitakkilargestarr<<endl;
cout<<abhitakmaxlen<<endl;


}