#include<bits/stdc++.h>

using namespace std;


// Declaring and defining functions

int main(){

    int numberOfTestCase;
    int threashold, numberOfStudent;
    
    cout <<"Enter the number of test case: "<<endl;
    cin >> numberOfTestCase;

    while(numberOfTestCase > 0){
        cout <<"\nEnter the number of students and the threashold value: "<< endl;
        cin >> numberOfStudent >> threashold;
        int student[numberOfStudent];
        int count = 0;

        cout<<"Enter the student's attended time: "<<endl;
        for(int i = 0; i < numberOfStudent; i++){
            cin >> student[i];
            if(student[i] > 0){
                count++;
            }
        }
        if(threashold > count){
            cout<<"\nYes! Class is cancelled."<<endl;
        }else{
            cout<<"\nNo! Class will be continued."<<endl;
        }
        numberOfTestCase--;
    }

    return 0;
}