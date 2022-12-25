
#include<stdio.h>
#include<stdlib.h>


int insert();
int delete();

int insert_at_st();
int insert_at_end();
int insert_at_loc();
int insert_before_data();
int insert_after_data();

int display();

//int delete();
int delete_at_st();
int delete_at_end();
int delete_by_data();
int delete_at_loc();

int search();

struct student
{
    int data ;
    struct student *next;
}*st;

int main()
{
    int ch;
    do
    {
        printf("enter your choice\n");
        printf("\n\n1.insert\n 2.delete\n 3.display\n 4.search\n 5.exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert();
                   break;
            case 2:delete();
                   break;
            case 3:display();
                   break;
            case 4:search();
                   break;
            case 5:printf("exit\n");
                   return 0;
            default :printf("enter correct choice\n");
        }

    }
    while(ch!=5);
}

int insert()
{
    int ch;
    do
    {
        printf("\n\nenter your choice\n");
        printf("\n1.insert_at_st\n 2.insert_at_end\n 3.insert_at_loc\n 4.insert_before_data\n 5.insert_after_data\n 6.display\n 7.exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert_at_st();
                   break;
            case 2:insert_at_end();
                   break;
            case 3:insert_at_loc();
                   break;
            case 4:insert_before_data();
                   break;
            case 5:insert_after_data();
                   break;
            case 6:display();
                   break;
            case 7:printf("exit");
                   return 0;
            default :printf("enter correct choice\n");
        }
    }
    while(ch!=7);
}

int delete()
{
    int ch;
    do
    {
        printf("\n\nenter your choice\n");
        printf("\n1.delete_at_st\n 2.delete_at_end\n 3.delete_at_loc\n 4.delete_by_data\n 5.display\n 6.exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:delete_at_st();
                   break;
            case 2:delete_at_end();
                   break;
            case 3:delete_at_loc();
                   break;
            case 4:delete_by_data();
                   break;
            case 5:display();
                   break;
            case 6:printf("exit");
                   return 0;
            default :printf("enter correct choice\n");
        }
    }
    while(ch!=6);
}

int insert_at_st()
{
    struct student *new;
    new=(struct student*)malloc(sizeof(struct student));
    if(new==NULL)
    {
        printf("overflow!!!\n");
        return 0;
    }
    printf("enter data\n");
    scanf("%d",&new->data);
    if(st==NULL)
    {
        st=new;
        st->next=NULL;
       // printf("empty list");
        //eturn 0;
    }
    else
    {
        new->next=st;
        st=new;
    }

}

int insert_at_end()
{
    struct student *new,*temp;
    new=(struct student*)malloc(sizeof(struct student));
    if(new==NULL)
    {
        printf("overflow!!!!\n");
        return 0;
    }

    printf("enter data\n");
    scanf("%d",&new->data);
    if(st==NULL)
    {
        st=new;
        new->next=NULL;
    }
    else
    {
        temp=st;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
        new->next=NULL;
    }

}

int display()
{
    struct student *temp;
    if(st==NULL)
    {
        printf("EMPTY LIST!!!\n");
        return 0;
    }
    else
    {
        temp=st;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }

}

int insert_at_loc()
{
  int loc,count;
  struct student *new,*temp,*temp1;
  new=(struct student*)malloc(sizeof(struct student));
  if(new==NULL)
  {
        printf("overflow!!!!\n");
        return 0;
  }
  if(st==NULL)
  {
      printf("empty list");
      return 0;
  }
  printf("enter the location");
  scanf("%d",&loc);
  if(loc==1)
  {
      insert_at_st();
      return 0;
  }
  count=1;
  temp=st;
  while(loc!=count && temp->next!=NULL )
  {
      temp1=temp;
      temp=temp->next;
      count++;
  }
  if(count==loc)
  {


      printf("enter item");
      scanf("%d",&new->data);
      temp1->next=new;
      new->next=temp;
  }

  else
  {
      printf("location is not found");

      return 0;
   }
}


