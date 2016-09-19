//CountSort
#include<stdio.h>
void main()
{
    int i,j,k;
    int a[10]={2,3,5,0,1,3,4,6,7,9};
    int b[10]={0};
    int c[10]={0};
    for(i=0;i<10;i++)
    {
        c[a[i]]=c[a[i]]+1;
    }
    for(k=1;k<10;k++)
    {
        c[k]=c[k]+c[k-1];
    }
    for(j=9;j>=0;j--)
    {
        b[c[a[j]]-1]=a[j];
        c[a[j]]=c[a[j]]-1;
    }
    for(i=0;i<10;i++)
        printf("%d ",b[i]);
    return 0;
}
