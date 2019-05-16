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

void PostOrderReverse(BiTree Root){
      if(Root){
        PostOrder(Root->lchild);
        PostOrder(Root->rchild);
        Visit(Root->data);
    }
}
//----------------------------递归遍历树的结构-------------------------------------------
void PreOrder(BiTree LChild){
    if (LChild)
    {
        Visit(LChild);//局部的根
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
        Visit(LChild);
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
        Visit(LChild);
    }
    
}

/**
 * 观察上述三种遍历的方式,可以发现实际访问结点数据的方法位置在方法内的位置和遍历方式是一样的
 * if语句中的均为递归调用
**/

//访问结点内容的方法(下面是最简单的),数据的查找其实就是建立在数据遍历之上的,对应就是修改Visit方法的实现,检索到目标结点再return而已
void Visit(BiTree node){
    printf("%c\n",node->data);
}


void IPreOrder(BiTree root){
    int top=0;
    BiTree p=root;
    if(p){
        L2:Visit(p->data);/*访问根*/
        top=top+2;
        s[top-1]=p->lchild;
        s[top]=
    }
}

/**
 *处理递归问题的方法是自己手动增加一个工作栈,因为递归调用的特点是先掉后出,到递归终止条件从最后一级往最开始的一级返回,这个刚好是先进后出的特点,与栈的特点一致 
**/

/*-------------------------非递归实现中序遍历--------------------------------------*/
void IInOrder_goto(BiTree root){
    int top=0;
    BiTree p=root;
     L1:if (p)  /*遍历左子树*/
     {
        top=top+2;
        if(top>m) return;/*栈满溢出*/
        s[top-1]=p;     /*本层参数进栈*/
        s[top]=L2;      /*返回地址进栈*/
        p=p->lchild     /*给下层参数赋值*/
        goto L1;        /*转向开始*/
        L2:Visit(p->data);/*访问根*/
        top=top+2;
        if(top>m)  return;/*栈满溢出处理*/
        s[top-1]=p;/*遍历右子树*/
        s[top]=L3;
        p=p->rchild;
        goto L1;
     }
     L3:if(top){
        addr=s[top];
        p=s[top-1];/*取出返回地址*/
        top=top-2; /*退出本层参数*/
        goto addr;
     }
}

void IInOrder_loop(BiTree root){
    int top=0;
    BiTree p=root;
    do{
        while (p!=NULL)
        {
            if(top>m) return;
            top=top+1;
            s[top]=p;
            p=p->lchild;
        }/*遍历右子树*/
        if (top!=0)
        {
            p=s[top];
            top=top-1;
            Visit(p->data);/*访问根节点*/
            p=p->rchild;
        }
    }while(p!=NULL||top!=0);
}
/*--------------------------------前序遍历的非递归实现----------------------------------------------*/
void IPreOrder_goto(BiTree root){
    int top=0;
    BiTree p=root;
L1:if(p){
        Visit(p->data);/*访问根节点*/
        if(p->rchild!=NULL){
            top=top+2;
            if(top>m) return;/*栈满溢出*/
            s[top-1]=p->rchild;
            s[top]=L1;
        }
        p=p->lchild;
        goto L1;
    }
    if(top!=0){
        addr=s[top];
        p=s[top-1];
        goto add;
    }
}

void IPreOrder_loop(BiTree root){
    int top=0;
    BiTree p=root;
    do
    {
        while (p!=NULL)
        {
            Visit(p->data);/*访问根节点*/
            if(p->rchild!=NULL){
                top=top+1;
                if(top>m) return;/*栈满溢出*/
                s[top]=p->rchild;
            }
            p=p->lchild;
        }
        if(top!=0){
            p=s[top];
            top=top-1;
        }
    } while(p!=NULL||top!=0);
}
/*--------------------------------后序遍历的非递归实现----------------------------------------------*/
void IPostOrder_goto(BiTree root){
    int top=0;
    BiTree p=root;
    L1:if(p!=NULL){
        top=top+2;
        if(top>m) return;/*栈满溢出*/
        s[top-1]=p->lchild;
        S[TOP]=L3；
        goto L1;

        L2:top=top+1;
        if(top>m) return;/*栈满溢出*/
        s[top-1]=p->rchild;
        goto L1;

        L3:Visit(p->data);
    }
    L4:if(top!=0){
        p=s[top-1];
        addr=s[top];
        top=top-2;
        
        goto L2;
    }
}

/*-------------------观察递归的伪代码------------------------------*/
void PreOrder(BiTree root)
{ 1.  Visit(root);
  2.  if(root->lchild) PreOrder(root->lchild);
  3.  if(root->rchild) PreOrder(root->rchild);
4.}

void InOrder(BiTree root)
{ 1.  if(root->lchild) InOrder(root->lchild);
  2.  Visit(root);
  3.  if(root->rchild) InOrder(root->rchild);
4.}

void PostOrder(BiTree root)
{ 1.  if(root->lchild) InOrder(root->lchild);
  2.  if(root->rchild) InOrder(root->rchild);
  3.  Visit(root);
4.}
/*根据上述代码画调用堆栈图,即可模拟出每一种递归调用的特点*/

/*-----------------goto语句实现非递归调用--------------------------*/
#define m 栈的最大容量
void PreOrder_goto(BiTree root){
    int top=0;
    BiTree p=root;
    Stack s;
    
L1: if(p!=NULL){
        Visit(p->data);
        top=top+2;
        if(top>m) return;
        s[top-1]=p;
        s[top]=L2;//访问右子树的地址
        p=p->lchild;
        goto L1;

    L2: top=top+2;
        if(top>m) return;
        s[top-1]=p;
        s[top]=L3;//结束的地址
        p=p->rchild;
        goto L1;
    }

    L3:if(top>0){
        addr=s[top];
        p=s[top-1];
        top=top-2;
        goto addr;
    }
}

void InOrder_goto(BiTree root){
    int top=0;
    BiTree p=root;
    Stack s;

L1:if(p!=NULL){
        top=top+2;
        if(top>m) return;
        s[top-1]=p;
        s[top]=L2;
        p=p->lchild;
        goto L1;


        L2:Visit(p->data);
        top=top+2;
        if(top>m) return;
        s[top-1]=p;
        s[top]=L3;
        p=p->rchild;
        goto L1;

    }

    L3:if(top>0){
        p=s[top-1];
        addr=s[top];
        top=top-2;
        goto addr;
    }
}

void PostOrder_goto(BiTree root){
    int top=0;
    BiTree p=root;
    Stack s;

 L1:if(p!=NULL){
        top=top+2;
        if(top>m) return;
        s[top-1]=p;
        s[top]=L2;//访问右结点的地址
        p=p->lchild;
        goto L1;


     L2:top=top+2;
        if(top>m) return;
        s[top-1]=p;
        s[top]=L3;//输出的地址
        p=p->rchild; 
        goto L1;
     L3:Visit(p->data);
    }

    if(top>0){
        addr=s[top];
        p=s[top-1];
        top=top-2;
        goto addr;
    }
}