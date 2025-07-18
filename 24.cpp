// 24. Implement a singly linked list with insert, delete, and print operations.
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

class SinglyLinkedList{
    public:
        Node *root;

        SinglyLinkedList(){
            root = nullptr;
        }
        Node *createNode(int value){
            Node *temp = new Node();
            temp->data = value;
            temp->next = nullptr;
            return temp;
        }

        void insert(int value){
            Node *newNode = createNode(value);

            if(root==nullptr){
                root = newNode;
                return;
            }
            Node *temp = root;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;

        }
        void deleteNode(int pos){
            if(root == nullptr) return;
            
            Node *temp = root;
            if(pos==0){
                root = root->next;
                delete temp;
                return;
            }
            for(int i=0;i<pos-1;i++){
                temp = temp->next;
            }
            Node *toBeDeleted = temp->next;
            temp->next = temp->next->next;
            delete toBeDeleted;
        }
        void print(){
            Node *temp = root;
            while(temp!=nullptr){
                cout << temp->data << "-> ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main(){
    SinglyLinkedList list;
    list.insert(5);
    list.insert(10);
    list.insert(2);
    list.print();
    list.deleteNode(1);
    list.print();
}