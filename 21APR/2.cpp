#include<iostream>

using namespace std;

int main(){
	//		index 0 1 2   3   4
	int arr[5] = {1,2,99,-100,0};
	
	arr[3] = 5;
	for(int i = 0; i<5;i++){
		cout<<arr[i]<<" ";
	}
	int sum = 0;
	for(int i = 0; i<5;i++){
		sum = sum + arr[i];
	}
	cout<<"Total elements inside my array is "<<sum;
	cout<<endl;
	
	string words[50] = {"one","two","three","four"}; //null -> hooson buyu yuuch baihgui
	for(int i = 0; i<4;i++){
		cout<<words[i]<<" ";
	}
	
	cout<<endl;
	
	char grade[5];
	for(int i=0; i<5; i++){
		cin>>grade[i];
	}
	for(int i=0; i<5; i++){
		cout<<grade[i]<<", ";
	}
	
	
	return 0;
}
