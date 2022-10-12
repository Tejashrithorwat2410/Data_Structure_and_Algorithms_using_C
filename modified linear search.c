#include<stdio.h>
int main()
{
  int i,k,n,item,loc=0;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int data[n+1];
  printf("enter the array elements\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",&data[i]);

  }
  printf("enter the search element\n");
  scanf("%d",&item);
  for(k=0;k<n && loc==0;k++)
  {
      if(item==data[k+1])
      {
          loc=k+1;
      }
  }
  if(loc==0)
  {
      printf("element is not found\n");

  }
  else

  {
      printf("element is found at loc:%d\n",loc);
  }
  return 0;

}
