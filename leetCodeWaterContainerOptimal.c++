// Time complexity of this problem is O(n).

#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> waterContainer;
int maximumArea;


// Declaring and defining functions

bool findingMaximumArea(){
    int len = waterContainer.size();

    if(len > 1){
        int endPointer = len -1;
        int count = 0, initialPointer = 0;

        while(count <(len - 1)){
            int hight = min(waterContainer[initialPointer], waterContainer[endPointer]);
            int width = endPointer - initialPointer;
            int area = hight * width;
            maximumArea = max(maximumArea, area);
            if(waterContainer[initialPointer] == hight){
                initialPointer++;
            }else{
                endPointer++;
            }

            count++; 
        }
        return true;
    }else{
        cout <<"Container list is too small to calculate area. (Next time al least put 2 as array length)" <<endl;
    }

    return false;
}

// Main function starts here.
int main(){

    int length;
    maximumArea = 0;

    cout <<"Enter the container length: "<<endl;
    cin >> length;

    cout<<"Enter the value to the container array:"<<endl;
    for(int i = 0; i < length; i++){
        int x;
        cin >> x;
        waterContainer.push_back(x);
    }

    if(findingMaximumArea()){
        cout<<"Maximum Area for the water container is :-> "<< maximumArea<<endl;
    }


    return 0;
}