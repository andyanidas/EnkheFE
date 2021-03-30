#include<iostream>

using namespace std;

int main(){
	int x = 123456;
	int sum=1;
	
	//redundancy
	for(; x>0;x= x/10){
		sum = sum*(x%10);
	}
	
	
	cout<<endl<<sum;
	
	
	return 0;
}
