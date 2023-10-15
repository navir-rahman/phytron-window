#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

const int BN=1e3+5;
const int N= 1e9+10;
vector<pii> g[BN];
vector<int>dist(BN, N);
vector<bool> visited(BN);

void bfs(int root)
{
    priority_queue< pii, vector<pii>, greater<pii>> pq;
    pq.push({dist[0], root});
    
    while (!pq.empty())
    {
        int u= pq.top().second;
        pq.pop();
        visited[u]=true;

        for(pii vpair: g[u])
        {
            int v=vpair.first;
            int w=vpair.second;

            if(visited[v])continue;
            if(dist[v]> dist[u]+w){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    } 
}


int main(){

    int n,e;
    cin>>n>>e;
    for (size_t i = 0; i < e; i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        g[a].push_back({b,w});
    }
    
    bfs(4);
    // for (size_t i = 1; i <=n; i++)
    // {
        cout<<"distence of node"<<" : "<<dist[6]<<endl;
    // }
    return 0;
}

/*
Question: You will be given an undirected weighted graph. At first you will be given N, the number of nodes then you will be given M, the number of edges. The value of nodes are from 1 to N. Next M lines will contain A, B and W which means there is an edge from A to B where the cost is W. There will be no negative weight in the graph.
Also, you will be given a source and a destination. You need to tell the shortest distance between source and destination.
Sample Input
Sample Output
6 9
1 2 5
2 3 2
1 3 10
3 4 1
4 1 5
1 5 9
5 6 1
2 6 4
2 5 2
4 6
6

The shortest path is 4-> 3-> 2-> 5-> 6, so the shortest distance is 6.
*/

