// Trying to teach my younger brother about programming
// and logic.
// This is the program that finds whether a given string is palindrome or not.
#include<bits/stdc++.h>
#include<vector>

using namespace std;

// Declaring and Defining functions

// This function is used to remove everything except alphanumeric value from input
// and also convert the uppercase letter into respective lowercase letter
vector<char> processedString(vector<char> input){
    vector<char> processedInput;
    int length = input.size();

    for(int i = 0; i < length; i++){
        if((input[i] >= 'A') && (input[i] <= 'Z')){
            processedInput.push_back(char(input[i] - 'A' + 'a'));
        }else if((input[i] >= 'a') && (input[i] <='z')){
            processedInput.push_back(input[i]);
        }
    }

    return processedInput;
}

// This function either the processed string palindrome or not
// If the string is palindrome it returns 'true' otherwise
// it return 'false' 
bool palindromeOrNot(vector<char> input){
    bool value = true;
    vector<char> processedInput = processedString(input);

    int length = processedInput.size();
    int left = 0;
    int right = length - 1;
    while (left <= right)
    {
        /* code */
        if(processedInput[left] != processedInput[right]){
            value = false;
            break;
        }
        left++;
        right--;
    }
    

    return value;
}

// Main function starts here
int main(){

    vector<char> input;

    cout <<"Enter the string need to check, is it palindrome or not:(to stop input'~') "<< endl;
    while(true){
        char x;
        cin >> x;
        if(x == '~'){
           break; 
        }
        input.push_back(x);
    }

    bool truthValue = palindromeOrNot(input);

    if(truthValue){
        cout <<"The given string is--->\n    ***PALINDROME***"<<endl;
    }else{
        cout<<"The given string is not palindrome."<<endl;
    }

    return 0;
}