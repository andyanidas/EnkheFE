#include<iostream>

using namespace std;

int main(){
	int base,exp,res=1;
	cin>>base>>exp; //2^5
	
	
	for(;exp>0;exp--){
		res = res*base;
	}
	cout<<res;
	return 0;
}
