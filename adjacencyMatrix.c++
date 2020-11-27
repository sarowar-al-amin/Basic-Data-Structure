#include<bits/stdc++.h>

using namespace std;

int adj[80][80];

int main(){

    freopen("inputForAdjacency.txt", "r", stdin);
    int node, edge;
    cout<<"Enter the number of node: "<<endl;
    cin >> node;
    cout<<"\nEnter the number of edge: "<<endl;
    cin >> edge;
    cout<<endl;

    int n1, n2;

    cout <<"Enter the edges :"<< endl;
    for(int i = 0; i < edge; i++){
        cin >> n1 >> n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    cout<<"Printing the adjacency matrix: "<<endl;
    for(int  i = 0; i < node; i++){
        for(int j = 0; j < node; j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}