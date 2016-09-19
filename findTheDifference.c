//find the difference
#include<stdio.h>
#include<stdio.h>
void main()
{
    char *s[20];
    char *t[21];
    gets(s);
    gets(t);
    printf("the different word is:%c\n",findTheDifference(s,t));
    return 0;

}
findTheDifference(char* s1, char*s2)

{
    int i=0,lens1,lens2;
    lens1=strlen(s1);
    lens2=strlen(s2);
    if(lens2-lens1!=1)
    {
        printf("input error\n");
        return -1;
    }
    char result,ch=0;
    for(i=0;i<lens1;i++)
    {
        ch^=s1[i]^s2[i];
    }

    result=ch^s2[i];
    return result;
}
