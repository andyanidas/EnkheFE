#include<iostream>

using namespace std;

int main(){
	int n,sum=0;
	cin>>n; //951354
	
	
	for(;n>0;n/=10){
		sum = sum + n%10;
	}
	cout<<sum;
	return 0;
}
