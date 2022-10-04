#include <stdio.h>
#include "queue.h"


int main(void) {
	QueueType q;
	init_queue(&q);

	enqueue(&q, 10); queue_print(&q);
	enqueue(&q, 20); queue_print(&q);
	enqueue(&q, 30); queue_print(&q);

	dequeue(&q);


	return 0;
}