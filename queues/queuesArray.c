#include<stdio.h>
#include<stdlib.h>

struct Queue
{
	int size;
	int front;
	int rear;
	int *Q;
};

void Create(struct Queue *q,int size)
{
	q->size = size;
	q->front = q->rear = -1;
	q->Q = (int *)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q,int x)
{
	if(q->rear == q->size - 1)
	{
		printf("Queue is full");
	}
	else
	{
		q->rear++;
		q->Q[q->rear] = x;
	}
}

int dequeue(struct Queue *q)
{
	int x = -1;
	if(q->rear == q->front)
		printf("Queue is empty");
	else
	{
		q->front++;
		x = q->Q[q->front];
	}
	return x;
}

void Display(struct Queue q)
{
	int i;
	for(i = q.front+1; i <= q.rear; i++)
	{
		printf("%d ",q.Q[i]);
	}
	printf("\n");
}

int main()
{
	struct Queue q;
	Create(&q,5); //created queue of size 5 using array.
	enqueue(&q,10);
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	Display(q);

	dequeue(&q);
	Display(q);

	return 0;
}




