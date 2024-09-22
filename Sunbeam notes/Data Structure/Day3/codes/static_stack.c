//implementation of static stack:
#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

typedef struct
{
    int arr[ SIZE ];
    int top;
}stack_t;

//function declarations
void init_stack(stack_t *ps);
int is_stack_full(stack_t *ps);
int is_stack_empty(stack_t *ps);
void push_element(stack_t *ps, int ele);
void pop_element(stack_t *ps);
int peek_element(stack_t *ps);

int menu(void)
{
    int choice;

    printf("static stack\n");
    printf("0. exit\n");
    printf("1. push element\n");
    printf("2. pop element\n");
    printf("3. peek element\n");

    printf("enter the choice: ");
    scanf("%d", &choice);

    return choice;
}

enum menu_options{ EXIT, PUSH, POP, PEEK };

int main(void)
{
    stack_t s;
    int ele;

    init_stack(&s);

    //printf("sizeof(s): %d bytes\n", sizeof(s));

    while(1)
    {
        int choice = menu();
        switch(choice)
        {
            case EXIT:
                exit(0);

            case PUSH:
                //step-1: check stack is not full
                if( !is_stack_full(&s) )//if stack is not full
                {
                    printf("enter an ele: ");
                    scanf("%d", &ele);
                    push_element(&s, ele);
                    printf("%d pushed onto the stack ...\n", ele);
                }
                else
                    printf("stack overflow !!!\n");
                break;

            case POP:
                //step-1: check stack is not empty
                if( !is_stack_empty(&s) )//if stack is not empty
                {
                    ele = peek_element(&s);
                    pop_element(&s);
                    printf("popped ele is: %d\n", ele);
                }
                else
                    printf("stack underflow !!!\n");
                break;

            case PEEK:
                //step-1: check stack is not empty
                if( !is_stack_empty(&s) )//if stack is not empty
                {
                    ele = peek_element(&s);
                    printf("topmost ele is: %d\n", ele);
                }
                else
                    printf("stack underflow !!!\n");

                break;

        }//end of switch control block
    }//end of while loop

    return 0;
}

//function definitions
void init_stack(stack_t *ps)
{
    ps->top = -1;
}

int is_stack_full(stack_t *ps)
{
    return ( ps->top == SIZE-1 );
    /*
    if( ps->top == SIZE-1 )
        return 1;
    else
        return 0;
    */
}

int is_stack_empty(stack_t *ps)
{
    return ( ps->top == -1 );
    /*
    if( ps->top == -1 )
        return 1;
    else
        return 0;
    */
}

void push_element(stack_t *ps, int ele)
{
    //step-2: increment the value of top by 1
    ps->top++;//ps->top = ps->top + 1;    
    //step-3: insert an ele onto the stack at top position.
    ps->arr[ ps->top ] = ele;
    
   //ps->arr[ ++ps->top ] = ele;
}

void pop_element(stack_t *ps)
{
    //step-2: decrement the value of top by 1 [ i.e. we are popping an ele from the stack ].
    ps->top--;//ps->top = ps->top - 1   
}

int peek_element(stack_t *ps)
{
    //step-2: return the value of topmost ele (without incrementing/decrementing top).
    return ( ps->arr[ ps->top ] );
}