int insert_before_data()
{
    int num;
    if(st==NULL)
    {
        printf("EMPTY LIST!!!");
        return 0;
    }
    printf("enter the no.to add before data");
    scanf("%d",&num);
    if(st->data==num)
    {
        insert_at_st();
        return 0;
    }
    struct student *new,*temp,*temp1;
    new=(struct student *)malloc(sizeof(struct student));
    if(new==NULL)
    {
        printf("overflow");
        return 0;
    }
   // printf("enter item");
   // scanf("%d",&new->data);
    temp=st;
    while(temp->data!=num && temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    if(temp->data==num)
    {
        printf("enter item ");
        scanf("%d",&new->data);
        new->next=temp;
        temp1->next=new;
    }
    else
    {
        printf("data is not found");
    }
}

int insert_after_data()
{
    int num;
    struct student *new,*temp,*temp1;
    if(st==NULL)
    {
        printf("empty list");
        return 0;
    }
    printf("enter the no. to add after data");
    scanf("%d",&num);
    if(st->data==num)
    {
        insert_at_st();
        return 0;
    }
    temp=st;
    while(temp->data!=num && temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp1=temp->next;
    if(temp->data==num)
    {
        new=(struct student *)malloc(sizeof(struct student));
        if(new==NULL)
        {
            printf("overflow");
            return 0;
        }
        printf("enter item");
        scanf("%d",&new->data);
        temp->next=new;
        new->next=temp1;
    }
    else
    {
        printf("data is not found \n");
        return 0;
    }
}


//OPRATION ON DELETE
int delete_at_st()
{
    struct student *temp;
    if(st==NULL)
    {
        printf("empty list");
        return 0;
    }
    else
    {
        printf("the deleted item is:%d\n",st->data);
        temp=st;
        st=st->next;
        free(temp);
    }
}

int delete_at_end()
{
    int num;

    struct student *temp,*temp1;
    if(st==NULL)
    {
        printf("empty list\n");
        return 0;
    }
    if(st->next==NULL)
    {
        delete_at_st();
        return 0;
    }
    temp=st;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    printf("the deleted item is:%d\n",temp->data);
    temp1->next=NULL;
    free(temp);

}


int delete_by_data()
{
    int num;
    struct student *temp,*temp1;
    if(st==NULL)
    {
        printf("empty list\n");
        return 0;
    }
    printf("enter item to be deleted\n");
    scanf("%d",&num);
    if(st->data==num)
    {
        delete_at_st();
        return 0;
    }
    temp=st;
    while(temp->data!=num && temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    if(temp->data==num)
    {
        printf("the deleted item is :%d\n ",temp->data);
        temp1->next=temp->next;
        free(temp);
    }
    else
    {
        printf("item is not found\n");
    }
}

int delete_at_loc()
{
    int loc,count;
    struct student *temp,*temp1;
    if(st==NULL)
    {
        printf("empty list\n");
        return 0;
    }
    printf("enter the location for deleting the data\n");
    scanf("%d",&loc);
    if(loc==1)
    {
        delete_at_st();
        return 0;
    }
    count=1;
    temp=st;
    while(loc!=count && temp->next!=NULL)
    {
        temp1=temp;
        temp=temp1->next;
        count++;
    }
    if(count==loc)
    {
        printf("the deleted item is:%d\n ",temp->data);
        temp1->next=temp->next;
        free(temp);
    }
    else
    {
        printf("location is not found\n");
        return 0;
    }
}


int search()
{
    	int count,loc,item;

	struct student *temp;

	if(st==NULL)

	{

		printf("empty list!!!...\n");

		return 0;

	}

	count = 1;

	loc = 1;

	printf("enter the data to find the its location :\n");

	scanf("%d",&item);

	temp=st;

	while(temp->data != item && temp->next != NULL)

	{

		temp=temp->next;

		count++;

		loc=count;

	}

	if(temp->data==item)

	{

		printf("the data %d found in location %d\n",item,loc);

	}

	else

	{

		printf("data not found !!!...\n");

		return 0;

	}

}
