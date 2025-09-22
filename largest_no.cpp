#include<iostream>
#include <climits>
using namespace::std;

// SMALLESt VALUE IN ARRAY

int main(){
	int size = 5;
	int array[5];
	int largest = INT_MIN;
	int second_largest = INT_MIN;
	// input;
	for(int i = 0; i < size; i++){
		cin>>array[i];
	}
	for(int i = 0; i < size; i++){
		if(array[i] > largest){
			second_largest = largest;
			largest  = array[i];
		}
		else if(array[i] > second_largest && array[i] != largest){
			second_largest = array[i];
		}
		
	}
	cout<<"largest value is = "<<largest<<endl;
	cout<<"Second largest nuber is :"<<second_largest<<endl;
	return 0;
}