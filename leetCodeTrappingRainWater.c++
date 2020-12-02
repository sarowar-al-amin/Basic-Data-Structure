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


void findUnitVolume(){

    for(int i = 0; i < rainContainer.size(); i++){
        int leftP = i, rightP = i, maxLeft = 0, maxRight = 0;
        while(leftP >= 0){
            maxLeft = max(maxLeft, rainContainer[leftP]);
            leftP--;
        }
        while (rightP < rainContainer.size())
        {
            maxRight = max(maxRight, rainContainer[rightP]);
            rightP++;
        }

        int currentWaterVolume = min(maxLeft, maxRight) - rainContainer[i];

        if(currentWaterVolume > 0){
            unitVolume += currentWaterVolume;
        }

        
    }

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
     
    findUnitVolume();
    if(unitVolume > 0){
        cout<<"Trapped rain water volume is:-> "<< unitVolume<< endl;
    }

    return 0;
}