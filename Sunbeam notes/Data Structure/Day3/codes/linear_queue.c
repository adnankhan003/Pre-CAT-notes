//implementation of a "linear queue" by using an array
#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

typedef struct
{
    int arr[ SIZE ];
    int rear;
    int front;
}queue_t;


void init_queue(queue_t *pq);
int is_queue_full(queue_t *pq);
int is_queue_empty(queue_t *pq);
void enqueue(queue_t *pq, int ele);
void dequeue(queue_t *pq);
int get_front(queue_t *pq);
void display_queue(queue_t *pq);


int menu(void)
{
    int choice;

    printf("========================================\n");
    printf("linear queue ....\n");
    printf("0. exit\n");
    printf("1. enqueue\n");
    printf("2. dequeue\n");
    printf("display queue\n");
    printf("enter the choice: ");
    scanf("%d", &choice);

    return choice;
}

enum menu_options{ EXIT, ENQUEUE, DEQUEUE, DISPLAY };

int main(void)
{
    queue_t q;
    int ele;

    //printf("sizeof(q): %d bytes\n", sizeof(q));
    init_queue(&q);
    while(1)
    {
        int choice = menu();

        switch(choice)
        {
            case EXIT:
                exit(0);

            case ENQUEUE:
                //step-1: check queue is not full
                if( !is_queue_full(&q) )//if queue is not full
                {
                    printf("enter an ele: ");
                    scanf("%d", &ele);
                    enqueue(&q, ele);
                    printf("%d inserted into the queue ....\n", ele);
                    display_queue(&q);

                }
                else
                    printf("queue is full !!!\n");
                break;

            case DEQUEUE:
                //step-1: check queue is not empty
                if( !is_queue_empty(&q) )//if queue is not empty
                {
                    ele = get_front(&q);
                    dequeue(&q);
                    printf("deleted ele is: %d\n", ele);
                    display_queue(&q);
                }
                else
                    printf("queue is epmty !!!\n");
                break;

            case DISPLAY:
                display_queue(&q);
                break;
        }//end of switch control block
    }//end of while loop

    return 0;
}

void init_queue(queue_t *pq)
{
    pq->rear = -1;
    pq->front = -1;
}

int is_queue_full(queue_t *pq)
{
    return ( pq->rear == SIZE-1 );
}

int is_queue_empty(queue_t *pq)
{
    return ( pq->rear == -1 || pq->front > pq->rear );
}

void enqueue(queue_t *pq, int ele)
{
    //step-2: increment the value of rear by 1
    pq->rear++;//pq->rear = pq->rear + 1;

    //step-3: insert/push an element into the queue from rear end
    pq->arr[ pq->rear ] = ele;

    //step-4: if ( front == -1 ) then front = 0.
    if( pq->front == -1 )
        pq->front = 0;
}

void dequeue(queue_t *pq)
{
    //step-2: increment the value of front by 1 [i.e. we are deleting an ele from the queue ].
    pq->front++;
}

int get_front(queue_t *pq)
{
    //return the value of an ele which is at front end/position
    return ( pq->arr[ pq->front ] );
}

void display_queue(queue_t *pq)
{
    if( !is_queue_empty(pq) )
    {
        int index;

        printf("queue ele's are: ");
        for( index = pq->front ; index <= pq->rear ; index++ )
        {
            printf("%4d", pq->arr[ index ] );
        }
        printf("\n");
    }
    else
        printf("queue is empty !!!\n");
}