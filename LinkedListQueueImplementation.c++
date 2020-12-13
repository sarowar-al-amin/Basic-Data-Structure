// Trying to teach my younger brother about programming
// Implemention of Queue using Link List
// Time complexity and space complexity of queue is always O(1)
#include<bits/stdc++.h>

using namespace std;

// Structure 
struct Node
{
    /* data */
    int data;
    Node* pointer;
};

// Global variables
Node* front;
Node* rear;

// enqueue() is used to insert a new node at the rear part
void enqueue(int data){

    Node* temp = new Node;
    temp->data = data;
    temp->pointer = NULL;
    if(front == NULL && rear == NULL){
        front = rear = temp;
        // rear = temp;
        return;
    }
    rear->pointer = temp;
    rear = temp;
} 

// dequeue() is used to remove a node from the front part
void dequeue(){
    Node* temp = new Node;
    temp = front;
    if(front == NULL){
        cout <<"Queue is empty! There is nothing to remove."<<endl;
        return;
    }
    if(front == rear){
        front = NULL;
        rear = NULL;
    }else{
        front = front->pointer;
    }
    free(temp);
}

// top() returns the queue front value 
int top(){
    if(front == NULL){
        cout << "The queue is empty. So there is nothing to return."<<endl;
        return INT_MAX;
    }else{
        return front->data;
    }
}

// print() is used print the entire queue in front to rear manner.
void print(){
    Node* temp = new Node;
    temp = front;

    if(front == NULL){
        cout<<"There is no element in the queue."<<endl;
    }else{
        while (temp != NULL)
        {
            /* code */
            cout << temp->data <<" ";
            temp = temp->pointer;
        }
        
    }
}

// Main function starts here
int main(){
    
    front = NULL;
    rear = NULL;

    enqueue(10);
    enqueue(11);
    enqueue(21);
    enqueue(13);

    // cout << front->data <<endl;
    // cout << rear->data <<endl;
    // cout<< top() <<endl;
    // dequeue();
    // cout << front->data <<endl;
    // cout << rear->data <<endl;
    // print();


    cout<<"\nAfter enqueuing some elements, Queue looks:-> "<<endl;
    print();
    dequeue();
    cout<<"\nAfter perform dequeue operation:-> "<<endl;
    print();
    enqueue(41);
    cout<<"\nAfter enqueuing some elements, Queue looks:-> "<<endl;
    print();
    dequeue();
    cout<<"\nAfter perform dequeue operation:-> "<<endl;
    print();
    enqueue(15);
    cout<<"\nTop:->"<<top()<<endl;
    enqueue(61);
    cout<<"\nAfter enqueuing some elements, Queue looks:-> "<<endl;
    print();

    return 0;
}