#include"DuLNode.h"
int main() {
	DuLinkList L;
	InitDuLinkList(&L);
	CreateDuLinListTail(L, 9);
	DuLNode* node=GetElem_L(L,3);
	DuLinkListInsert(L,4,10);
	//DuLinkListDelete(L,3);
	int length = DuLinkListlen(L);
	DispDuLinkList(L);
	ClearDuLinkList(L);
	free(L);
	return 0;
}