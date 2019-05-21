#include"SqList.h"
int main() {
	SqList L;
	InitSqList(&L);
	CreateSqList(&L, 10);
	DispSqList(&L);
	SqListInsert(&L,3,99);
	DispSqList(&L);
	SqListDelete(&L, 7);
	DispSqList(&L);
	int value;
	while (1)
	{
		scanf("%d",&value);
		if (value==-1)
		{
			return 0;
		}
		printf("value=%d,index=%d\n", value, LocateElem(&L, value));
	}
	printf("value=5");
	return 0;

}