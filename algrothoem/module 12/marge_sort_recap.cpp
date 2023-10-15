#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r)
{
    int leftside = m-l+1;
    int rightside= r-m;
    int L[leftside], R[rightside];
    int k=0;
    for (size_t i = l; i <=m; i++)
    {
        L[k]=a[i];
        k++;
    }
    k=0;
    for (size_t i = m+1; i <=r; i++)
    {
        R[k]= a[i];
        k++;
    }
    
    int i=0,j=0;
    int cur=l;
    while (i<leftside && j<rightside)
    {
        if(L[i] <= R[j])
        {
            a[cur]=L[i];
            i++;
        }else{
            a[cur]=R[j];
            j++;
        }
        cur++;
    }
    

    while (i<leftside)
    {
        a[cur]=L[i];
        i++;
        cur++;
    }
    while (j<rightside)
    {
        a[cur]=R[j];
        j++;
        cur++;
    }
    
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>a[i];
        
    }
    
    merge(a,0,3,n-1);

    for (size_t i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}