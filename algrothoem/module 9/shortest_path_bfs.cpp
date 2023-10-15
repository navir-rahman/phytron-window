#include <bits/stdc++.h>
using namespace std;

const int BN=1e3+5;
vector<int> adj[BN];


bool visited[BN];
int level[BN];
int parent[BN];

void bfs(int root)
{
    queue<int>q;
    q.push(root);
    visited[root]=true;
    level[root]=0;
    parent[root]=-1;

    while (!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int v:adj[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[root]+1;
            parent[v]=u;
        }
    }
    
}

int main(){

int n,m;
cin>>n>>m;
for (size_t i = 0; i < m; i++)
{
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int s,d;
cin>>s>>d;

bfs(s);

cout<<"Distenct: "<<level[d]<<endl;

vector<int> path;
int current = d;
 while (current != -1)
 {
    path.push_back(current);
    current = parent[current];
 }

 reverse(path.begin(), path.end() );

 cout<< "path : ";
 for(int node: path){
    cout<<node<<" ";
 }
 
    return 0;
}