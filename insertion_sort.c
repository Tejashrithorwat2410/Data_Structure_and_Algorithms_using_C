#include<stdio.h>

int main()
{
    int i,b,j,k,n,temp;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(k=1;k<n;k++)
    {
        temp=a[k];
        j=k-1;

        while(temp<a[j] && j>0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }

    printf("the array is :");
    for(b=0;b<n;b++)
    {
        printf("%d\n",a[b]);
    }
}
