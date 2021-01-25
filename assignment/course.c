#include<stdio.h>
#include<stdlib.h>
#define Que_Size 5
int item,front=0,rear=-1,q[5];
int flag=0;
void insertrear()
{
    if(rear==Que_Size-1)
    {
        printf("Registration closed!\n");
        flag=1;
        return;
    }
    rear+=1;
    q[rear]=item;
}
int deletefront()
{
    if(front>rear)
    {
        front=0;
        rear=-1;
        return -1;
    }
    if(flag==0)
        return -2;
    else
        return q[front++];
}
void display()
{
    int i;
    if(front>rear)
    {
        printf("Course list is Empty\n");
        return;
    }
    printf("ID of students registered for course\n");
    for(i=front;i<=rear;i++)
    {
        printf("ID = %d\n",q[i]);
    }
}
void main()
{
    int choice;
    for(;;)
    {
        printf("\n 1:Insertion\n 2:Deletion\n 3:Display\n 4:Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("Enter Student ID to be joined\n");
                     scanf("%d",&item);
                     insertrear();
                     break;
            case 2 :item=deletefront();
                    if(item==-1)
                    {
                        printf("Queue is empty\n");
                    }
                    else if(item==-2)
                    {
                        printf("Student can't leave the course before completion\n");
                    }
                    else
                    {
                        printf("ID of the student left = %d\n",item);
                    }
                    break;
            case 3 : display();
                     break;
            default : exit(0);
        }
    }
}
