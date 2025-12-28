//LEETCODE: 622. Design Circular Queue

class MyCircularQueue {
    int front,rear;
    int arr[1000];
    int size;
public:
    MyCircularQueue(int k) {
        front=-1,rear=-1;
        size=k;
    }
    
    bool enQueue(int x) {
        if(isFull()) return 0;
        
        if(isEmpty()){
            front=0;
            rear=0;
            arr[0]=x;
        }
        else rear = (rear+1)%size;
        arr[rear]=x;
        return 1;
    }
    
    bool deQueue() {
        if(isEmpty()) return 0;
        if(front==rear){
            front=-1;
            rear=-1;
        }
       else front = (front +1) % size;
       return 1;
    }
    
    int Front() {
        if(!isEmpty()) return arr[front];
        return -1;
    }
    
    int Rear() {
        if(!isEmpty()) return arr[rear];
        return -1;
    }
    
    bool isEmpty() {
        return front==-1;
    }
    
    bool isFull() {
        return (rear+1 ) % size== front;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */