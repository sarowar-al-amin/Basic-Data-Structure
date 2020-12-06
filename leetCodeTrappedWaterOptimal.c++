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

    
    while (initialPoint < endPoint)
    {
        /* code */
        if(waterContainer[initialPoint] <= waterContainer[endPoint]){
            if(waterContainer[initialPoint] >= leftMax){
            leftMax = waterContainer[initialPoint]; 
            }else{
                totalWaterVolume += (leftMax - waterContainer[initialPoint]);
            } 
            initialPoint++;
        }else{
            if(waterContainer[endPoint] >= rightMax){
                rightMax = waterContainer[endPoint];
            }else{
                totalWaterVolume += (rightMax - waterContainer[endPoint]);
            }
            endPoint--;
        }
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