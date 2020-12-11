// Here counting starts from 0.
// Adding a node at nth position
#include<bits/stdc++.h>

using namespace std;

// structure 
struct  node
{
    /* data */
    int data;
    node* next;
};

// Global variable
node* head;
int length;

// Declaring and Defining functions
// This function add a node in a given position
void insertAtNth(int data, int position){
    if(position < 0 || position > length+1){
        cout <<"***This position is not suit for the list***"<<endl;
    }else{
        node* temp = new node;
        temp->data = data;
        temp->next = NULL;

        node* forIteration = new node;
        forIteration = head;

        if(position == 0){
            temp->next = forIteration;
            head = temp;

        }else{     
            int count = 1;

            while(count < position){
                count++;
                forIteration = forIteration->next;
            }

            node* temp1 = new node;
            temp1->next = forIteration->next;
            temp->next = temp1->next;
            forIteration->next = temp;
        }

        // After adding a new node length of the list will be increased by 1;
        length++;
    }
}

// This function add a node at the end of a function
void insert(int data){
    node* temp = new node;
    temp->data = data;
    temp->next = NULL;

    // When there is no element in the list
    if(head == NULL){
        head = temp;
    }else{
        node* temp1 = new node;
        temp1 = head;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }

    length++;

}

// This print function print all the node at current stage

void print(){
    node* temp = new node;
    temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
    
}

// Main function starts here
int main(){

    head = NULL;
    length = 0;

    // Inserting node to the 
    insert(1);
    insert(5);
    insert(7);
    insert(-1);

    cout<<"List Before adding node at a given position"<<endl;
    print();

    int data, position;
    cout<<"Enter the data and its position:(position should be less than "<<length<<" )"<<endl;
    cin >> data >> position;

    insertAtNth(data, position);

    cout<<"List after adding node at a given position: "<<endl;
    print();


    return 0;
}