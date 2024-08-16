#include <stdio.h>
#include <stdlib.h>

int binary_search(int a[], int low, int high, int n)
{
    if(low>high)
        return -1;
    int mid= low + (high-low)/2;
    if(n==a[mid])
        return mid;
    else if(n<a[mid])
        return binary_search(a,low,mid-1,n);
    else
        return binary_search(a,mid+1,high,n);
}
int main()
{
    int a[]= { 1, 2, 5 ,7 , 9, 12};
    int S =sizeof(a)/sizeof(a[0]);
    int low =0;
    int high =S-1;
    int n;
    printf("Please enter the number: ");
    scanf("%d",&n);
    int var = binary_search(a,low,high,n);
    if(var != -1)
        printf("%d is exist",n);
    else
        printf("%d is not exist",n);
    return 0;
}
