#include<iostream>

using namespace std;

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	
	if(x>y){
		if(x>z){
			cout<<"maximum x = "<<x;
		}else{
			cout<<"maximum z = "<<z;
		}
	}else{
		if(y>z){
			cout<<"maximum y = "<<y;
		}else{
			cout<<"maximum z = "<<z;
		}
	}
	
	return 0;
}
