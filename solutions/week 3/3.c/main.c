#include <stdio.h>
#include <stdlib.h>

int delelte(int arr[],int *s, int pos)
{
    if(pos >= *s || pos <0 )
        return;
    for(int i=pos; i< *s; i++)
    {
        arr[i]=arr[i+1];
    }
    (*s)--;
}
int main()
{
    int arr[]={10, 20, 30, 40, 50};
    int s=sizeof(arr)/sizeof(arr[0]);
    int pos;
    printf("Please enter the position of the element you want to delete= ");
    scanf("%d",&pos);
    delelte(arr,&s,pos);
    printf("The new array= ");
    for(int i=0; i<s ;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}
