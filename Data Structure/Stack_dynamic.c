#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack
{
    int top;
    unsigned capacity;
    int *array;
};
struct stack* create_stack(int cap)
{
    struct stack *s=malloc(sizeof(struct stack));
    s->capacity=cap;
    s->top=-1;
    s->array=malloc(s->capacity*sizeof(int));
    return (s);
}
int isfull(struct stack *s)
{
    if(s->top== s->capacity-1)
        return (1);
    else
        return (0);
}
int isempty(struct stack *s)
{
    if(s->top==-1)
        return 1;
    else
        return 0;
}
void push(struct stack *s,int x)
{
    if(!isfull(s))
    {
      s->array[s->top++]=x;
    }
    else
        printf("stack is full");
}
int pop(struct stack *s)
{
    int item;
    if(!isempty(s))
    {
        return (s->array[s->top--]);
    }
    else
       return (-1);
}
int main()
{
    struct stack *s=create_stack(10);
    int a,item;
    while(1)
    {
        printf("1.Push\n2.Pop\n3.Exit\n");
        scanf("%d",&a);
        switch(a)
        {
        case 1:scanf("%d",&item);
               push(s,item);
               break;
        case 2:
                item=pop(s);
                if(item==-1)
                {
                 printf("stack is empty");
                }
                else
                printf("%d",item);
                break;
        case 3:
                exit(0);
        }
     }
  return 0;
}



