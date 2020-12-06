#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<char> input1;
vector<char> input2;

bool equalityChecking(){
    int len1 = input1.size();
    int len2 = input2.size();

    if(len1 != len2){
        return false;
    }else{
        for(int i = 0; i < len1; i++){
            if(input2[i] != input1[i]){
                return false;
            }
        }
    }

    return true;
}

int main(){
    cout <<"Enter the first string: "<<endl;
    while(true){
        char x;
        cin >> x;
        if(x == '~'){
            break;
        }else if(x =='#' && input1.size() > 0){
            input1.pop_back();
        }else{
            input1.push_back(x);
        }
    }

    cout <<"\nEnter the second string: "<< endl;
        while(true){
        char x;
        cin >> x;
        if(x == '~'){
            break;
        }else if(x =='#' && input2.size() > 0)
        {
            /* code */
            input2.pop_back();
        }else{
            input2.push_back(x);
        }
        
    }

    if(equalityChecking()){
        cout <<"Equal String"<<endl;
    }else
    {
        cout <<" Not Equal string."<<endl;
    }
    

    return 0;
}