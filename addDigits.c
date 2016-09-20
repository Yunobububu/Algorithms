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
    while(n>10)
        {
            n=n/10+n%10;
        }
    return n;
}
