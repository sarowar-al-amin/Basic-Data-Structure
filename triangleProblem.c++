/*
    ****Just try to teach by younger brother how to code******
    This problem will take 3 quardinate values of a triangle along with an extra
    quardinate(lets assume it as Q4) as input.
    ==========================================
    Output: show that Q4 stay in the triangle or not.  
*/
#include<iostream>

using namespace std;


// Declaring and defining function

float calculateSlope(float x1, float y1,float x2, float y2){
    float slope = (y1 - y2)/(x1 -x2);
    return slope;
}



int main(){

    float x[4];
    float y[4];
    float m[5];

    cout << "Enter Quardinate value."<<endl;
    for(int i = 0; i < 4; i++){
        cout<<"Enter x value of "<< char(i+'A')<<" :";
        cin >> x[i];
        cout<<"\nEnter y value of "<< char(i+'A')<<" :";
        cin >> y[i];
        cout << endl;
    }

    // Calculating slope
    // m[0] = calculateSlope(x[0], y[0], x[1], y[1]);
    // m[1] = calculateSlope(x[1], y[1], x[2], y[2]);
    // m[2] = calculateSlope(x[2], y[2], x[0], y[0]);

    // We can do that above calculation using loop
    for(int i = 0; i < 3; i++){
        int first, second;
        first = i % 3;
        second = (i+1) % 3;
        m[i] = calculateSlope(x[first], y[first], x[second], y[second]);
    }

    // Calculating slope of Q4 w.r.t Q2 and Q3.
    for(int i = 0; i < 2; i++){
        m[3+i] = calculateSlope(x[3], y[3], x[i+1], y[i+1]);
    } 

    if(m[0] >= m[3] && m[1] <= m[3]){
        if(m[2] <= m[4] && m[1] >= m[4]){
            cout <<"Fourth quardinate lies in the trianle."<<endl;
        }
        else{
            cout <<"Belong somewhere outside the triangle."<<endl;
        }
    }else{
        cout <<"Belong somewhere outside the triangle."<<endl;
    }

    return 0;
}