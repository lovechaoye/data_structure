#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
//线性表的顺序表示与实现
typedef int ElemType;
#define List_Size 100//线性表存储空间的初始化分配量
#define ListIncrement 10//线性表存储空间的分配增量
#define ERROR 0
#define OK 1
typedef struct {
    ElemType *elem;//存放线性表的数组基地址
    int length;//线性表的当前长度
    int listsize;//线性表当前分配的存储容量
}SqList,*pSqList;

//顺序表的初始化
void InitSqList(pSqList L);

//建立顺序表
void CreateSqList(pSqList L,int n);

//销毁顺序表
void DestroySqList(pSqList L);

//插入操作
int SqListInsert(pSqList L,int i,ElemType x);

//删除操作
int SqListDelete(pSqList L,int i);

//按值查找
int LocateElem(pSqList L,ElemType x);

//一次输出线性表中的所有元素
void DispSqList(pSqList L);

