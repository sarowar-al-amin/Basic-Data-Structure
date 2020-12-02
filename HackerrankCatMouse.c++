#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    int query;
    cout<<"Enter thr number of query:"<<endl;
    cin >> query;
    vector<int> input[query];

    cout <<"Enter those queries: "<<endl;
    for(int j = 0; j < query; j++){
        for(int i = 0; i < 3; i++){
            int temp;
            cin >> temp;
            input[j].push_back(temp);
        }
    }

    cout <<"Calculating each query: "<<endl;
    for(int i = 0; i < query; i++){
        int catA, catB;
        catA = abs(input[i][0] -input[i][2]);
        catB = abs(input[i][1] -input[i][2]);

        if(catA < catB){
            cout <<"Cat A"<<endl;
        }else if(catB < catA){
            cout <<"Cat B" <<endl;
        }else{
            cout <<"Mouse C"<<endl;
        }

    }

    return 0;
}