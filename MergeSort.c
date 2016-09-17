//MergeSort
#define N 7
#include<stdio.h>
void main()
{
    int a[N];
    int m=0;
    for(m=0;m<N;m++)
    {
        scanf("%d",&a[m]);
    }
    int i;
    MergeSort(a,0,N-1);
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
MergeSort(int *s,int p,int r )
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        MergeSort(s,p,q);
        MergeSort(s,q+1,r);
        Merge(s,p,q,r);
    }
}


Merge(int *s,int Start,int Mid,int End)
{
    int lens1=Mid-Start+1;
    int lens2=End-Mid;
    int left[lens1];
    int right[lens2];
    int i,j,k=0,flag;
    for(i=0;i<lens1;i++)
    {
        left[i]=s[Start+i];
    }
    for(j=0;j<lens2;j++)
    {
        right[j]=s[Mid+1+j];
    }
    i=0,j=0,k=Start;
    while(i<lens1&j<lens2)
    {
        if(left[i]<right[j])
            s[k++]=left[i++];
            else
                s[k++]=right[j++];

    }
    while(i<lens1)
        s[k++]=left[i++];
    while(j<lens2)
        s[k++]=right[j++];


}

