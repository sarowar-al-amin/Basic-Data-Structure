// Hacker Rank find digits

#include<bits/stdc++.h>


using namespace std;

int main(){
    int numberOfTestCase;
    cout << "Enter the number of Test Case: "<< endl;
    cin >> numberOfTestCase;

    int  number[numberOfTestCase];
    cout<<"Enter the number: "<< endl;
    for(int i = 0; i < numberOfTestCase; i++){
        cin >> number[i];
    }

    int i = 0;
    while(i < numberOfTestCase){
        int n = number[i];
        // cout<<number[i]<<endl;
        int count = 0;
        while (n != 0)
        {
            /* code */
            // cout<<"inside"<<endl;
            int x = n % 10;
            if ((x > 0) && (number[i] % x == 0)){
                count++;
            }
            n = n/10;
            
        }

        cout << "Answer for "<<number[i] <<" is: "<< count << endl;

        // increment value of i
        i++;
    }
    


    return 0;
}