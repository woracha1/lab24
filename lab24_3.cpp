#include<iostream>
#include<set>
using namespace std;

//Write function count() here.
int count(int arr[],int size){

	set<int> uniqueElements;

	for(int i = 0 ; i < size ; i++){
		uniqueElements.insert(arr[i]);
	}
	return uniqueElements.size();
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	int size = sizeof(data)/sizeof(int) ;
	cout << "There are " << count(data,size); 
	cout << " different numbers in data.";
	
	return 0;
}
