#include<stdio.h>
#include<conio.h>
#include<process.h>
#define QUE_SIZE 10
int item,front=0,rear=-1,q[10];
void insertrear()
{
if(rear==QUE_SIZE-1)
{
printf("waiting room full");
return;
}
rear=rear+1;
q[rear]=item;
}
int deletefront()
{
if(front>rear) return -1;
return q[front++];
}
void displayQ()
{
int i;
if(front>rear)
{
printf("waiting room empty\n");
return;
}
printf("customers in waiting room \n");
for(i=front;i<=rear;i++)
{
printf("%d\n",q[i]);
}
}
void main()
{
 int choice;
 for(;;)
 {
 printf("\n1:customer_entering\n2:customer_leaving\n3:display_customers\n4:exit\n");
 printf("enter the choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:printf("enter the customer's number entering \n");
	scanf("%d",&item);
	insertrear();
	break;
 case 2:item=deletefront();
	if(item==-1)
	printf("waiting room empty\n");
	else
	printf("customer leaving =%d\n",item);
	break;
 case 3:displayQ();
	break;
 default:exit(0);
}
}
getch();
}
