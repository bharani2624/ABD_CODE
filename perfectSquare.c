#include <stdio.h>
int main()
{
    int n,i,prime;
    int square=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(i*i==n)
       {printf("%d \n",i);
         square=1;}
        
    }
    if(square!=0)
    printf("Perfect Square Number");
    else
    printf("Not A Perfect Square Number");
}