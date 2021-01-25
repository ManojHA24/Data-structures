#include<stdio.h>
#include<stdlib.h>
#define qsize 3
int f=0,r=-1,ch;
int item,q[10];

int isfull()
  {
   return(r==qsize-1)?1:0;
  }
int isempty()
  {
   return(f>r)?1:0;
  }
void insert_rear()
  {
   if(isfull())
	 {
	  printf("data queue overflow\n");
	  return;
	 }
   r=r+1;
   q[r]=item;
  }
void delete_front()
  {
   if(isempty())
	 {
	  printf("data queue empty\n");
	  return;
	 }
   printf("data consumed is %d\n",q[(f)++]);
   if(f>r)
	 {
	  f=0;
	  r=-1;
	 }
  }
void insert_front()
  {
   if(f!=0)
	 {
	  f=f-1;
	  q[f]=item;
	  return;
	 }
	else if(((f==0)||(r==-1))&&(r<qsize-1))
	 {
	  q[++(r)]=item;
	  return;
	 }
	else
	  printf("data production not possible\n");
  }
void delete_rear()
  {
   if(isempty())
	 {
	  printf("data queue is empty\n");
	  return;
	 }
   printf("data consumed is %d\n",q[(r)--]);
   if(f>r)
	 {
	  f=0;
	  r=-1;
	 }
  }
void display()
  {
   int i;
   if(isempty())
	 {
	  printf("data queue empty\n");
	  return;
	 }
   for(i=f;i<=r;i++)
	printf("%d\n",q[i]);
  }
void main()
 {
  for(;;)
   {
	printf("1.Producer_rear\n2.Producer_front\n3.Consumer_rear\n4.Consumer_front\n5.Display_data\n6.exit\n");
	printf("enter choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	   case 1:printf("enter the data\n");
			  scanf("%d",&item);
			  insert_rear();
			  break;
	   case 2:printf("enter the data\n");
			  scanf("%d",&item);
			  insert_front();
			  break;
	   case 3:delete_rear();
			  break;
	   case 4:delete_front();
			  break;
	   case 5:display();
			  break;
	   default:exit(0);
	  }
	}
  }
