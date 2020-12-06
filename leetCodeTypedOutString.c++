#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

vector<char> input1;
vector<char> input2;

bool equalityChecking(){
    int len1 = input1.size();
    int len2 = input2.size();
    vector<char> checker1;
    vector<char> checker2;
    for(int i = 0; i < len1; i++){
        if(input1[i] == '#' && checker1.size() > 0){
            checker1.pop_back();
        }else if(input1[i] != '#'){
            checker1.push_back(input1[i]);
        }
    }

    for(int i = 0; i < len2; i++){
        if(input2[i] == '#' && checker2.size() > 0){
            checker2.pop_back();
        }else if(input2[i] != '#'){
            checker2.push_back(input2[i]);
        }
    }

if(checker1.size() != checker2.size()){
    return false;
}else{
    bool value = true;
    int i = 0;
    while (value  && i < checker1.size())
    {
        /* code */
        if(checker2[i] != checker1[i]){
            value = false;
        }
        i++;
    }

    return value;
    
}


//   return true;
}

int main(){
    cout <<"Enter the first string: "<<endl;
    while(true){
        char x;
        cin >> x;
        if(x == '~'){
            break;
        }
        input1.push_back(x);
    }

    cout <<"\nEnter the second string: "<< endl;
        while(true){
        char x;
        cin >> x;
        if(x == '~'){
            break;
        }
        input2.push_back(x);
    }

    // cout <<"\n Check out."<<endl;
    // for(int i = 0; i < input2.size() - 1; i++){
    //     cout<< input2[i];
    // }

    if(equalityChecking()){
        cout <<"Equal" <<endl;
    }else{
        cout <<"Not equal" << endl;
    }
    return 0;
}