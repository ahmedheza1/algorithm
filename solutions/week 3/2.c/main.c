#include <stdio.h>
#include <stdlib.h>

int partition(int q[],int start,int end)
{
    int pivot=q[end];
    int partition_index=start;
    for(int i=start;i<end;i++)
    {
        if(q[i]<pivot)
        {
            int temp=q[i];
            q[i]=q[partition_index];
            q[partition_index]=temp;
            partition_index++;
        }
    }

    int temp=q[end];
    q[end]=q[partition_index];
    q[partition_index]=temp;
    return partition_index;
}
int quick_sort(int q[],int start,int end)
{
    if(start<end)
    {
        int partition_index=partition(q,start,end);
        quick_sort(q,start,partition_index - 1);
        quick_sort(q,partition_index + 1,end);
    }
}
int main()
{
    int q[]={1, 5, 8, 2, 6, 3,7 , 4};
    int s= sizeof(q)/sizeof(q[0]);
    quick_sort(q,0,s-1);
    printf("The quick sort= ");
    for(int i=0;i<s;i++)
    {
        printf("%d  ",q[i]);
    }
    return 0;
}
