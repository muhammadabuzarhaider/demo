#include<stdio.h>
int main()
{
    char a[]="allah almighty \0";
    //printf("%c",a[6]);
    int b=0;
     for(int i=0;a[i]!='h';i++){
       // printf("%c",a[i]);
       b=i;
 } printf("%c",a[b+1]);
    return 0;
}