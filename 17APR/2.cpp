#include<iostream>

using namespace std;

int main(){
	int SIZE;
	cin>>SIZE; //10
	
	for(int i = 0; i<SIZE; i++){
		for(int j = 0; j<SIZE;j++){
			if(i==0 || i==SIZE-1 || j==0 || j==SIZE-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	
	
	
	
	return 0;
}
