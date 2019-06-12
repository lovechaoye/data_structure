//#include"SqStack.h"
#include"LinkStack.h"
#include<stdio.h>
void testSqStack();
void testLinkStack();
int main() {

	testLinkStack();
	return 0;
}


//void testSqStack() {
//	SqStack s;
//	InitStack(&s);
//	printf("stack is empty %d\n", StackEmpty(&s));
//	push(&s, 1);
//	push(&s, 2);
//	push(&s, 3);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	printf("stack top is  %d\n", GetTop(&s));
//	printf("stack pop is  %d\n", pop(&s));
//	printf("stack pop is  %d\n", pop(&s));
//	printf("stack pop is  %d\n", pop(&s));
//	printf("stack pop is  %d\n", pop(&s));
//	printf("stack pop is  %d\n", pop(&s));
//}

void testLinkStack() {
	LinkStack top;
	InitStack(&top);
	push(&top, 1);
	push(&top, 2);
	push(&top, 3);
	push(&top, 4);
	ElemType out;
	int t=GetTop(&top, &out);
	printf("stack is empty %d\n", StackEmpty(&top));
	pop(&top, &out);
	pop(&top, &out);
	pop(&top, &out);
	DestroyStack(&top);

}