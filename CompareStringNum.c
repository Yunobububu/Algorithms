//version numbers
#include<stdio.h>
void main()
{
    char *s="1.2";
    char *t="1.01";
    gets(s);
    gets(t);
    maxVersion(s,t);



}
int maxVersion(char *s,char *t)
{
    int i=0,j=0,n1,n2,key1,key2,h,flag=0;
    //key1,key2 is the address of the first ch that is not '0'
    //n1,n2 is the numbers of the digits that before the '.'
    int k;
    char *p,*q,*dot1,*dot2;
    p=s;
    q=t;
    while((*(p+i)!='.')&&*(p+i))
    {

        if((*(p+i)!='0')&&(flag==0))
            {
               key1=i;
               flag=1;
            }
        i++;
    }
    dot1=p+i;
    flag=0;
    while((*(q+j)!='.')&&(*(q+j)))
    {

        if((*(q+j)!='0')&&(flag==0))
            {
                key2=j;
                flag=1;
            }
            j++;
    }
    dot2=q+j;
    n1=i-key1;
    n2=j-key2;
    //before the dot ,
    if(n1!=n2)
        return max(n1,n2);
    for(k=0;k<n1;k++)
        {
            if(*(p+key1+k)!=*(q+key2+k))
            {
                if(*(p+key1+k)>*(q+key2+k))
                    return 1;
                else return -1;
            }
        }

     //after the dot
     k=0;
    while(*(dot1+k)==*(dot2+k)&&*(dot1+k)&&*(dot2+k))
    {
        k++;
    }
    if(*(dot1+k)&&*(dot2+k))
        return max(*(dot1+k),*(dot2+k));
    if(*(dot1+k)&&!*(dot2+k))
       {
           int i=0;
           while((*(dot1+k+i)=='0')&&*(dot1+k+i))
            i++;
           if(*(dot1+k+i)==0)
            return 0;
           else return 1;

       }
    if(!*(dot1+k)&&*(dot2+k))
        {
           int i=0;
           while((*(dot2+k+i)=='0')&&*(dot1+2+i))
            i++;
           if(*(dot2+k+i)==0)
            return 0;
           else return -1;

       }

    else return 0;


}

int max(int a,int b)
{
    if(a>b)
        return 1;
    if(a<b) return -1;
}



