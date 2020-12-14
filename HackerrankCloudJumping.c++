// Hacker rank cloud jumping
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    vector<int> cloud;
    int length;
    cout <<"Enter the length of cloud array: "<< endl;
    cin >> length;

    cout <<"\nEnter the elements of the cloud array: "<<endl;
    for(int i = 0; i < length; ){
        int x;
        cin >> x;
        if(x == 0 || x == 1){
            cloud.push_back(x);
            i++;
        }
    }

    int energy = 100; 
    int jumpSize;
    cout<<"\nEnter the distance that cover the each jump: "<< endl;
    cin >> jumpSize;

    int i = 0;

    while (true)
    {
        /* code */
        energy = energy - 1 - 2*cloud[i];
        i = (i + jumpSize) % length;
        if(i == 0){
            break;
        }

    }

    cout << "Remain energy: " << energy << endl;
    
    return 0;
}