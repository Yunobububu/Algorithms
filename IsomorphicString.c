//HashTable
#include<stdio.h>
#include<string.h>

    void main()
    {
        char *s="AaAff";
        char *t="CcCDb";
        int i,j,k,n1,n2;
        n1=strlen(s);
        n2=strlen(t);
        char H1[256]={0};
        char H2[256]={0};
        for(k=0;k<n1;k++)
        {
            if(H1[s[k]]!=H2[t[k]])
            {
                printf("s&t is not isophoic string\n");
                return -1;
            }

            else
            {
                H1[s[k]]=k+1;
                H2[t[k]]=k+1;
            }



        }
        printf("s&t is isophoic string\n");
        return 0;






    }




