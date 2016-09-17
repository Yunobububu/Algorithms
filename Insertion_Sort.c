//Insertion Sorting
#define N 10
#include<stdio.h>
void main()
{
    int A[N]={0};
    int i=0,j,m,key;
    printf("Please input %d numbers:\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(j=1;j<N;j++)
    {
        key=A[j];
        i=j-1;
        while((A[i]>key)&&(i>=0))
        {
            A[i+1]=A[i];
            i--;
        }
        A[i+1]=key;
    }
    for(m=0;m<N;m++)
        printf("%d ",A[m]);
    printf("\n");
    return 0;

}
