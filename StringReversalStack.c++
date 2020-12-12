// Teaching my younger brother about programming
// Give him idea about stack and its use.
// Using STL stack , reverse a string
// Time complexity: O(n)
// Space complexity: O(n)
#include<bits/stdc++.h>
#include<string>
#include<stack>

using namespace std;

// Global variable
string  input;

// Declaration and defining function
void reverseString(){
    stack<char> temp; // creating stack name 'temp'
    int length = input.size();

    // Putting all the character into the stack/push operation
    for(int i = 0; i < length; i++){
        char flag = input[i];
        temp.push(flag);
    }
    // pop operation 
    for(int i = 0; i < length; i++){
        input[i] = temp.top();
        temp.pop();
    }

    
}

// Main function start here
int main(){
    
    cout <<"Enter the string :"<<endl;
    cin >> input;
    cout <<"\nBefore performing any reversal operation:"<< input << endl;
    cout << endl;
    reverseString();
    cout<<"\nAfter performing reversal operation: "<< input << endl;
    cout <<endl;

    return 0;
}