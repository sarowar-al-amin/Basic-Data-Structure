#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    vector<int> Array;
    int number;

    cin >> number;

    int temp;

    for(int i = 0; i < number; i++){
        cin >> temp;
        Array.push_back(temp);
    }
    

    int nxt = 0;

    for(int i = 0; i < number; i++){
        if(Array[i] != 0){
            Array[nxt] = Array[i];
            nxt++;
        }
    }

    for(int i = nxt; i < number; i++){
        Array[i] = 0;
    }

    // Printing the result 
    cout << "Result: "<<endl;

    for(int i = 0; i < number; i++){
        cout << Array[i] << " ";
    }

    cout<< endl;

    return 0;
}