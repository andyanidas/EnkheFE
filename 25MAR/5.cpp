#include<iostream>

using namespace std;

int main(){
	int n,rev=0;
	cin>>n; //123456 ->>654321
	
	
	for(;n>0;n/=10){
		rev = rev*10 + n%10; //6*10 + 5 = 650 + 4
	}
	cout<<rev;
	return 0;
}
