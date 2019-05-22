#include"myheader.h"

void to_binary_recursion(IN int n, IN int flag) {
	int num = n;
	if (n < 0)
	{
		n = 65536 + n;
	}
	int remainder = n % 2;
	int quotients = n / 2;
	if (quotients > 0) {
		to_binary_recursion(quotients, flag);
	}
	if (flag == num)
	{
		printf("%d\n", remainder);
	}
	else {
		printf("%d ", remainder);
	}
}

void to_binary_norecursion(IN int n) {
	int num = n;
	if (num < 0)
	{
		num = 65536 + num;
	}
	Stack s;
	InitStack(&s, 100);
	while (num > 0)
	{
		int remainder = num % 2;
		int quotients = num / 2;
		push(&s, remainder);
		num = quotients;
	}
	showStack(&s);
	destroyStack(&s);
}
