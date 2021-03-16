#include<iostream>

using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	
	if(x>y){
		cout<<"maximum : ";
		cout<<x;
	}else if(x==y){
		cout<<"They are equal"
	}else{
		cout<<"maximum : ";
		cout<<y;
	}
	
	return 0;
}
