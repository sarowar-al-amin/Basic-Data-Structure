#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int day;
    cout<<"Enter the number after released date: "<<endl;
    cin >> day;
    int comulative = 0;
    int viewed = 5, like;

    while(day > 0){
        like = viewed / 2;
        comulative += like;
        viewed = like * 3;
        day--;
    }

    cout<<"\nComulative number of likes: "<< comulative << endl;
    return 0;
}