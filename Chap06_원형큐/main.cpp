// ���� ť�� ���� ���� �Լ�

#include <stdio.h>
#include "queue.h"

int main(void)
{
	int element;

	QueueType queue;
	init_queue(&queue);

	printf("--������ �߰� �ܰ�--\n");
	while (!is_full(&queue))
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &element);
		enqueue(&queue, element);
		queue_print(&queue);
	}
	printf("ť�� ��ȭ�����Դϴ�.\n\n");

	printf("--������ ���� �ܰ�--\n");
	while (!is_empty(&queue))
	{
		element = dequeue(&queue);
		printf("������ ����: %d \n", element);
		queue_print(&queue);
	}
	printf("ť�� ��������Դϴ�.\n");

	return 0;
}

