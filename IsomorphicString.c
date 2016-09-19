//HashTable
#include<stdio.h>
#include<string.h>

    void main()
    {
        char *s1[20]={0};
        char *s2[20]={0};
        printf("please input string 1:\n");
        gets(s1);
        printf("please input string 2:\n");
        gets(s2);
        IsomorphicString(s1,s2);

        return 0;
    }
IsomorphicString(char *s1,char *s2)
{
    int n1,n2,i,k;
    char m1[256]={0};
    char m2[256]={0};
    n1=strlen(s1);
    n2=strlen(s2);

    if(n1!=n2)
    {
        printf("the length of s&t is not equal\n");
        return -1;
    }

    for(i=0;i<n1;i++)
    {
        if(m1[s1[i]]!=m2[s2[i]])
        {
            printf("s&t is not isomorphic\n");
            return -1;
        }
        else
        {
            m1[s1[i]]=i+1;
            m2[s2[i]]=i+1;
        }

    }
    printf("s&t is isomorhic\n");

}




