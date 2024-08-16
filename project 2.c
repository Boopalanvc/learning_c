#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    char d[20],a[20];
    scanf("%s",a);
    int n,i,j,m,e=0,k,l;
    n=strlen(a);
    m=(n/2)-1;
    for(i=0;i<n-m;i++)
    {
        system("clear");
        for(l=0;l<n-e;l++)
        {
            printf("  ");
        }
        d[e]=a[m+i];
        printf("%s\n",d);
        e++;
        usleep(100000);
    }
    for(j=0;j<m;j++)
    {
        system("clear");
        for(l=0;l<n-e;l++)
        {
            printf("  ");
        }
        d[e]=a[j];
        printf("%s\n",d);
        e++;
        usleep(100000);
    }
    return 0;
}