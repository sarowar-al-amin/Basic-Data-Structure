#include<bits/stdc++.h>
#include<string>

using namespace std;

string s;

// Declaring and Definingg function
bool exist(int left, int right, char a){
    for(int i = left; i < right; i++){
        if((char)s[i] == a){
            return true;
        }
    }

    return false;
}

int longestSubStringLength(){
    int maximum = 0;
    int length = s.size();
    if(length < 2){
        maximum = length;
    }else{
        for(int i = 0; i < length; i++){
            int count = 1;
            for(int j = i+1; j < length; j++){
                if(!exist(i, j, (char)s[j])){
                   count++; 
                }else{
                    break;
                }
            }
            maximum = max(count, maximum); 
        }
    }

    return maximum;
}

int main(){

    cout <<"Enter the string: "<< endl;
    cin >> s;

    int result = longestSubStringLength();

    cout <<"Longest sub-string length: "<< result << endl;

    return 0;
}