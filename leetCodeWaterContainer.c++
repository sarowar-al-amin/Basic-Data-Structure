#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> waterContainer;
int maximumArea;


// Declaring functions and defining it

void calculatedArea(){
    int len = waterContainer.size();
    if(len > 1){
        for(int i = 0; i < len-1; i++){
            for(int j = i+1; j <len; j++){
                int value = min(waterContainer[i], waterContainer[j]);
                int area = value * (j - i);
                maximumArea = max(maximumArea, area);
            }
        }
    }else{
        cout <<"Water container can not be formed due to lack of input"<<endl;
    }
}

// bool calculatedArea(){
//     int len = waterContainer.size();
//     if(len > 1){
//         for(int i = 0; i < len-1; i++){
//             for(int j = i+1; j <len; j++){
//                 int value = min(waterContainer[i], waterContainer[j]);
//                 int area = value * (j - i);
//                 maximumArea = max(maximumArea, area);
//             }
//         }
//     }else{
//         cout <<"Water container can not be formed due to lack of input"<<endl;
//         return false;
//     }
//     return true;
// }

int main(){
    int length;
    maximumArea = 0;
    cout <<"Enter the length of the array:"<<endl;
    cin >> length;

    cout <<"\nEnter the container value: "<<endl;
    for(int i = 0; i < length; i++){
        int x;
        cin >> x;
        waterContainer.push_back(x);
    }

    calculatedArea();

    cout <<"Maximun area: "<< maximumArea << endl;

    // if(calculatedArea){
    //     cout <<"Maximun area: "<< maximumArea << endl;
    // }

    return 0;
}