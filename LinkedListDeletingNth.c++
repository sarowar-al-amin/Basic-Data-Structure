// This program will remove a node from a list at a given index
#include<bits/stdc++.h>

using namespace std;

// Structure 
struct Node
{
    /* data */
    int data;
    Node* pointer;
};

Node* head;
int length;

// Declaring and Defining functions

// isEmpty(), returns true if the list has no elements otherwise false
bool isEmpty(){
    if(head == NULL){
        return true;
    }else{
        return false;
    }
} 

// insert(), adds a node at the end of the linked list 
void insert(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->pointer = NULL;

    if(head == NULL){
        head = temp;
    }else{
        Node* help = new Node;
        help = head;
        while (help->pointer != NULL)
        {
            /* code */
            help = help->pointer;
        }
        help->pointer = temp;
        
    }
    length++;

}

// remove(), deletes a node according to the given index
void remove(int index){

    if(isEmpty()){
        cout <<"There is nothing to delete since the list is empty" << endl;
    }else if(index > length){
        cout <<"The given index is larger than the list so it can not remove any node."<<endl;
    }else{
        if(index == 1){
            Node* temp = new Node;
            temp = head;
            head = head->pointer;
            delete temp;
        }else{
            int count = 2;
            Node* temp = new Node;
            Node* temp2 = new Node;

            temp = head;
            temp2 = temp->pointer;
            while (count < index)
            {
                /* code */
                count++;
                temp = temp->pointer;
                temp2 = temp->pointer;
            }
            temp2 = temp2->pointer;
            temp->pointer = temp2;

        }

        length--;
    }

}

// print(), prints the entire linked list
void print(){
    if(isEmpty()){
        cout<<"Since the list is empty there is nothing to print."<<endl;
    }else{
        Node* iteration = new Node;
        iteration = head;

        while (iteration != NULL)
        {
            /* code */
            cout << iteration->data <<" ";
            iteration = iteration->pointer;
        }
        cout << endl;
    }

}

// Main function starts here
int main(){

    head = NULL;
    length = 0;

    // Inserting node to the list

    insert(1);
    insert(3);
    insert(-2);
    insert(10);
    insert(13);

    int index;
    cout<<"Enter the index of the node which is goning to be removed: "<<endl;
    cin >> index;

    cout<<"\nBefore removing any node, the list is: "<<endl;
    print();

    cout<<"Aftet removing "<<index<<"th node from the list the list is: "<<endl;
    remove(index);
    print();
    cout << endl;
    return 0;
}