#include<iostream>

using namespace std;

int main(){
	//&& -> Logical AND exp: epxression && epxression -> a>b && a>c
	//|| -> Logical OR 	exp: epxression || epxression -> a>b || a>c
	
	int salary;
	cout<<"Enter your salary: ";
	cin>>salary;
	
	if(salary>100000 && salary<500000){
		cout<<"low income";
	}else if(salary>500000 && salary<1500000){
		cout<<"avarage income";
	}else if(salary>1500000){
		cout<<"high income";
	}else{
		cout<<"not enough to live";
	}
	
	
	
	return 0;
}
