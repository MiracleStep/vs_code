#include<stdio.h>
#define N 10
void main(int argc, char const *argv[])
{
    int a[10],f,i;
    for(i=0;i<N;i++)
    {
        a[i]=0;
    }
    do
    {
        scanf("%d",&f);
        a[f]++;
    }
    while(f>=0&&f<=9);
    for(i=0;i<N;i++)
    {
        printf("%d",a+i);
    }
}
