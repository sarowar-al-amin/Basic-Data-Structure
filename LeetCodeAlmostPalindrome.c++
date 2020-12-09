// Trying to teach my younger brother about programming
// and logic.(Here he can learn about legacy code too)
// This program checks that a given string is almost palindrome or not.
// If the string is already a palindrome it gonna take that as almost palindrome.
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
        }else if((input[i] >= '0') && (input[i] <='9')){ // Adding this line of code give the ability to 
            processedInput.push_back(input[i]);          // perform the same operation on number too.
        }
    }

    return processedInput;
}

// This fuction checks that the input is almost palindrome or not
// It takes a vector(string), left(int) and right(int) as input
// It also return boolean value
bool almostPalinedromeOrNot(vector<char> input, int left, int right){
    bool value = true;
    while (left <= right)
    {
        /* code */
        if(input[left] != input[right]){
            value = false;
            break;
        }
        left++;
        right--;
    }
    

    return value;
}

// This function either the processed string palindrome or not
// If the string is palindrome it returns 'true' otherwise
// it return 'false' 
bool palindromeOrNot(vector<char> input){
    bool value = true;
    vector<char> processedInput = processedString(input);

    int length = processedInput.size();

    if(length < 3){
        return true;
    }
    int left = 0;
    int right = length - 1;
    while (left <= right)
    {
        /* code */
        if(processedInput[left] != processedInput[right]){
            if(almostPalinedromeOrNot(processedInput, left, right -1) || almostPalinedromeOrNot(processedInput, left + 1, right)){
                value = true;
            }else{
                value = false;
            }
            break;
        }
        left++;
        right--;
    }
    

    return value;
}


// Main Function starts here
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
        cout <<"\n<---   The given string is   --->\n    ***AlMOST__PALINDROME***"<<endl;
    }else{
        cout<<"The given string is not even almost palindrome."<<endl;
    }
    cout << endl;

    return 0;
}