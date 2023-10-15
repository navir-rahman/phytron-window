#include <bits/stdc++.h>
using namespace std;
const int BN=1e5+5;
vector<int>g[BN];
bool visited[BN];
vector<int> level(BN, 0);
vector<int> parent(BN,-1);

// void dfs(int u)
// {
//     visited[u]=true;
//     for(auto v:g[u])
//     {
//         if(visited[v])continue;
//         dfs(v);
//     }
// }


void bfs(int root)
{
    queue<int> q;
    q.push(root);
    level[root]=0;
    visited[root]=true;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int v:g[u])
        {

            if(visited[v]) continue;
            q.push(v);
            visited[v]=true;
            parent[v]=u;
            level[v]=level[u]+1;
        }
    }
    
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (size_t i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    bfs(1);

    cout<<level[n]+1<<endl;

    int crr=n;
    vector<int> path;
    while (crr != -1)
    {
        path.push_back(crr);
        crr=parent[crr];

    }
    reverse(path.begin(), path.end());

    for(auto p: path)
    {
        cout<<p<<" ";   
    }

    return 0;
}


/*
Time limit: 1.00 s Memory limit: 512 MB
Syrjälä's network has n
 computers and m
 connections. Your task is to find out if Uolevi can send a message to Maija, and if it is possible, what is the minimum number of computers on such a route.

Input

The first input line has two integers n
 and m
: the number of computers and connections. The computers are numbered 1,2,…,n
. Uolevi's computer is 1
 and Maija's computer is n
.

Then, there are m
 lines describing the connections. Each line has two integers a
 and b
: there is a connection between those computers.

Every connection is between two different computers, and there is at most one connection between any two computers.

Output

If it is possible to send a message, first print k
: the minimum number of computers on a valid route. After this, print an example of such a route. You can print any valid solution.

If there are no routes, print "IMPOSSIBLE".

Constraints
2≤n≤105

1≤m≤2⋅105

1≤a,b≤n

Example

Input:
5 5
1 2
1 3
1 4
2 3
5 4

Output:
3
1 4 5*/