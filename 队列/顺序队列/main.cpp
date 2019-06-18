#include"LinkQueue.h"
#include"SqQueue.h"
void test1();
void test2();
int main() {
	test2();
	return 0;
}


void test1() {
	LinkQueue queue = InitLinkQueue();
	EnQueue(&queue, 1);
	EnQueue(&queue, 2);
	EnQueue(&queue, 3);
	EnQueue(&queue, 4);
	EnQueue(&queue, 5);
	ElemType e;
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
	DelQueue(&queue, &e);
}

void test2() {
	SqQueue Q;
	InitQueue(&Q);
	int empty = QueueEmpty(&Q);
	EnQueue(&Q,1);
	EnQueue(&Q,2);
	EnQueue(&Q,3);
	EnQueue(&Q,4);
	EnQueue(&Q,5);
	EnQueue(&Q,6);
	ElemType out;
	while (!QueueEmpty(&Q))
	{
		DeQueue(&Q, &out);
		printf("%d ",out);
	}
	DeQueue(&Q,&out);
	DeQueue(&Q,&out);
	DeQueue(&Q,&out);
	DeQueue(&Q, &out);
	DeQueue(&Q, &out);
	DeQueue(&Q, &out);
	EnQueue(&Q, 5);
	EnQueue(&Q, 6);
	EnQueue(&Q, 7);
	EnQueue(&Q, 8);

	DestroyQueue(&Q);
}