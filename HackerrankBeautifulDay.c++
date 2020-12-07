#include<bits/stdc++.h>
#include<math.h>

using namespace std;

// Declaring and defining function
int reverseOfValue(int x){
    int result = 0;
    while (x > 0)
    {
        /* code */
        int flag = x % 10;
        result = result*10 + flag;
        x /= 10;
    }
    
    return result;
}

int main(){
    int initial, end, k;
    int counter = 0;

    cout <<"Enter the  initial, end and k value:"<<endl;
    cin >> initial >> end >> k;
    for(int i = initial; i < end + 1; i++){
        int reverse = reverseOfValue(i);
        int flag = abs(i - reverse);
        if(flag % k == 0){
            counter++;
            // cout <<i <<" ";
        }
    }

    cout <<"\nNumber of beautiful days: "<< counter<<endl;
}