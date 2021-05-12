#include<iostream>

using namespace std;

int main(){
	int arr[100] = {5, 10, 2, 5, 50, 5, 10, 1, 2, 2};
	int freq[100];
	
	for(int i=0;i<100; i++){
		freq[i]=0;
	}
	
	for(int i=0;i<10; i++){
		freq[arr[i]]++;
	}
	for(int i = 0; i<100; i++){
		if(freq[i]!=0){
			cout<<"Frequency of "<<i<<" is "<<freq[i]<<endl;
		}
	}
	
	return 0;
}
