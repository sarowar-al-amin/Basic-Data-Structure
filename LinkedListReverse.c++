// This program will reverse a linked list

#include<bits/stdc++.h>

using namespace std;
// Structure declaration
struct Node
{
    /* data */
    int data;
    Node* pointer;
};

// Global variables
Node* head;

// Declaring and Defining functions
// isEmpty() returns true if list has no element.
bool isEmpty(){
    if(head == NULL){
        return true;
    }else
    {
        return false;
    }
    
}

// insert() is used to insert a node at the end of the list
void insert(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->pointer = NULL;

    if(head == NULL){
        head = temp;
    }else{
        Node* iteration = new Node;
        iteration = head;
        while (iteration->pointer != NULL)
        {
            /* code */
            iteration = iteration->pointer;
        }
        iteration->pointer = temp;
    }
}

// reverse() is used to reverse the entire linked list
void reverse(){
    if(isEmpty()){
        cout<<"The list is empty! Nothing to reverse."<<endl;
    }else{
        Node* temp = new Node;
        Node* previous = new Node; 
        Node* next = new Node;
        temp = head;
        previous = NULL;

        while (temp != NULL)
        {
            /* code */
            next = temp->pointer;
            temp->pointer = previous;
            previous = temp;
            temp = next;

        }
        head = previous;
    }
}

// print() is used to print the entire linked list
void print(){
    if(isEmpty()){
        cout <<"There is nothing to print"<<endl;
    }else{
        Node* temp = new Node;
        temp = head;

        while (temp != NULL)
        {
            /* code */
            cout << temp->data<<" ";
            temp = temp->pointer;
        }
        
    }
}

// Main function starts here
int main(){

    head = NULL;
    insert(1);
    insert(10);
    insert(21);
    insert(-1);
    insert(19);
    insert(71);
    insert(11);
    insert(31);

    cout <<"List before reversing it: "<<endl;
    print();
    cout<<endl;

    cout <<"\nList after reversing it: "<<endl;
    reverse();
    print();

    return 0;
}