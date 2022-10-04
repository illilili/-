#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void error(const char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init_queue(QueueType* q) {
	q->rear = -1;
	q->front = -1;
}

int is_full(QueueType* q) {
	return (q->rear == MAX_QUEUE_SIZE - 1);
}

int is_empty(QueueType* q) {
	return  (q->front == q->front);
}

void enqueue(QueueType* q, element item) {
	if (is_full(q)) {
		error("Queue Full");
	}

	q->data[++(q->rear)] = item;
}

element dequeue(QueueType* q) {

	if (is_empty(q))
		error("queue Empty");
	return q->data[++(q->front)];
}

void queue_print(QueueType* q)
{
	printf("%2d, %2d", q->front, q->rear);
	for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
		if (i <= q->front || i > q->rear)
			printf("   | ");
		else
			printf("%d | ", q->data[i]);
	}
	printf("\n");
}

