#include "SqList.h"
void InitSqList(pSqList L){//初始化一个空的线性表
    L->elem=(ElemType*)malloc(sizeof(ElemType)*List_Size);
    if (!L->elem)
    {
        exit(EXIT_FAILURE);
    }
    L->length=0;
    L->listsize=List_Size;
}

void CreateSqList(pSqList L,int n){

    int i=0;
    while (i<n)
    {
       scanf("%d",L->elem+i);
        L->length++;
        i++;
    }
}

void DestroySqList(pSqList L){
    CreateThread
    free(L->elem);//注意:free和malloc必须一一对应,不要free非malloc分配的指针
}

int SqListInsert(pSqList L,int index,ElemType x){
    ElemType * old;
    if (index<0||index>=L->length)//插入位置不合法
    {
        return ERROR;
    }
    if (L->length>=L->listsize)//当前存储空间已满,增加存储空间
    {
        old=L->elem;
        if((L->elem=(ElemType*)realloc(L->elem,sizeof(ElemType)*(L->listsize+ListIncrement)))==NULL){
            free(old);
            return ERROR;   
        }
        L->listsize=L->listsize+ListIncrement;
    }
    for (size_t i = L->length; i >index ; i--)//插入位置之后的元素一次后移
    {
        *(L->elem+i)=*(L->elem+i-1);
    }
    *(L->elem+index)=x;//插入元素
    L->length++;//表长增1
}

int SqListDelete(pSqList L,int index){
    if (index<0||index>=L->length)//删除位置不合法
    {
        return ERROR;
    }
    for (size_t i =index; i < L->length-1; i++)//删除位置之后的元素依次前移
    {
        *(L->elem+i)=*(L->elem+i+1);
    }
    L->length--;//表长减一
    return OK;
}

int LocateElem(pSqList L,ElemType x){
    int i=0;
    while (i<L->length&&x!=*(L->elem+i)) i++;
    if (i<L->length)
    {
        return i;
    }
    else
    {
       return -1;
    }
}

void DispSqList(pSqList L){
    int i=0;
   while (i < L->length-1)
	{
		printf("%d,", *(L->elem + i));
		i++;
	}
	printf("%d\n", *(L->elem +i));
}


