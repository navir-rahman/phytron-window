//solved
#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
while (n--)
{
    int x;
    cin>>x;
    map<long long int,int> mp;
    while (x--)
    {
        int y;
        cin>>y;
        mp[y]++;
    }
    long long int num = INT64_MIN;
    int cnt = INT16_MIN;
    for(auto it= mp.begin(); it!= mp.end(); it++)
    {
    if(it->second >= cnt)
    {
        if(it->first > num){
        num = it->first;
        cnt = it->second;
        }
    }
    }
        
    cout<<num<<" "<<cnt<< endl;
    }


    return 0;
}