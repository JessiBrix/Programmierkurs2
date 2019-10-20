#include <stdlib.h>

int queue[2];
int oldest = 0;
int write = 0;

void enqueue(int i){
    queue[write] = i;
    if(queue[write+1] != '\0' && queue[0] != NULL)
        write++;
    else write = 0;
}

int dequeue(){
    if (queue[oldest] == NULL)
        return -1;
    else{
        int temp = queue[oldest];
        queue[oldest] = NULL;
        if(queue[oldest+1]!= '\0')
            oldest++;
        else oldest = 0;
        return temp;
    }
}
