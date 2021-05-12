#include<iostream>

using namespace std;

int main(){
	int arr[8] = {1,2,3,4,5,6,87};
	for(int i=0;i<8;i++){
		arr[i] = i+100;
	}
	
	
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
