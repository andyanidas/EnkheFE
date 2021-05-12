#include<iostream>

using namespace std;

int main(){
	int arr[5] = {1,2,99,-100,0};
	int MAX;
	
	MAX = arr[0];
	for(int i = 0; i<5; i++){
		if(arr[i]>MAX){
			MAX = arr[i];
		}
	}
	cout<<"Max : "<<MAX;
	
	
	return 0;
}
