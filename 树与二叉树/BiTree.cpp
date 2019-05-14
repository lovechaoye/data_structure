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