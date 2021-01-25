#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char pop(char s[],int top){
     char item;
     item=s[top];
     return item;
}
void main()
{
    int i,flag;
    char c[20];
    char s[20];
    printf("Enter a String\n");
    gets(c);
    int top=-1;
    for(i=0;i<strlen(c);i++){
        s[++top]=c[i];
    }
    for(i=0;i<strlen(c)/2-1;i++){
        if(c[i]!=pop(s,top)){
            printf("Not a Palindrome\n");
            flag=0;
            break;
        }
        top--;
    }
    if(flag!=0){
        printf("Palindrome");
    }
}
