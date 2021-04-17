#include<iostream>

using namespace std;

int main(){
	int SIZE;
	cin>>SIZE; //10
	
	
	for(int i = 0; i<SIZE; i++){
		for(int j = 1; j<SIZE-i;j++){
			cout<<" ";
		}
		
		for(int j = 0; j<SIZE;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
	
	
	return 0;
}
