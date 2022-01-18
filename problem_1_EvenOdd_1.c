#include<stdio.h>
int main()
{
    int i,a,count;
    scanf("%d",&count);
    for(i=0;i<count;i++){
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("even\n");
    }
    else if(a%2!=0)
    {
        printf("odd\n");
    }
    }
    return 0;
}
