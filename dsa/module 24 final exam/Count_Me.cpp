
#include <bits/stdc++.h>
using namespace std;

class wrd{
    public:
    int cnt;
    string wd;
    wrd(string wd, int cnt ){
        this->cnt=cnt;
        this->wd=wd;
    }
};
class cmp{
    public:
        bool operator()(wrd a,wrd b){
            if(a.cnt < b.cnt) return true;
            else return false;
        }
};

int main(){
int n;
cin>>n;
cin.ignore();
while (n--)
{
string sentence;
getline(cin, sentence);
string word;
stringstream ss(sentence);
map<string, int> mp;

int mx=INT_MIN;
string str;
while (ss>>word)
{
    mp[word]++;
    if(mp[word] > mx){
        mx = mp[word];
        str = word;
    }
}

cout << str<<" "<< mx<<endl;


}



    return 0;
}