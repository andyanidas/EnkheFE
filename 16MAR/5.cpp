#include<iostream>

using namespace std;

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	
	if(x>y && x>z){
		cout<<"X";
	}else if(y>z){
		cout<<"Y";
	}else{
		cout<<"Z";
	}
	
	return 0;
}
