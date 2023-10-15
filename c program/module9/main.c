#include <stdio.h>

int main()
{
    /* code */
    // int n;
    // scanf("%d",&n);
    // int ar[n+1];
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&ar[i]);
    // }

    // int pos,val;
    // scanf("%d %d",&pos, &val);
    // for (int i = n; i >=pos+1;i--)
    // {
    //     /* code */
    //     ar[i]=ar[i-1];

    // }

    // ar[pos]=val;
    // for(int i=0;i<=n;i++)
    // {
    //     printf("%d ",ar[i]);
    // }


//  int n;
//  scanf("%d",&n);

//  int ar[n+1];

//  for(int i=0; i<n;i++){
//     scanf("%d",&ar[i]);
//  }


//  for(int i=0; i<n;i++){
//     printf("%d ",ar[i]);
//  }

// int a,b;

// scanf("%d %d",&a,&b);

// for(int i=n+1; i>=a ; i--){
//     ar[n]=ar[n-1];
// }
// ar[a]=b;

//     printf("\n");
//  for(int i=0; i<n+1;i++){
//     printf("%d ",ar[i]);
//  }



int n;
scanf("%d",&n);
int ar[n+1];

for (int i = 0; i < n; i++)
{
    scanf("%d",&ar[i]);
}


int a,b;
scanf("%d %d",&a,&b);

for (int i = 5+1; i >= 1; i--)
{
    /* code */
    ar[n]=ar[n-1];
}

ar[a]=b;



for(int i=0;i <=n;i++)
{
    printf("%d ",ar[i]);
}


    return 0;
}
