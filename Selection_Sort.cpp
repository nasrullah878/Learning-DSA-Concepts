#include<iostream>
using namespace std;

void SelectionSort(int arr[] , int size){

    for(int i = 0; i<size-1;i++){
        int smallest_index = i;
        for(int j = i+1; j<size; j++){
            if(arr[j] < arr[smallest_index]){
                //swaping process
                smallest_index = j;

            }
        }
        swap(arr[i] , arr[smallest_index]);
    }
}

void Print_array(int arr[] , int size){
     for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
     }
}
int main(){
    int arr[5] = {10,8,1,3,2};
    int size = 5;

    SelectionSort(arr,size);
    Print_array(arr,size);
    return 0;
}