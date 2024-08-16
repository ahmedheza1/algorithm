#include <stdio.h>
#include <stdlib.h>

int merge_sort(int a[],int b[],int s1,int s2,int m[])
{
    int i=0;
    int j=0;
    int k=0;
    while(i<s1 && j<s2)
    {
        if(a[i]<=b[j])
        {
            m[k]=a[i];
            i++;
        }
        else
        {
            m[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<s1)
    {
        m[k]=a[i];
        i++;
        k++;
    }
    while(j<s2)
    {
        m[k]=b[i];
        j++;
        k++;
    }
}
int main()
{
    int a[]={1, 4, 6, 9, 15};
    int b[]={2, 5, 8, 10};
    int s1= sizeof(a)/sizeof(a[0]);
    int s2= sizeof(b)/sizeof(b[0]);
    int m[s1+s2];
    merge_sort(a,b,s1,s2,m);
    printf("merged array in ascending order= ");
    for(int i=0 ;i<(s1+s2); i++ )
    {
        printf("%d ",m[i]);
    }
}
