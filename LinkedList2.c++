#include<bits/stdc++.h>

using namespace std;

struct Node{
    int value;
    Node* pointer;
};

Node* head;
// Declaring and defining functions

//Print function will print entire linked list
void print(){
    Node* temp = new Node;
    temp = head;

    while(temp != NULL){
        cout<< temp->value <<" ";
        temp = temp->pointer;
    }
    cout<<endl;
}

// insert(VALUE) will insert VALUE at the end of the linked list. 
void insert(int value){
    Node* temp = new Node;
    temp->value = value;
    temp->pointer = NULL;

    if(head == NULL){
        head = temp;
    }else{
        Node* help = new Node;
        help = head;

        while(help->pointer != NULL){
            help = help->pointer;
        }
        help->pointer = temp;

    }

}

// insertAtFront(VALUE) will insert VALUE at the front of the linked list 
void insertAtFront(int value){
    Node* temp = new Node;
    temp->value = value;
    temp->pointer = head;
    head = temp;
}

// Inserting data in sorted manner

void insertInSortedWay(int value){
    Node* temp = new Node;
    temp->value = value;
    if(head == NULL || head->value > value){
        temp->pointer = head;
        head = temp;
    }else{
        Node* pre = head;
        Node* temp2 = new Node;
        temp2 = pre->pointer;
        while(temp2 != NULL && temp->value > temp2->value){
            pre = temp2;
            temp2 = temp2->pointer;
        }
        pre->pointer = temp;
        temp->pointer = temp2;
        
    }
}

// Deleting a node with respective position from linked list

void deleteNode(int position){
    if(position == 1){
        Node* temp = new Node;
        temp = head;
        head = head->pointer;
        delete temp;
    }else{
        Node* temp = new Node;
        temp = head;
        for(int i = 0; i < (position - 2); i++){
            temp = temp->pointer;
        }
        Node* temp2 = new Node;
        temp2 = temp->pointer;
        temp->pointer = temp2->pointer;
        delete temp2;
    }
}

int main(){

    head = NULL;
    // Those 14 lines are working fine.
    // insert(1);// 1
    // insert(2);//1 2
    // print();

    // insertAtFront(5);// 5 1 2
    // insert(3);// 5 1 2 3
    // insert(4);// 5 1 2 3 4
    // print();// 5 1 2 3 4

    // deleteNode(2);
    // print();

    // deleteNode(1);
    // print();

    insertInSortedWay(2);
    insertInSortedWay(1);
    insertInSortedWay(4);
    insertInSortedWay(5);
    insertInSortedWay(-1);

    print();


    return 0;
}