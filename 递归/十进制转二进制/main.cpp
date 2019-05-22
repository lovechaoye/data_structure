#include"myheader.h"

int main() {
	int n;
	while (true)
	{
		scanf("%d", &n);
		if (n == 0)
		{
			break;
		}
		to_binary_recursion(n,n);
		to_binary_norecursion(n);
	}

	return 0;
}

