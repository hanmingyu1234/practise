#include<stdio.h>

int main()
{
    int n,num,y=1,m=0;
    char k;
    if(scanf("%d ",&num)){};
    if(scanf("%c",&k)){};
    for(n=1;n<=2000;n++)
    {
        if(n*1+n*(n-1)==(num+1)/2)
        {
            break;
        }
        if(n*1+n*(n-1)>(num+1)/2)
        {
            n--;
            m=num-(2*(n*1+n*(n-1))-1);
            y-=2;
            break;
        }
        y+=2;
    }
    int i,j;
    char a[10000];
    for(i=0;i<y;i++)
    {
        a[i]=k;
    }
    int start=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
        a[start]=' ';
        y--;
        start++;
    }
    int start_1=y-1,end_1=y+1;
    a[y]=k;
    for(i=1;i<n;i++)
   {
       y++;
        a[start_1]=k;
        a[end_1]=k;
        for(j=0;j<=y;j++)
        {
            printf("%c",a[j]);
        }
       printf("\n");
        start_1--;
        end_1++;
    }
    printf("%d\n",m);
    return 0;
}
