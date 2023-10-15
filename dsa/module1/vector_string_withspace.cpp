#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

cin.ignore();
vector<string> v;
for (size_t i = 0; i < n; i++)
{
    string s;
    getline(cin, s);
    v.push_back(s);
}

for (auto val:v)
{
    cout<<val<<endl;
}


    return 0;
}