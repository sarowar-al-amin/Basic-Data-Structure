#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> result;

// Declaring and Defining function
void findingQueryResult(vector<int> a, int k, vector<int> queries){
    
    int len = queries.size();
    int n = a.size();

    k = k % n;

    for(int i = 0; i < len; i++){
        result.push_back(a[(n - k + queries[i]) % n]);
    }
}


// Main Function start here
int main(){
    vector<int> a;
    int rotation;
    vector<int> queries;
    int length;

    cout<<"Enter the length of the array: "<<endl;
    cin >> length;
    cout<<"\nEnter the array elements:"<<endl;
    for(int i = 0; i < length; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    cout<<"\nEnter the times of rotation operation perform: "<<endl;
    cin >> rotation;
    
    int lengthOfQuery;
    cout<<"\nEnter the length of query: "<< endl;
    int x;
    cin >> x;
    if(x < length){
        lengthOfQuery = x;
    }

    cout <<"\nEnter the queries value: "<<endl;
    for(int i = 0; i < lengthOfQuery; i++){
        int x;
        cin >> x;
        if(x < length){
            queries.push_back(x);
        }else{
            cout <<"Enter a less value than "<< length <<endl;
            cin >> x;
            queries.push_back(x);
        }
    }

   findingQueryResult(a, rotation, queries); 

    cout<<"Result of queries: "<<endl;

    for(int i = 0; i < lengthOfQuery; i++){
        cout<< result[i] <<"  ";
    }
    cout<<endl;

    return 0;
}