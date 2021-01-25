#include <stdio.h>
#include <stdlib.h>
#define q_size 5
int r=-1,f=0,item,count=0;
int q[10],ch;
int p[10],pr=-1,py=0,pno;
void Add_Task(){
	if (r==q_size-1){
		printf("Job Queue is full\n");
		return;
	}
	r=r+1;
	q[r]=item;
	p[++pr]=pno;
	count++;
}
void Execute_front(){
    int i;
	p[py]=p[py]-10;
	if(p[py]==0){
        printf("Task%d execution completed\n",q[py]);
	}
    else{
        int x=p[0],y=q[0];
        for(i=0;i<4;i++){
            p[i]=p[i+1];
            q[i]=q[i+1];
        }
        p[4]=x;
        q[4]=y;
        printf("Continue Execution\n");
    }
}
void display(){
	if (f>r){
		printf("Job Queue is empty\n");
		return;
	}
	printf("Contents of the queue are:\n");
	for(int i=f;i<=r;i++)
	{
			printf("Job=%d\tPriority=%d\n",q[i],p[i]);
	}
}
int main(){
	for (;;)
	{
		printf("\n1:Add_Task\n2:Execute_front\n3:display\n");
		printf("Enter the choice:\n");
		scanf("%d",&ch);
		switch (ch){
			case 1:printf("Enter the Task no.:\n");
			       scanf("%d",&item);
			       printf("Enter the Time\n");
			       scanf("%d",&pno);
			       Add_Task();
			       break;
		    case 2:Execute_front();
		           break;
		    case 3:display();
		           break;
		    default:exit(0);
		}
	}
	return 0;
}
