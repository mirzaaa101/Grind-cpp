#include<iostream>
using namespace std;

class CircularQueue {
    int size, front, rear;
    int arr[100];
public:
    CircularQueue(int n) {
        size = n;
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return ((rear + 1) % size == front);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Overflow." << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = value;
        cout << value << " enqueued successfully." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Underflow." << endl;
            return;
        }
        int removed = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
        cout << removed << " dequeued successfully." << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << arr[i];
            if (i == rear) break;
            cout << ", ";
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);
    q.dequeue();
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(2);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(12);
    q.display();
    q.dequeue();
    q.dequeue();
    q.enqueue(15);
    q.enqueue(20);
    q.display();
}
