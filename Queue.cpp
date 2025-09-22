#include<iostream>

using namespace::std;

class QUEUE
{
protected:
    int arr[5];
    int front , rear;
    int size = 5;
public:
    QUEUE(){
        front = rear = -1;
    }

    bool isEmpty(){
        return front == -1;
    }

    bool isFull(){
        return rear == size - 1;
    }
void enqueue(int x){
    if (isEmpty())
    {
        front = rear = 0;
        arr[rear] = x;
    }
    else if (isFull())
    {
        cout<<"Queue overflow!..."<<endl;
        return;
    }else{
        rear++;
        arr[rear] = x;
    }
    
    
}

void dequeue(){
    if(isEmpty()){
        cout<<"Queue is Empty...!"<<endl;
        return ;
    }else{
        if(front == rear){
            front = rear = -1;
        }else{
            front++;
        }
    }
}

void start(){
	if(isEmpty()){
		cout<<"queue is empty!"<<endl;
		return;
	}
	else{
		cout<<arr[front]<<endl;
	}
}

void display(){
    if(isEmpty()){
        cout<<"Queue is empty....!"<<endl;
    }
    else{
        for(int i = front ; i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
};

int main(){
    QUEUE q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
	cout<<"FRONT >>>>>>>>>>>>>>>>>"<<endl;
	q.start();
    q.dequeue();
    cout<<"10 is poped from the queue"<<endl;
    q.display();
	cout<<"FRONT >>>>>>>>>>>>>>>>>"<<endl;
	q.start();
    q.dequeue();
    cout<<"10 is poped from the queue"<<endl;
    q.display();
	cout<<"FRONT >>>>>>>>>>>>>>>>>"<<endl;
	q.start();
	
    return 0;
}