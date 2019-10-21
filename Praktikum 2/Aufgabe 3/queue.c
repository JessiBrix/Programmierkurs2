
//void enqueue(int i){
//    queue[write] = i;
//    if(queue[write+1] != '\0' && queue[0] != NULL)
//        write++;
//    else if (queue[0] != NULL)
//        write = 0;
//}
//
//int dequeue(){
//    if (queue[oldest] == NULL)
//        return -1;
//    else{
//        int temp = queue[oldest];
//        queue[oldest] = NULL;
//        if(queue[oldest+1]!= '\0')
//            oldest++;
//        else oldest = 0;
//        return temp;
//    }
//}
#include <stdlib.h>
#include "queue.h"

#define MAX 1

int queue[MAX];
int  head = 0;
int  tail = 0;

void enqueue(int zahl){
    
    if(tail < MAX){
        queue[tail] = zahl;
            tail++;
    }
    else if (tail == MAX && queue[0] == '\0'){
        queue[0] = zahl;
        tail = 1;
    }
    else if (tail == MAX)
    {
        queue[tail] = zahl;
    }
}


int dequeue(){
    if (queue[head] != '\0')
    {
        int temp = queue[head];
        queue[head] = '\0';
        if(queue[head+1] != '\0')
            head++;
        else
            head = 0;
        return temp;
    }
    else return -1;
}
