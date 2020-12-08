#include<iostream>
#include<vector>

using namespace std;

vector<int> keyboards;
vector<int> drives;


int getMoneySpend(int budget){
    int max = -1;
    int key_lenght = keyboards.size();
    int drive_lenght = drives.size();
    for(int i = 0; i < key_lenght; i++){
        for(int j = 0; j < drive_lenght; j++){
            if((keyboards[i]+drives[j]) > max && (keyboards[i]+drives[j]) <= budget){
                max = (keyboards[i]+drives[j]);
            }
        }
    }

    return max;
}
int main(){

    int no_key, no_drive;
    int budget;

    cout <<"Enter the value of keybords number: "<<endl;
    cin >> no_key;
    cout <<"\nEnter the value of drive number: "<<endl;
    cin >> no_drive;

    cout<<"\nEnter each price of those keyboard: "<<endl;
    for(int i = 0; i < no_key; i++){
        int temp;
        cin >> temp;
        keyboards.push_back(temp);
    } 

    cout <<"\nEnter each price of those drive: "<<endl;
    for(int i = 0; i < no_drive; i++){
        int temp;
        cin >> temp;
        drives.push_back(temp);
    }

    cout<<"\nEnter the max budget: "<<endl;
    cin >> budget;

    int result = getMoneySpend(budget);
    
    cout<<"Answer: "<< result << endl;

    return 0;
}