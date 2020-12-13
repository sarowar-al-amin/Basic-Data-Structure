// Trying to teach my younger brother about coding 
// Stack implementation using link list
// Time complexity of pop and push operation is O(1).
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
Node* top;

// push() is used to add an element to the stack
void push(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->pointer = top;
    top = temp;
}

// pop() is used to remove element from top
void pop(){
    Node* temp = new Node;
    if(top == NULL){
        cout <<"There is no element to perform pop operation." << endl;
        return;
    }
    temp = top;
    top = top->pointer;
    delete temp;
}

// top() returns the element stay at the top of the stack
int topElement(){
    int result;
    if(top == NULL){
        cout << "There is no element in the stack"<<endl;
        return INT_MAX;
    }else{
        result = top->data;
    }
    return result;
}

// print() is used to print all the elements at the stack
void print(){
    Node* temp = new Node;
    temp = top;
    if(top == NULL){
        cout <<"There is nothing to print since the stack is empty"<<endl;
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
    top = NULL;

    push(101);
    push(102);
    push(103);
    push(104);
    push(105);

    cout<<"\nAll the elements at stack: "<<endl;
    print();
    pop();
    cout <<"\nAfter performing a pop operation stack looks: "<<endl;
    print();
    cout<<"\nAnother pop() operation perform."<<endl;
    pop();
    cout <<"\nTop:-->" << topElement() << endl;
    cout<<"*******END*************"<<endl;

    return 0;
}