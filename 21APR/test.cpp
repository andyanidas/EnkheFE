#include<iostream>

using namespace std;

int main(){
	int x = 10, y = 15;
	int z = x>y ? x:y;
	if(x>y){
		z = x;
	}else{
		z = y;
	}
	
	cout<<z;
	
	return 0;
}
