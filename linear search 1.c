#include<stdio.h>
int main()
{
    int i,n,item,loc=-1,k;
    printf("enter the size of array");
    scanf("%d",&n);
    int data[n];
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    printf("enter the search item");
    scanf("%d",&item);
    for(k=0;k<n && loc==-1;k++)
    {
        if(item==data[k])
        {
            loc=k;
        }

    }
    if(loc==-1)
    {
        printf("element is not found");
    }
    else
    {
        printf("element is found at loc:%d",loc);
    }
}

