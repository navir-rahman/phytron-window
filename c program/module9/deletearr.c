#include <stdio.h>

int main()
{
    /* code */
    int n;
    scanf("%d",&n);

    int ar[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    
    int a;
    scanf("%d",&a);
    for(int i = a; i<n-1; i++){
        ar[i]=ar[i+1];
    }
    
    for(int i = 0; i<=n; i++){
        printf("%d ",ar[i]);
    }



    return 0;
}
