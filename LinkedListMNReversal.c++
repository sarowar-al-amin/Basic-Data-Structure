// Trying to teach my younger brother about coding
// Reverse a linked list w.r.t. a given index m to n
// Here we use our own defing linked list stack
// One more thing here node index starts from 1

#include<bits/stdc++.h>

using namespace std;

// Structure

struct Node
{
    /* data */
    int data;
    Node* pointer;
};

// Global variable
Node* head;
Node* top;

// integer type
int length;

// Declaring and Defining functions
// push() and pop() for the stack
// push() is used to add new node into stack
void push(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->pointer = top;
    top = temp;
}

// pop() is used to remove a node from top
void pop(){
    if(top == NULL){
        cout << "There is nothing to remove. Stack is already empty." <<endl;
    }else{
        Node* temp = new Node;
        temp = top;
        top = top->pointer;
        delete temp;
    }
}

// top() returns the top value of the stack
int topStack(){
    int data;
    if(top == NULL){
        cout <<"Therer is nothing in the top."<<endl;
        return INT_MAX;
    }else{
        data = top->data;
        return data;
    }
}

// insert() is used to insert an element into the list
void insert(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->pointer = NULL;

    if(head == NULL){
        head = temp;
    }else
    {
        Node* temp2 = new Node;
        temp2 = head;
        while (temp2->pointer != NULL)
        {
            /* code */
            temp2 = temp2->pointer;
        }

        temp2->pointer = temp;
    }

    length++;

    // cout <<"Insertion is done."<<endl;
    
}

// reverseMN() is used to reverse the link list from node mth to nth
void reverseMN(int m, int n){
    int i = 1;
    Node* temp = new Node;
    temp = head;
    while (i < m)
    {
        /* code */
        temp = temp->pointer;
        i++;
    }
    // Stroe the value into the stack
    while (i <= n)
    {
        /* code */
        push(temp->data);
        temp = temp->pointer;
        i++;
    }

    temp = head;
    i = 1;
    while (i < m)
    {
        /* code */
        temp = temp->pointer;
        i++;
    }
    // Reverse the value
    while (i <= n)
    {
        /* code */
        temp->data = topStack();
        pop();
        temp = temp->pointer;
        i++;
    }
    
    
}

// print() is used to print the entire list
void print(){
    Node* temp = new Node;
    temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->data <<" ";
        temp = temp->pointer;
    }
    
}



// Main function starts here
int main(){
    head = NULL;
    top = NULL;

    insert(10);
    insert(11);
    insert(12);
    insert(13);
    insert(14);
    insert(15);
    insert(16);
    insert(17);
    insert(18);
    insert(19);

    print();
    cout<<endl;
    int m , n;
    m = n = 0;
    cout<<"\nEnter the value of mth and nth: "<<endl;
    while (!(m > 0 && m < length) && !(n > m && n < length))
    {
        /* code */
        cin >> m >> n;
    }
    
    reverseMN(m,n);
    print();

    return 0;
}