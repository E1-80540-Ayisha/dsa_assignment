#include<stdio.h>
#include<stdlib.h>
#define SIZE 2
typedef struct stack{
    int arr[SIZE];
    int top;
}stack;
void init_stack(stack *);
void push(stack *,int data);
void pop(stack *);
void display(stack *);
int stack_empty(stack *);
int stack_full(stack *);
int peek(stack *);
int main()
{
    int choice;
    int data;
    stack S;
    init_stack(&S);
    do
    {
        printf("\n enter your choice \n");
        printf("\n 0.exit\n 1.push \n 2.pop \n 3.display\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: exit(0);
            case 1:
            {
                if(stack_full(&S))
                {
                     printf("\n stack is full");
                }     
                else
                {
                   printf("\n enter element to insert");
                   scanf("%d",&data);
                   push(&S,data);
                   printf("\n element inserted successfully! \n");
                }
                break;
            }
            case 2:
            {
                if(stack_empty(&S))
                {
                     printf("\n stack is empty");
                }     
                else{
                    int ele;
                    ele = peek(&S);
                    pop(&S);
                    printf("\n deleted element = %d",ele);
                }
                break;
            }
            case 3:
            {
                if(stack_empty(&S))
                {
                     printf("\n stack is empty");
                } 
                display(&S);
                break;
            }
        }
    }while(choice != 0);
    return 0;
}
void init_stack(stack *ps)
{
    ps -> top = 0;
}
void push(stack *ps, int data)
{
    ps -> top++;
    ps -> arr[ps->top] = data;
     
}
void pop(stack *ps)
{
    ps -> top--;
}
int stack_empty(stack *ps)
{
    return (ps -> top == 0);
}
int stack_full(stack *ps)
{
    return (ps->top == SIZE+1);
}
int peek(stack *ps)
{
    return ps->arr[ps->top];
}
void display(stack *ps)
{
    for(int i=1;i<=ps->top;i++)
    {
        printf("%4d",ps->arr[i]);
    }
}