#include<iostream>
using namespace std;

void BubbleSort(int arr[] , int size){
    for(int i = 0; i<size-1;i++){
        for(int j = 0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                //swaping process
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

void Print_array(int arr[] , int size){
     for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
     }
}
int main(){
    int arr[5] = {4,2,6,3,8};
    int size = 5;

    BubbleSort(arr,size);
    Print_array(arr,size);
    return 0;
}