#include<iostream>
using namespace std;
bool staircasesearch(int arr[100][100],int tr,int tc,int key){

	
	int i=0;
	int j=tc-1;

	while(i<=tr-1 and j>=0){
		if(arr[i][j]==key){
			cout<<"key is present at index "<<i<< " "<<j<<endl;
			return true;

		}
		else if(arr[i][j]>key){
			j--;
		}
		else{
			i++;

		}
	}
	return false;

}
int main(){
	// datatype arrayname[tr][tc];
	int arr[100][100];
	int tr,tc;
	cin>>tr>>tc;//5 6


	for(int i=0;i<=tr-1;i++){
	for (int j = 0; j <=tc-1; j++)
	{
		cin>>arr[i][j];
	}
	
	}

	int key;
	cin>>key;//19



	cout<<staircasesearch(arr,tr,tc,key)<<endl;





	return 0;
}