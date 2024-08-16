#include <stdio.h>
#include <stdlib.h>

int bubble_sort(int a[],int s)
{
    for(int k=1; k<s-1; k++)
    {
        for(int i=0; i<s-2 ; i++)
            {
                if(a[i]>a[i+1])
                    {
                        int swap;
                        swap = a[i];
                        a[i]=a[i+1];
                        a[i+1]=swap;
                    }
            }
    }
}
int main()
{
    int a[] = { 5, 4, 8, 6, 2, 9};
    int S = sizeof(a)/sizeof(a[0]);
    bubble_sort(a,S);
    for(int i=0; i<S ; i++)
        {
    printf(" %d  ",a[i]);
        }
    return 0;
}
