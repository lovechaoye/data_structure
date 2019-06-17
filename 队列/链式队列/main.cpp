#include"LinkQueue.h"
int main() {
	LinkQueue queue=InitLinkQueue();
	EnQueue(&queue,1);
	EnQueue(&queue, 2);
	EnQueue(&queue, 3);
	EnQueue(&queue, 4);
	EnQueue(&queue, 5);
	ElemType e;
	DelQueue(&queue,&e);
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
	return 0;
}