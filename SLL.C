



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
node *root,*curr,*newnode,*next;

//===============================MAIN=========================================

void main()

   {

      int x,l=0,pos,count;
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
    {
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



//========================INSERTING ELEMENT AT A POSITION=======================



	      curr=root;
	    count=1;
	   printf("\n\nENTER ELEMENT TO BE INSERTED AT A POSITION::");
	   printf("\nENTER POSITION::") ;
	   scanf("%d",&pos);
	   printf("\nENTER ELEMENT TO BE INSERTED::");
	   scanf("%d",&x);
	   if(pos>l)
	      printf("\n\nInvalid POSITION");
	   else
	   {  while(curr!=NULL)
	       {
		 if(pos==count+1)
		 {  next=curr->link;
		    newnode=(node*)malloc(sizeof(node));
		    newnode->data=x;

		    curr->link=newnode;
		    curr=newnode;
		    curr->link=next;

		    break;

		 }
		 else
		 {
		  curr=curr->link;
		   count++;

		 }


	       }


	   }


//**************************PRINTING NEW LIST*******************************


	   curr=root;
	printf("\n\nNEW LIST :  ");
	while(curr!=NULL)
	{
	printf("%d -> ",curr->data);
	curr=curr->link;
	}
	printf("NULL");
	   printf("\n\n==================================================");


//==========================INSERTING ELEMENT AT END=========================


	printf("\n\nENTER ELEMENT TO INSERTED AT THE END::");
	scanf("%d",&x);
		     printf("\n%d",curr->link) ;
	newnode=(node*)malloc(sizeof(node));
	newnode->data=x;
	newnode->link=NULL;
	curr->link=newnode;
	curr=newnode;




//**************************PRINTING NEW LIST*******************************


	   curr=root;
	printf("\n\nNEW LIST :  ");
	while(curr!=NULL)
	{
	printf("%d -> ",curr->data);
	curr=curr->link;
	}
	printf("NULL");
	printf("\n\n==================================================");

  getch();
}