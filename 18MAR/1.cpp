#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	a = 12345;
	b = 17;
	c = a%b;
	if(a%b==0){
		cout<<"a is divisible by b";
	}else{
		cout<<"a is not divisible by b";
	}
	cout<<c;
	
	
	return 0;
}
