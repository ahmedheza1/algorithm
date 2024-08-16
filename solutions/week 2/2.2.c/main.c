#include <stdio.h>
#include <stdlib.h>

int binary_search(int a[], int s, int n)
{
    int low=0;
    int high=s-1;
    while(low<=high)
    {
    int mid= low+(high-low)/2;
        if(n==a[mid])
            return mid;
        else if(n<a[mid])
            high= mid-1;
        else
            low = mid+1;
    }
    return -1;
}
int main()
{
    int a[]= { 1, 3, 5 ,6 , 9 ,12, 20};
    int s =sizeof(a)/sizeof(a[0]);
    int n;
    printf("Please enter the number: ");
    scanf("%d",&n);
    int var = binary_search(a,s,n);
    if (var != -1)
        printf("%d is exist",n);
    else
        printf("%d is not exist",n);
    return 0;
}
