//find the element at mid by using binary search algorithum
//144_TEJASHRI THORWAT
// 25/10/2021  11:30 AM

#include<stdio.h>
int main()
{
        int i ,big,end,n,mid,item,loc;
        printf("enter the size of array");
        scanf("%d",&n);
        int data[n];
        printf("enter the  elements of array");

        for(i=0;i<n;i++)
        {
            scanf("%d",&data[i]);
        }
        printf("enter the search elements:");
        scanf("%d",&item);
        big=0;
        end=n-1;
        mid=(big+end)/2;
        while(big<=end && data[mid]!=item)
        {

            if(data[mid]<item)
            {
                big=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=(big+end)/2;

         }
         if(data[mid]==item)
         {
             loc=mid;
             printf("element is found at :%d",mid);
         }
         else
         {
             printf("loc=null");
         }
         return 0;
}
