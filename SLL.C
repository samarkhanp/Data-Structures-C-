



//=========================SINGLY LINKED LIST=================================


#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct sll
{
  int data;
  struct sll *link;

};

typedef struct sll node;
node *root,*curr,*newnode;

//===============================MAIN=========================================

void main()

   {

      int x,l=0;
      clrscr();
      printf("\n\n============================================\nENTER DATA::");
      scanf("%d",&x);

//====================IMPLEMENTATION OF LIST=================================


    while(x!=0)
    {
     newnode=(node*)malloc(sizeof(node));
     newnode->data=x;
     newnode->link=NULL;
     if(root==NULL)
     {
       root=curr=newnode ;
     }
     else
     {
       curr->link=newnode;
       curr=newnode;
     }
      scanf("%d",&x);
    }

//====================PRINTING THE INITIAL LIST=================================


    curr=root;
    printf("\n\nENTERED DATA ::\n") ;
    while(curr!=NULL)
    {   l++;
      printf("%d -> ",curr->data);
     curr=curr->link;
    }
    printf("NULL");


//===================TO INSERT ELEMENT AT STARTING==========================

	   printf("\n\n==================================================");
	   printf("\nENTER THE ELEMENT TO BE INSERTED AT THE STARTING:\n");
	   scanf("%d",&x);
	    newnode=(node*)malloc(sizeof(node));
	    newnode->data=x;
	    newnode->link=root;
	    root=newnode;
	    curr=root;

//====================PRINTING THE NEW LIST=================================

	printf("\n\nNEW LIST :  ");
	while(curr!=NULL)
	{   l++;
	printf("%d -> ",curr->data);
	curr=curr->link;
	}
	printf("NULL");
	   printf("\n\n==================================================");
  getch();
}