#include<iostream>

using namespace std;

int main(){
	// \n->newLine
	// \t->TabLine
	// \'
	// \"
/*	cout<<"asd\tasd"<<endl;
	cout<<"asdas\tasd"<<endl;
	cout<<"asdasg\"asdasd";*/
	string name;
	string surename;
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your surename: ";
	cin>>surename;
	string fullName;
	fullName = name + " " + surename;
	cout<<"Full name is "<<fullName;
	
	return 0;
}
