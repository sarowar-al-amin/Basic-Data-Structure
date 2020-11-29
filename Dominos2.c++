// *********************

#include<bits/stdc++.h>
#include<vector>
// *****************
#define Max_size 10002

using namespace std;


// Global variable
vector<int> adj[Max_size];
bool visited[Max_size];

// Declaring and defining funtions
void dfsVisited(int node){
    visited[node] = true;
    for(int i = 0; i < adj[node].size(); i++){
        int value = adj[node][i];
        if(visited[value] == false){
            dfsVisited(value);
        }
    }

}

// Start main funtion
int main(){
    int test;
    cout << "Enter number of test case: "<<endl;
    cin >> test;
    cout<<endl;
    for(int t = 0; t < test; t++){

        int node, edge, dominos, n1, n2, x;

        cout<<"Enter the number of node, edge and fallen dominos:"<<endl;
        cin >> node >> edge >> dominos;

        for(int i = 0; i < node+1; i++){
            visited[i] = false;
            adj[i].clear();
        }
        cout<<"Enter the connected edges:"<<endl;
        for(int i = 0; i < edge; i++){
            cin >> n1 >> n2;
            adj[n1].push_back(n2);
        }

        cout<<"Enter the staring dominos:"<<endl;
        for(int i = 0; i < dominos; i++){
            cin >> x;
            dfsVisited(x);
        }

        int counter = 0;
        for(int i = 0; i < node+1; i++){
            if(visited[i]){
                counter++;
            }
        }

        cout<<"Number of fallen dominos: "<< counter << endl;
    }

    return 0;
}