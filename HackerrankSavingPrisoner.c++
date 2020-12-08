#include<bits/stdc++.h>

using namespace std;

// Declaring and Defining
int findingPrisoner(int n, int m, int s){
    int result ;
    result = m + s - 1;
    result = result % n;

    if(result == 0){
        return n;
    }

    return result;
}

int main(){
    int numberOfPrisoner, numberOfCandy, start;
    int testCase;
    cout<<"Enter the number of test case:"<<endl;
    cin >> testCase;

    while (testCase > 0)
    {
        /* code */
        cout<<"Enter the prisoner number, number of candy and starting point of distribution: "<< endl;
        cin >> numberOfPrisoner >> numberOfCandy >> start;
        int result = findingPrisoner(numberOfPrisoner, numberOfCandy, start);
        cout<<"Warn the prisoner number: "<<result <<endl;
        testCase--;
    }

    return 0;
    
}