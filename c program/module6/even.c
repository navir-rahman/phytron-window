#include <stdio.h>

int main()
{
    /* code */
    int a;
    scanf("%d", &a);
    printf("%d%d", a);
    if (a==1)
    {
        printf(" -1\n");
    }else{
        for (int i = 1; i <= a; i++)
        {
  
                printf("%d\n",i);
            
            
        }
        
    }
    
    return 0;
}
