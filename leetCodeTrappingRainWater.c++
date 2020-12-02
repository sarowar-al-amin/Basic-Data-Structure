/*
 This program has time complexity of O(n*e) where 'n' represent the length of the array and 
 'e' is the starting point for the block.
 And the space complexity of the solution is O(n+e).
*/

#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> rainContainer;
vector<int> initial;
vector<int> ending;

int unitVolume;

// Declaring and Defining functions

bool findUnitVolume(){
    int len = rainContainer.size();

    if(len > 1){
        int initialPoint = 0;
        int endPoint = 0;

        int count = 0;
        while (count < len)
        {
            if((initialPoint == 0) && (rainContainer[count] > 0)){
                initialPoint = count;
                initial.push_back(initialPoint);
                // cout << initialPoint <<" ";

            }else if((rainContainer[count] >= rainContainer[initialPoint]) && initialPoint != 0){
                endPoint = count;
                ending.push_back(endPoint);
                initialPoint = endPoint;
                initial.push_back(initialPoint);
            }else if(count == len-1){
                ending.push_back(count);
            }

            count++;
        }

        // cout << "\n Ending  point array: " << ending.size()<< endl;

        // cout <<"\nInitial: " <<initial.size()<<endl;
        // Block count
        for(int i = 0; i < initial.size(); i++){
            int unitDifference = ending[i] - initial[i]-1;
            int height = min(rainContainer[initial[i]], rainContainer[ending[i]]);

            int totalVolume = unitDifference * height;
            // cout << "totalVolume: "<< totalVolume<< endl;
            for(int j = initial[i]+1; j < ending[i]; j++){
                totalVolume -= rainContainer[j];
            }
            // cout << "totalVolume: "<< totalVolume<< endl;
            unitVolume += totalVolume;
        }


        return true;
    }

    return false;
}

int main(){

    int length;

    unitVolume = 0;

    cout<<"Enter the container length: "<<endl;
    cin >> length;

    cout<<"Enter the value to the container array: "<<endl;
    for(int i = 0; i < length; i++){
        int x;
        cin >> x;
        rainContainer.push_back(x);
    }

    if(findUnitVolume()){
        cout<<"Trapped rain water volume is:-> "<< unitVolume<< endl;
    }

    return 0;
}