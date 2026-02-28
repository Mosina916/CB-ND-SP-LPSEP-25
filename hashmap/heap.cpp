#include<iostream>
using namespace std;
class Heap{

	vector<int> v;

public:
	Heap(){
		v.push_back(-1);
	}

	void insert(int data){
		v.push_back(data);
		int child=v.size()-1;
		while(child!=1){
		int prent =child/2;
		if(v[child]<v[prent]){
			swap(v[child],v[prent]);
		}

		child=prent;
	}

	}

	void heapify(int index){
		int abhitakmin=index;
		int li=abhitakmin*2;
		int ri=li+1;
		if(li<=v.size()-1 and v[li]<v[abhitakmin]){
			abhitakmin=li;
		}
		if(ri<=v.size()-1 and v[ri]<v[abhitakmin]){
			abhitakmin=ri;
		}

		if(abhitakmin!=index){
			swap(v[index],v[abhitakmin]);
			heapify(abhitakmin);
		}
	}

	void deleteele(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}


	int size(){

		return v.size()-1;
	}
	int top(){
		return v[1];
	}

	bool empty(){

		return v.size()==1;
	}
};
int main(){

	Heap h;
	h.insert(1);
	h.insert(2);
	h.insert(3);
	h.insert(17);
	h.insert(19);
	h.insert(36);
	h.insert(7);
	h.insert(25);
	h.insert(100);

	h.insert(0);


	while(!h.empty()){
	cout<<h.top()<<" ";//0 1 2
	h.deleteele();
}




// heap sort




	return 0;
}