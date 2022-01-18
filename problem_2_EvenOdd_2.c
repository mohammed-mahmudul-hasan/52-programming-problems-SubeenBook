#include<stdio.h>
#include<string.h>
int main()
{
    int i,count,l;
    char a[101];
    scanf("%d",&count);

    for(i=0;i<count;i++){
    scanf("%s",a);
    l=strlen(a);

    //printf("Length is %d\n",l);
    //printf("%c\n",a[l-1]);
    //printf("%s\n",a);

    if((l-1)%2==0){
        printf("even\n");
    }
        else if ((l-1)%2!=0){
            printf("odd\n");
        }

    }

    return 0;
}

