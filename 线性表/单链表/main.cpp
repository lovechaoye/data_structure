#include"LinkList.h"
int main() {
	LinkList L;
	InitLinkList(&L);
	CreateLinkListHead(L, 3);
	DispLinkList(L);

	LinklistInsert_L(L, 2, 9);
	DispLinkList(L);


	ClearLinkList(L);


	free(L);
	return 0;
}