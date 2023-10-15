#include <bits/stdc++.h>
using namespace std;

int main(){

    string a;
    // cin>>a;
    getline(cin,a);

    string::iterator it;

    for ( it = a.begin(); it < a.end(); it++)
    {
            cout<<*it<<endl;
    }
    
    // cout<<*a.begin();
    // cout<<*(a.end()-1);
    return 0;
}