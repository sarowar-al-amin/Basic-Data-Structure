#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    int numberOfCase;
    int initialTreeSize;

    vector<int> no_case;

    cout<<"Enter the number of test case: "<<endl;
    cin >> numberOfCase;
    cout<<endl;

    cout<<"Enter the case: "<<endl;
    for(int i = 0; i < numberOfCase; i++){
        int temp;
        cin >> temp;
        no_case.push_back(temp);
    }

    cout<<"Output:"<<endl;
    for(int i = 0; i < numberOfCase; i++){
        initialTreeSize = 1;
        for(int j = 1; j <= no_case[i]; j++){
            if(j%2 == 0){
                initialTreeSize++;
            }else{
                initialTreeSize *= 2;
            }
        }

        cout << initialTreeSize << endl;
    }
    if(numberOfCase == 0){
        cout << 1 <<endl;
    }
    return 0;
}