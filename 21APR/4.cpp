#include<iostream>

using namespace std;

int main(){
	int arr[5] = {1,2,99,10,0};
	int MAX,MAX1;
	
	MAX = arr[0];
	
	MAX1 = arr[0]>arr[1] ? arr[1]:arr[0];
	
	
	for(int i = 0; i<5; i++){
		if(arr[i]>MAX){
			MAX = arr[i];
		}
		
		if(arr[i]>MAX1 && MAX!=arr[i]){
			MAX1 = arr[i];
		}
	}
	cout<<"Max : "<<MAX<<endl;
	cout<<"Max1 : "<<MAX1;
	
	return 0;
}
