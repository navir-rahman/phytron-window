#include <bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<long long int, vector<int>, greater<int>> pq;
    int n;
    cin>>n;
    while (n--)
    {
        long long int x;
        cin>>x;
        pq.push(x);
    }

    long long int q;
    cin>>q;
    while (q--)
    {
        int cmd;
        cin>>cmd;
        if(cmd == 0)
        {
            long long int c;
            cin>>c;
            pq.push(c);   
            cout<<pq.top()<<endl;

        }else if (cmd == 1)
        {
            if(!pq.empty()) {
            cout<<pq.top()<<endl;
            }
            else{
             cout<<"Empty"<<endl;
            }
        }else if (cmd == 2)
        {
            if(pq.size() >= 1){
            pq.pop();
            }

            if(!pq.empty()) {
            cout<<pq.top()<<endl;
            }
            else{
             cout<<"Empty"<<endl;   
            }

            // if(pq.size() == 1){
            // pq.pop();
            // }
        }
        
    }
    
    
    return 0;
}