// This program will reverse an entire link list using recursion
#include<bits/stdc++.h>

using namespace std;

// Sturcture
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

// reverse() is used to reverse the link list
void reverse(Node* p){
    if(p->pointer == NULL){
        head = p;
        return;
    }
    reverse(p->pointer);
    Node* temp = new Node;
    temp = p->pointer;
    temp->pointer = p;
    p->pointer = NULL;
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
    Node* temp = new Node;

    insert(1);
    insert(10);
    insert(21);
    insert(-1);
    insert(19);
    insert(71);
    insert(11);
    insert(31);

    cout <<"\nList before reversing it: "<<endl;
    print();
    cout<<endl;

    temp = head;// this line of code must be written at least one insertion operation.
    cout <<"\nList after reversing it: "<<endl;
    reverse(temp);
    print();
    cout<<endl;

    return 0;
}