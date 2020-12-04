#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> waterContainer;
int totalWaterVolume;

// Declaring and defining functions
void findingWaterVolume(){
    int len = waterContainer.size();
    int leftMax = 0;
    int rightMax = 0;
    int initialPoint = 0, endPoint = len - 1;
    int present  = 0;

    int i = 0;
    while (i < len)
    {
        /* code */
        int height = min(leftMax, rightMax);67jm,
        if(leftMax < rightMax){
            present = initialPoint;
            if(leftMax < waterContainer[present]){
                leftMax = waterContainer[present];
            }

        int currentWaterVolume = height - waterContainer[present];
        
        if( currentWaterVolume > 0){
            // cout <<"\nVolume: "<< currentWaterVolume << endl;
            totalWaterVolume += currentWaterVolume;
        }
        i++;
    }

}

int main(){

    int length;
    totalWaterVolume = 0;

    cout<<"Enter the length of water bar container: "<<endl;
    cin >> length;

    cout <<"Enter the value to the container: "<<endl;
    for(int i = 0; i < length; i++){
        int x;
        cin >> x;
        waterContainer.push_back(x);
    }

    findingWaterVolume();

    cout <<"\nTotal trapped water volume is: "<<totalWaterVolume << endl;

    return 0;
}