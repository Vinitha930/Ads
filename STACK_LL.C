#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *link;
};
typedef struct Node node;
node *getnode();
void main()
{
   node *top,*temp,*current;
   int ch,item,i,n;
   clrscr();
   top=NULL;
   do
   {
      printf("\n\n select your choice");
      printf("\n1.push\n2.pop\n3.display\n4.exit");
      scanf("%d",&ch);
      switch(ch)
      {
	 case 1:printf("enter the element need to insert");
	    scanf("%d",&item);
	    temp=getnode();
	 if(temp==NULL)
	 {
	   printf("\n unable to create");
	 }
	  else
	  {
	    temp->data=item;
	    temp->link=top;
	    top=temp;
	  }
	  break;
	 case 2:if(top==NULL)
	 printf("the list is empty");
	 else
	 {
	    current=top;
	    item=current->data;
	    top=top->link;
	    free(current);
	    printf("the popped item is %d",item);
	 }
	 break;
	 case 3:if(top==NULL)
	 printf("stack is underflow");
	 else
	 {
	    current=top;
	    while(current!=NULL)
	 {
	  printf("%d\t",current->data);
	  current=current->link;
	  }}
	  break;
	  case 4:exit(0);
	  default:printf("invalid");
	  }
	  }
	  while(ch!=4);
	  getch();
	  }
	  node *getnode()
	   {
	     node *p;
	     p=(node *)malloc(sizeof(node));
	     return(p);
	   }
	     freenode(node *p)
	      {
		free(p);
		return;
   }
