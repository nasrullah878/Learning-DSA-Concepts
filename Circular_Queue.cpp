#include<iostream>
using namespace::std;

class Circular_Queue{
    protected:
        int *arr;
        int curr_size , cap;
        int front , rear;
    
        public:
            Circular_Queue(int size){
                cap = size;
                front = 0;
                rear = -1;
                arr = new int[cap];
                curr_size = 0;
            }

    void push(int data){
        if(curr_size == cap){
            cout<<"CQ is full!"<<endl;
            return;
        }
        rear = (rear + 1) % cap;
        arr[rear] = data;
        curr_size++;
    }

    void pop(){
        if(curr_size == 0){
            cout<<"CQ is Empty!"<<endl;
            return;
        }
        front = (front +1) % cap;
        cout<<arr[front]<<endl;
        curr_size--;
    }
    int Start(){
        if(empty()){
            cout<<"CQ is Empty!"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        return curr_size = 0;
    }
    void display(){
    if(curr_size == 0){
            cout<<"CQ is Empty!"<<endl;
            return;
    }else{
    	for(int i = 0; i<cap; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
	}
    
};

int main(){
    Circular_Queue CQ(3);
    CQ.push(10);
    CQ.push(20);
    CQ.push(30);
    CQ.display();
    cout<<"10 is poped ..."<<endl;
    CQ.pop();
    CQ.pop();
    CQ.push(40);
    CQ.push(50);
  //  cout<<"Start value is :"<<endl;
  // CQ.Start();
   CQ.display();
    return 0;
}