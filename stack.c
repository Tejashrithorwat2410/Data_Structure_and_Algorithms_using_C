//stack using top==-1
//TEJASHRI THORWAT
//

#include<stdio.h>
#define n 5
int push();
int pop();
int display();
int stack[n];
int top=-1;
int main()
{
    int ch;
    while(1)
    {
      printf("*********manu*******");
      printf("\n\n1.push\n 2.pop\n 3.display\n 4.exit\n\n");
      printf("enter your choice");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:push();
                 break;
          case 2:pop();
                 break;
          case 3:display();
                 break;
          case 4:return(0);

          default :printf("wrong choice");
      }
    }
}
int push()
{
    int item;
    if(top==n-1)
    {
        printf("stack is overflow\n\n");
        return 0;
    }
    else
    {
        printf("enter the element to insert\n");
        scanf("%d",&item);
        stack[top]=item;
        top=top+1;
        return 0;
    }
}

int pop()
{
   int item;
   if(top==-1)
   {
       printf("stack is underflow\n\n");
       return 0;
   }
   else
   {
       item=stack[top];
       top=top-1;
       printf("deleted element is %d\n",item);
       return 0;
   }
}

int display()
{
    int j;
    if(top==-1)
    {
        printf("stack is empty\n");
        return 0;
    }
    else
    {
        printf("stack is\n");
        for(j=top;j>=0;j--)
        {
            printf("%d\n",stack[j]);
        }
        return ;
    }
}
