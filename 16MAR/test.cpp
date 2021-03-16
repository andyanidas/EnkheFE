#include<iostream>

using namespace std;

int main(){
	int num;
	cin>>num;
	
	if(num%11==0){
		cout<<num<<" is divisible by 11";
	}
	
	if(num%2==0){
		cout<<num<<" is even number";
	}
	
	//126156
	int lastDigit = num%10;
	
	
	
	return 0;
}
