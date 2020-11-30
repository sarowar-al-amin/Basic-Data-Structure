#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* root;

// Declaring and defining functions

void insert(int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    if(root == NULL){
        root = newNode;
    }else{
        Node* temp = new Node;
        temp = root;

        while (1)
        {
            /* code */
                    
            if(newNode->data <= temp->data){
                if(temp->left == NULL){
                    temp->left = newNode;
                    break;
                }else{
                    temp = temp->left;
                }
            }else{
                if(temp->right == NULL){
                    temp->right = newNode;
                    break;
                }else{
                    temp = temp->right;
                }   
            }
        }
    }
}

// Pre-order traversal
void preOrder(Node* r){
    if(r == NULL){
        return;
    }
    cout<< r->data <<" ";
    preOrder(r->left);
    preOrder(r->right);
}

// Inorder traversal

void inOrder(Node* r){
    if(r == NULL){
        return;
    }
    inOrder(r->left);
    cout << r->data <<" ";
    inOrder(r->right);
}

// Post- order traversal
void postOrder(Node* r){
    if(r == NULL){
        return;
    }
    postOrder(r->left);
    postOrder(r->right);
    cout << r->data <<" ";
}
int main(){

    root = NULL;
    insert(55);
    insert(40);
    insert(80);
    insert(60);
    insert(90);
    insert(34);
    insert(38);
    insert(22);

    cout<<"Pre-order: "<<endl;
    preOrder(root);
    cout<<"\nIn-order: "<<endl;
    inOrder(root);
    cout<<"\nPost-order: "<<endl;
    postOrder(root);


    return 0;
}