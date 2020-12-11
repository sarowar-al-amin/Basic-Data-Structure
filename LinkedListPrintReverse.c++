// Trying to teach my younger brother programming
// This program will print a linked in reverse order
// using recurtion.
// Time complexity: O(n)
// Space complexity: O(n)
#include<bits/stdc++.h>

using namespace std;

// Structure declaration

struct Node
{
    /* data */
    int data;
    Node* pointer;
};

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

// print() is used to print the list according to its insertion order
void print(){
    if(isEmpty()){
        cout <<"List is empty"<<endl;
    }else
    {
        Node* temp = new Node;
        temp = head;
        while (temp != NULL)
        {
            cout<< temp->data <<" ";
            temp = temp->pointer;
        }
        
    }
    
}

// printReverse() is used to print the linked list in reverse order
void printReverse(Node* p){
    if(p == NULL){
        return;
    }
    printReverse(p->pointer);
    cout<< p->data<<" ";
}

// Main function starts here
int main(){

    head = NULL;
    // Inserting nodes to the list
    insert(1);
    insert(12);
    insert(31);
    insert(14);
    insert(51);
    insert(16);

    cout<<"Perfect order:"<<endl;
    print();

    Node* temp = new Node;
    temp = head;
    cout<<"\nList in reverse order:"<<endl;
    printReverse(temp);


    return 0;
}