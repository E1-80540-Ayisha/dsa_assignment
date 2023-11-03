#include<stdio.h>
#include<stdlib.h>
int top=-1;
int empty(int top)
{
    return (top == -1);
}
int full(int top,int size)
{
    return (top == size-1);
}
void push(int *top,int data,int arr[])
{
    (*top)++;
    arr[*top]=data;
}
void pop(int *top)
{
    (*top)--;
}
void display(int arr[],int top)
{
    for(int i=0;i<=top;i++)
    {
        printf("%4d",arr[i]);
    }
}
int main()
{
    int choice,data,size;
    printf("enter size of stack\n");
    scanf("%d",&size);
    int arr[size];
    do
    {
        printf("\n1.exit\n2.push\n3.pop\n4.display\n");
        printf("enter ur choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
           case 1:exit(0);
           case 2:
               if(full(top,size))
               {
                    printf("stack is full\n");
               }
               else
               {
                   printf("enter element to insert\n");
                   scanf("%d",&data);
                   push(&top,data,arr);
                   printf("element inserted!");
               }
               break;
           
          case 3:
              if(empty(top))
              {
                 printf("stack is empty!\n");
              }
              else
              {
                 pop(&top);
              }
              break;
          case 4:
          {
               if(empty(top))
               {
                   printf("stack is empty!");
               }
               else{
                   display(arr,top);
               }
               break;
          }
       }
     }while(choice!=1);
     return 0;
}