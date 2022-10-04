#include <stdio.h>
#include "queue.h"

void init_queue(QueueType* q);
void enqueue(QueueType* q, element item);
element dequeue(QueueType* q);
void queue_print(QueueType* q);

int main(void) {
	QueueType q;
	init_queue(&q);

	enqueue(&q, 10); queue_print(&q);
	enqueue(&q, 20); queue_print(&q);
	enqueue(&q, 30); queue_print(&q);

	dequeue(&q);


	return 0;
}