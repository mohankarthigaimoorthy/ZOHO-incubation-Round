logical programming

question no 4:

#include<stdio.h>
int findmax(int a,int b)
{
    return (a>b?a:b);
}

int main()
{
    int i,j,m,n;
    scanf("%d",&n);
    m=(n*2)-1;

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
            printf("%d",1+findmax(abs(n-i-1),abs(n-j-1)));
            printf("\n");
    }
    return 0;
}