// Brute force solution for this array related problem

#include<bits/stdc++.h>
// #include<vector>
#define Max_size 10002

using namespace std;

// Global vector declaration
// vector<int> input;

int input[Max_size];
int target;
int index1, index2;

// Declaring functions and defining it

bool findingIndex(int len){

    int temp;
    int count = 0;
    for(int i = 0; i < len-1; i++){
        temp = target - input[i];
        for(int j = i + 1; j < len; j++){
           if(temp == input[j]){
               index1 = i;
               index2 = j;
               count++;
           } 
        }
    }

    if(count == 1){
        return true;
    }else if( count > 1){
        cout <<"Find more than one pair for the target."<<endl;
        return false;
    }else{
        cout <<"No solution is found for the target."<< endl;
        return false;
    }

}

// Main function starts here.
int main(){
    int length;
    cout<<"Enter the value of input array length: "<<endl;
    cin >> length;
    input[length];

    cout<<"Enter value to the input array: "<<endl;
    for(int i = 0; i < length; i++){
        cin >> input[i];
    }

    cout <<"Enter the target: "<<endl;
    cin >> target;

    bool checker = findingIndex(length);

    if(checker){
        cout <<"Resulted index(Index starts from zero) :"<<endl;
        cout << index1 <<"  "<<index2<<endl;
    }

    return 0;
}