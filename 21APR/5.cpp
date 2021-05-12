#include<iostream>

using namespace std;

int main(){
	int arr[5] = {1,2,99,10,0};
	int arr1[5];
	
	for(int i=0; i<5; i++){
		arr1[i]=arr[i];
	}
	for(int i=0; i<5; i++){
		cout<<arr1[i]<<" ";
	}
	
	return 0;
}
