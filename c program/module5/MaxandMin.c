#include <stdio.h>

int main()
{
    /* code */
    int a,b,c,max,min;

    scanf("%d %d %d",&a,&b,&c);

    if (a>=b && a>=c)
    {
        max=a;   
    }else if (b>=c && b>=a)
    {
        max=b;
    }else{
        max=c;
    }

    
    if (a<=b && a<=c)
    {
        min=a;   
    }else if (b<=c && b<=a)
    {
        min=b;
    }else{
        min=c;
    }
    
    
    printf("%d %d",min,max);
    return 0;
}
