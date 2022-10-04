#include <stdio.h>
#include <stdlib.h>

#include "queue.h"
//원형
void error(const char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init_queue(QueueType* q) {
	q->rear = 0;
	q->front = 0;
}

int is_full(QueueType* q) {
	return (q->rear + 1) % MAX_QUEUE_SIZE == q->front;
}

int is_empty(QueueType* q) {
	return  (q->front == q->front);
}

void enqueue(QueueType* q, element item) {
	if (is_full(q)) {
		error("Queue Full");
	}

	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

element dequeue(QueueType* q) {

	if (is_empty(q))
		error("queue Empty");

	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}

element peek(QueueType* q) {
	if(is_empty(q))
		error("queue Empty");

	return q->data[(q->rear + 1) % MAX_QUEUE_SIZE];
}

void queue_print(QueueType* q)  //원형
{
	printf("QUEUE(front=%d rear=%d) = ", q->front, q->rear);
	if (!is_empty(q)) {
		int i = q->front;
		do {
			i = (i + 1) % (MAX_QUEUE_SIZE);
			printf("%d | ", q->data[i]);
			if (i == q->rear)
				break;
		} while (i != q->front);
	}
	printf("\n");
}
