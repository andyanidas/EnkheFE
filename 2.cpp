#include<iostream>

using namespace std;

int main(){
	//declare
	int x = 15; //int ->integer / buhel too //
	int y = 20,sum,sub;
	//ar
	sum = x + y;
	sum = x - y;
	x = x*(x + 10); // = ->> assignment operator 
	//whatever in the righ side will be calculated and assigned into the left
	cout<<"x = "<<x<<endl;
	//printing operation
	cout<<"x="<<x<<endl<<"y="<<y<<endl;
	cout<<"x+y="<<x+y<<endl<<"x-y="<<x-y;
	
	return 0;
}
