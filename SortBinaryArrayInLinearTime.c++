// This program is used sort a binary array within linear time
// Time and Space complexity is : O(n)
// In this program I use vector(some people calls it as STL dynamic array of c++)

#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    vector<int> binary;
    int length;

    cout<<"Enter the length of the array: "<<endl;
    cin >> length;

    cout<<"\nEnter the elements of the array: "<<endl;
    while (length > 0)
    {
        /* code */
        int x;
        cin >> x;
        if(x == 0 || x == 1){
            binary.push_back(x);
            length--;
        }else{
            cout <<"\nInvalid input.\n Enter 0 or 1"<<endl;
        }
    }

    length = binary.size();
    int counter = 0;
    for(int i = 0; i < length; i++){
        if(binary[i] == 0){
            binary[i] = 1;
            binary[counter] = 0;
            counter++;
        }else{
            binary[i] = 1;
        }
    }
    
    cout <<"\nSorted form of the array:  "<< endl;
    for(int i = 0; i < length; i++){
        cout << binary[i] << " ";
    }
    cout << endl;


    return 0;
}