#include<iostream>

using namespace std;

int main(){
	//&& -> Logical AND exp: epxression && epxression -> a>b && a>c
	//|| -> Logical OR 	exp: epxression || epxression -> a>b || a>c
	
	string car;
	cout<<"Enter your car model: ";
	cin>>car;
	
	if(car=="BMB" || car=="BENZ" || car=="FERRARI"){
		cout<<"Wow you are a rich guy";
	}else if(car == "PRUIS" || car == "HONDA"){
		cout<<"You have an avarage car";
	}else{
		cout<<"Sorry i could not identify your car model!";
	}
	
	/*
	this is a multi line comment
	you can write muliple lines
	of codes
	*/
	
	return 0;
}
