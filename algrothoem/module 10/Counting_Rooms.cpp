#include <bits/stdc++.h>
using namespace std;

const int BN=1e3+5;
vector<string> g;
bool visited[BN][BN];
int n,m;
bool isvalid(int i, int j)
{
    return ( i>=0 && i<n && j>=0 && j<m);
}
void dfs(int i, int j)
{
    if(!isvalid(i,j)) return;
    if(visited[i][j]) return;
    if(g[i][j] == '#') return;
    visited[i][j]=true;
    dfs(i, j-1);
    dfs(i, j+1);
    dfs(i-1, j);
    dfs(i+1, j);
}


int main(){

cin>>n>>m;
for (size_t i = 0; i < n; i++)
{
    string x;
    cin>>x;
    g.push_back(x);
}
 
int ct=0;
for (size_t i = 0; i < n; i++)
{
    for (size_t j = 0; j < m; j++)
    {
        if(visited[i][j]) continue;
        if(g[i][j]=='#')continue;
        dfs(i,j);
        ct++;
    }
    
}

cout<<ct;

    return 0;
}