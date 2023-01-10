//linear queue
//TEJASHRI THORWAT

#include<stdio.h>
#define maxq 5
int queue[maxq];
int item;
int r=-1;
int f=-1;
int enqueue();
int dequeue();
int display();
int main()
{
    int ch;
    do
    {
      printf("*****  ***** ");
      printf("\n1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n") ;
      printf("enter your choice\n");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:enqueue();
                break;
         case 2:dequeue();
                break;
         case 3:display()
                break;
         case 4:printf("exit");
                return 0;
         default:printf("wrong choice");
      }

    }
}
