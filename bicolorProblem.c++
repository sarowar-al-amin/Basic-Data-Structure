// UVA bicoloring problem
// using bfs 
#include<bits/stdc++.h>
using namespace std;
int vis[100000];
int level[100000];
vector<int>vec[100000];
int src,des,x=0;
int bfs(int src,int des)
{
    vis[src]=1;
    level[src]=0;
    queue<int>q;
    q.push(src);
    while(!q.empty ())
    {
        int x=q.front();
        q.pop();
        for(int i=0; i<vec[x].size(); i++)
        {
            int y=vec[x][i];
            if(vis[y]==0)
            {
                vis[y]=1;
                if(level[x]==0)
                    level[y]=1;
                else if(level[x]==1)
                    level[y]=0;
                q.push(y);
            }
            else if(vis[y]==1)
            {
                if(level[y]==level[x])
                    return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int i,j,no,ed,u,v,x=0;
    while(cin>>no)
    {
        if(no==0)
            break;
        cin>>ed;
        memset(vis,0,sizeof(vis));
        {
            for(i=0; i<ed; i++)
            {
                cin>>u>>v;
                vec[u].push_back(v);
                vec[v].push_back(u);
            }
        }
        x=bfs(u,v);
        if(x==1)
            cout<<"BICOLORABLE."<<endl;
        else if(x==0)
            cout<<"NOT BICOLORABLE."<<endl;
        for(i=0; i<no; i++)
        {
            vec[i].clear();
        }
    }

}
