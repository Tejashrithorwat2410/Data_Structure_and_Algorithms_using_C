#include<stdio.h>
int main()
{
    int min,i,k,j,n,loc,temp,b;

    printf("Enter the size of the array\n");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(k=0;k<n-1;k++)
    {
        min=a[k];
        loc=k;

        for(j=k+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
            temp=a[k];
            a[k]=a[loc];
            a[loc]=temp;

    }

    printf("the array is \n");
    for(b=0;b<n;b++)
    {
        printf("%d\n",a[b]);
    }
}

