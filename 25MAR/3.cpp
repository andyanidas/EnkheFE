#include<iostream>

using namespace std;

int main(){
	int n,fd,ld;
	cin>>n; //951354
	
	ld = n%10;
	
	for(;n>10;n/=10){
	}
	fd = n;
	cout<<"First Digit :"<<fd<<endl;
	cout<<"Last Digit :"<<ld<<endl;
	
	return 0;
}
