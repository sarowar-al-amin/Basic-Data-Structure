#include<bits/stdc++.h>

using namespace  std;

struct node
{
    /* data */
    int data;
    node* next;
};

// Declearing functions
char menu();
bool isEmpty(node* head);
void insertAsFirstElement(node* &head, node* &last, int data);
void insert(node* &head, node* &last, int data);
void remove(node* &head, node* &last);
void showList(node* head);

//Defining functions
char menu(){
    char choice;
    cout<<"1. Insert"<<endl;
    cout<<"2. Remove"<<endl;
    cout<<"3. ShowList"<<endl;
    cout<<"4. Exit"<<endl;

    cin >> choice;
    return choice;
}

bool isEmpty(node* head){
    if(head == NULL){
        return true;
    }else{
        return false;
    }
}

void insertAsFirstElement(node* &head, node* &last, int data){
    node* temp = new node;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    last = temp;
}

void insert(node* &head, node* &last, int data){
    if(isEmpty(head)){
        insertAsFirstElement(head, last, data);
    }else{
        node* temp = new node;
        temp->data = data;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void remove(node* &head, node* &last){
    if(isEmpty(head)){
        cout <<"This list is empty! / Underflow\n";
    }else if(head == last){
        delete head;
        head = NULL;
        last = NULL;
    }else{
        node* temp = new node;
        head = head->next;
        delete temp;
    }
}

void showList(node* head){
    if(isEmpty(head)){
        cout <<"There is no element in this list.\n";
    }else{
        cout<<"The list element/s is/are shown below: \n";
        while(head != NULL){
            cout << head->data << "  ";
            head = head->next;
        }
        cout <<endl;
    }
}

int main(){

    node* head = NULL;
    node* last = NULL;

    char choice;
    int data;

    do{
        choice = menu();

        switch (choice)
        {
        case '1' :
            /* code */
            cout<<"Enter a number: \n";
            cin >> data;
            insert(head,last,data);
            break;
        case '2' :
            /* code */
            remove(head,last);
            break;
        case '3' :
            /* code */
            showList(head);
            break;
        default:
            cout << "System doesn't recognize the command"<<endl;
            break;
        }

    }while(choice != '4');

    return 0;
}