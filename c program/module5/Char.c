#include <stdio.h>




int main()
{
    /* code */
    char s;
    scanf("%s",&s);
if(s>=97 && s<=122){
    int ans=s-32;
    printf("%c",ans);
}else if (s>=65 && s<=90)
{
    int ans=s+32;
    printf("%c",ans);
}




    return 0;
}
