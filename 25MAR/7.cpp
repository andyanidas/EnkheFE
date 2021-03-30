#include<iostream>

using namespace std;

int main(){
	int num;
	bool prime = true;
	cin>>num;
	
	for(int i = 2; i<num; i++){
		if(num%i==0){
			prime = false;
		}
	}
	
	if(prime){
		cout<<num<<" is a prime number";
	}else{
		cout<<num<<" is not a prime number";
	}
	
	
	
	return 0;
}
