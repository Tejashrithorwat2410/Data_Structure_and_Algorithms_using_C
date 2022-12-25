//implimentation of stack using singaly link list


#include<stdio.h>
#include<stdlib.h>

int push();
int pop();
int display();

struct stud
{
    int data;
    struct stud *next;
}*top;

int main()
{
    int ch;
    do
    {
        printf("\n\n1.push\n 2.pop\n 3.display\n 4.exit\n");
        printf("enter your choice\n\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:printf("exit!!!!!!");
                   break;
            default:printf("please enter correct choice\n");

        }
    }
    while(ch!=4);
}

//insert elements in stack at begining of list
int push()
{
    struct stud *new;
    new=(struct stud*)malloc(sizeof(struct stud));
    if(new==NULL)
    {
        printf("stack overflow\n");
        return 0;
    }
    else
    {
        printf("\nenter the element to insert\n");
        scanf("%d",&new->data);
        new->next=top;
        top=new;
    }
}

//delete the element of stack from end of the list
int pop()
{
    struct stud *temp,*temp1;
    if(top==NULL)
    {
        printf("stack underflow\n");
        return 0;
    }
  /*  if(top->next=NULL)
    {
        printf("\ndeleted data is:%d\n",top->data);
        temp=top;
        free(temp);
    }*/

    temp=top;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    printf("deleted data is:%d\n",temp->data);
    temp1->next=NULL;
    free(temp);

}


//display stack elements
int display()
{
    struct stud *temp;
    if(top==NULL)
    {
        printf("stack is empty\n");
        return 0;
    }
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            printf("\n%d\n",temp->data);
            temp=temp->next;
        }
    }

}
