// 25. Use an array to implement a stack with push, pop, and peek functions.
#include<iostream>
using namespace std;

class Stack{
    public:
        int size,top;
        int arr[100];
        Stack(int n){
            size = n;
            top=-1;
        }
        void push(int value){
            if(top==size-1){
                cout << "Overflow." << endl;
                return;
            }
            arr[++top] = value;
            cout << value << " pushed successfully." << endl;
        }
        void pop(){
            if(top==-1){
                cout << "Underflow" << endl;
                return;
            }
            cout << arr[top] << " popped successfully" << endl;
            --top;
        }
        int peek(){
            if(top==-1){
                cout << "Stack is empty." << endl;
                return -1;
            }
            return arr[top];
        }
        void display(){
            for(int i=0;i<=top;i++){
                cout << arr[i] << ", ";
            }
            cout << endl;
        }
};

int main(){
    Stack s(5);
    s.pop();
    s.push(10);
    s.push(3);
    s.push(7);
    s.display();
    s.pop();
    cout << s.peek() << endl;
    s.push(2);
    s.push(8);
    s.push(15);
    s.push(20);
    s.display();
}