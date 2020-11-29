/*
    Bidirectional graph and every edge weight is 1 
*/
#include<bits/stdc++.h>
#include<queue>

using namespace std;

#define white 1
#define grey 2
#define black 3

int adj[80][80];
int color[80];
int parent[80];
int dis[80];

int node;
int edge;

void bfs(int startingNode){
    for(int i = 0; i < node; i++){
        color[i] = white;
        dis[i] = INT_MIN;
        parent[i] = -1;
    }

    dis[startingNode] = 0;
    parent[startingNode] = -1;

    queue<int> q;
    q.push(startingNode);

    while (!q.empty())
    {
        int x;
        x = q.front();
        q.pop();
        color[x] = grey;
        // cout << x <<" ";
        // Finding nighbour node
        for(int i = 0; i < node; i++){
            if(adj[x][i] == 1){
                if(color[i] == white){
                    dis[i] = dis[x] + 1;
                    parent[i] = x;
                    q.push(i);
                }
            }
        }

        color[x] = black;
    }
    
}

int main(){

    freopen("inputForBFS.txt","r",stdin);
    cin >> node;
    cin >> edge;

    int n1, n2;
    for(int i = 0; i < edge; i++){
        cin >> n1 >> n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    bfs(0);
    cout<<endl;

    return 0;
}