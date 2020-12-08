// Array will be more useful than vector in this situation

#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    int number, flag = 0;
    int before = 0, count = 0;
    vector<char> input;

    cout <<"Enter the number of step: "<<endl;
    cin >> number;

    cout <<"Enter the path: "<< endl;
    for(int i = 0; i < number; i++){
        char temp;
        cin >> temp;
        input.push_back(temp);
    }

    for(int i = 0; i < number; i++){
        if(input[i] == 'U'){
            before = flag;
            flag++;
        }else if(input[i] == 'D'){
            before = flag;
            flag--;
        }

        if(before == 0 && flag == -1){
            count++;
        }
    }

    cout <<"Number of valley in his hike was: "<< count << endl;
    

    return 0;
}
