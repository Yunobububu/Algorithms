//addDigits
#include<stdio.h>
void main()
{
    int i=18;
    printf("please input the number:\n");
    scanf("%d",&i);
    printf("%d\n",addDigits(i));
    return 0;
}
int addDigits(int n)
{
    if(n==0)
        return 0;
    else
        return (n-1)%9+1;
}
