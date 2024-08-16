#include <stdio.h>
#include <stdlib.h>

void merge_sort(int m[],int s)
{
    if (s<2)
        return ;
    int mid= s/2;
    int *l=(int *)malloc(mid*sizeof(int));
    int *r=(int *)malloc((s-mid)*sizeof(int));
    if( l==NULL || r==NULL)
    {
        printf("error");
        return;
    }
    for(int i=0 ; i<mid ; i++)
    {
        l[i]=m[i];
    }
    for(int i=mid ; i<s ; i++)
    {
        r[i-mid]=m[i];
    }
    merge_sort(l,mid);
    merge_sort(r,s-mid);
    merge(m,s,l,mid,r,s-mid);
    free(l);
    free(r);
}
void merge(int m[],int s, int l[], int s1, int r[], int s2)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<s1 && j<s2)
    {
        if(l[i]<=r[j])
        {
            m[k]=l[i];
            i++;
        }
        else
        {
            m[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<s1)
    {
        m[k]=l[i];
        i++;
        k++;
    }
    while(j<s2)
    {
        m[k]=r[j];
        j++;
        k++;
    }
}
int main()
{
    int m[]= { 1, 9, 5, 8, 7, 2, 15, 30};
    int s= sizeof(m)/sizeof(m[0]);
    merge_sort(m,s);
    printf("Merge array after sorting= ");
    for(int i=0; i<s ; i++)
    {
        printf("%d  ",m[i]);
    }
    return 0;
}
