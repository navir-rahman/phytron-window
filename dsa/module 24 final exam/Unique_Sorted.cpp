
//solved
#include <bits/stdc++.h>
using namespace std;

int main(){

int z;
cin>>z;
while (z--)
{


set<int>s;
int n;
cin>>n;
while (n--)
{
    int x;
    cin>>x;
    s.insert(x);
}
vector<int>v;
for(auto it= s.begin(); it!=s.end(); it++ )
{
    // cout<<*it<<" ";
    v.push_back(*it);
}
reverse(v.begin(), v.end());
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}

cout<<endl;
}
    return 0;
}