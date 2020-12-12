// Teaching by younger brother about programming
// A famous question for coding interview.
// (Here I might use some extra variable to make him understand)
#include<bits/stdc++.h>
#include<string>
#include<stack>

using namespace std;

// Global variable
string input;

// Declaration and defining functions
bool checkParentheses(){
    bool value;
    int length = input.size();
    stack<char> parenthese;

    for(int i = 0; i < length; i++){
        if(input[i] == '('){
            parenthese.push(input[i]);
        }else if(input[i] == ')'){
            if(parenthese.size() > 0){
                if(parenthese.top() == '('){
                    parenthese.pop();
                }
            }else{
                return false;
            }
        }else if(input[i] == '{'){
            parenthese.push(input[i]);
        }else if(input[i] == '}'){
            if(parenthese.size() > 0){
                if(parenthese.top() == '{'){
                    parenthese.pop();
                }
            }else{
                return false;
            }  
        }else if(input[i] == '['){
            parenthese.push(input[i]);
        }else if(input[i] == ']'){
            if(parenthese.size() > 0){
                if(parenthese.top() == '['){
                    parenthese.pop();
                }
            }else{
                return false;
            }  
        }
    }
    if(parenthese.size() == 0){
        value = true;
    }else{
        value = false;
    }
    return value;
}

// Main function starts here
int main(){

    cout<<"Enter the expression: "<<endl;
    cin >> input;

    if(checkParentheses()){
        cout <<"Parentheses are balanced."<<endl;
    }else
    {
        cout<<"Parentheses are not balanced." << endl;
    }
    

    return 0;
}