#include<iostream>

using namespace std;

int main(){
	int n,count=0;
	cin>>n; //951354
	for(; n>0; n/=10){
		count++;
	}
	cout<<count;
	
	return 0;
}
