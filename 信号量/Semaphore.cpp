//信号量
#include"../队列/链式队列/LinkQueue.h"
typedef LinkQueue QueueType;
typedef struct Semaphore{
    int count;
    QueueType queue;//该信号量的阻塞队列,这个并不是操作系统的阻塞队列，只是用于表示在这个信号量上阻塞的队列，当count<0，|count|的绝对值，存的都是PCB的指针
}

typedef struct PCB
{
    int pId;
    int status;
    /** */
};

PCB* getCurrentThread(){
    return NULL; 
}


void SemWait(Semaphore &s){
    s.count--;
    if (s.count<0)
    {
        /*把当前进程插入队列*/
        /*阻塞当前进程*/
    }
    
}

void SemSignal(Semaphore &s){
     s.count++;
     if (s.count<=0)
     {
         /*把进程P从队列中移除*/
         /*把进程P插入就绪队列,即唤醒一个进程,阻塞态先到就绪态,即进入就绪队列*/
     }
     
}