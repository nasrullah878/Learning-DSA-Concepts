#include<iostream>
using namespace::std;

//Task no 1 ;  Name = SAAD REYAN KHAN;

class Stack{
	protected:
		int arr[10];
		int top;
		int size;
	public:
		Stack(){
			top = -1;
			size = 10;
		}
		
	void push(int a){
		if(top == size){
			cout<<"Stack is full !"<<endl;
		}else{
			arr[++top] = a;
			cout<<a<<" pushed to stack :"<<endl;
		}
	}
	
	void display_top(){
		if(top == -1){
			cout<<"stack is empty :"<<endl;
		}else{
			cout<<arr[top]<<endl;
		}
	}
	
	void display(){
		if(top == -1){
			cout<<"stack is empty :"<<endl;
		}
		else{
			for(int i = size-1; i>=0;i--){
				cout<<arr[i]<<" ";
			}
		}
	}
};

int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.push(9);
	s.push(10);
	cout<<endl;
	cout<<"The top elements of the stack is :"<<endl;
	s.display_top();
	cout<<"\nstack elements are following :"<<endl;
	s.display();
	return 0;
}