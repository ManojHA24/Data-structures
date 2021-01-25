#include<stdio.h>
#include<stdlib.h>
int stack[50];

int ch;
void push(void);
void pop(void);
void display(void);
int n,top,no,i;
int main()
{
    top=-1;
    printf("\n Enter the size of Log:");
    scanf("%d",&n);
    printf("\n Please enter the Log operation which you want to perform:");
    printf("\n 1.Enter_URL_no.\n 2.Back\n 3.display_Log\n 4.exit");
    while(ch!='0')
    {
        printf("\n Enter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
            {
                printf ("\nINVALID CHOICE!");
            }

        }
    }

    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\nLog is full");

    }
    else
    {
        printf(" Enter a ID of url to be accessed:");
        scanf("%d",&no);
        top++;
        stack[top]=no;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nEmpty Log");
    }
    else
    {
        printf("\n The ID of url previously accessed is URL - %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The urls in log are as follows: \n");
        for(i=top;i>=0;i--)
            printf("\n%d\n",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The log is empty");
    }

}

