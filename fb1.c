#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t,j,k,i,l;
    char a[10],b[10],c[10];
    char ch,ch1,ch2;
    ch=ch1='0';
    scanf("%d",&t);
    for(l=0;l<t;l++)
    {
     scanf("%s",a);
     for(i=0;i<strlen(a);i++)
     {
      if(a[i]>ch && a[i]!='0')
      { ch=a[i];
         j=i;}
         else if(a[i]<ch1 && a[i]!='0')
         { ch1=a[i];
            k=i;}}
            strcpy(b,a);
            ch2=b[j];
            b[j]=b[0];
            b[0]=ch2;
            strcpy(c,a);
            ch2=c[k];
            c[k]=c[0];
            c[0]=ch2;
            printf("case #%d: %s %s\n",l+1,c,b);
            }
            return 0;
            }
