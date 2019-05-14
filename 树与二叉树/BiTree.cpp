#include "BiTree.h"
#include<stdio.h>
void PreOrderReverse(BiTree Root){
    if(Root){
        Visit(Root->data);
        PreOrder(Root->lchild);
        PreOrder(Root->rchild);
    }
}

void InOrderReverse(BiTree Root){
    if(Root){
        InOrder(Root->lchild);
        Visit(Root->data);
        InOrder(Root->rchild);
    }
}

//----------------------------递归遍历树的结构-------------------------------------------
void PreOrder(BiTree LChild){
    if (LChild)
    {
        Visit(LChild->data);//局部的根
        if(LChild->lchild){
            PreOrder(LChild->lchild);
        }
        if (LChild->rchild)
        {
         PreOrder(LChild->rchild);
        }
    }
}

void InOrder(BiTree LChild){
    if (LChild)
    {
        if(LChild->lchild){
            InOrder(LChild->lchild);
        }
        Visit(LChild->data);
        if(LChild->rchild){
            InOrder(LChild->rchild);
        }
    }
}

void PostOrder(BiTree LChild){
    if (LChild)
    {
        if(LChild->lchild){
            PostOrder(LChild->lchild);
        }
        if(LChild->rchild){
            PostOrder(LChild->rchild);
        }
        Visit(LChild->data);
    }
    
}

/**
 * 观察上述三种遍历的方式,可以发现实际访问结点数据的方法位置在方法内的位置和遍历方式是一样的
 * if语句中的均为递归调用
**/
//----------------------------------------------------------------------