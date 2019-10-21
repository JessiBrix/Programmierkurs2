#include <math.h>
#define MAX 10

enum boolean { FALSE, TRUE};
enum flag {EMPTY, BUSY, DELETED};

typedef struct entry_s {
    int value;
    enum flag state;
} entry_t;

entry_t dictionary[MAX-1];

int insert(int a){
    int hash = calcHash(a);
    int pos = searchFreePos(hash);
    if(pos >= 0 && dictionary[pos].state != BUSY){
        dictionary[pos].value = a;
        dictionary[pos].state = BUSY;
        return 1;
    }
    else
        return 0;
}

int searchFreePos(int startPos){
    int position;
    enum boolean gefunden = FALSE;
    for (position = startPos; position < MAX; position++){
        if (dictionary[position].state != BUSY){
            gefunden = TRUE;
            break;
        }
    }
    if (position == MAX && gefunden == FALSE){
            for (position = 0; position > startPos; position++){
                if (dictionary[position].state != BUSY){
                    gefunden = TRUE;
                    break;
                }
            }
    }
    if (gefunden == TRUE)
        return position;
    else return -1;
}

int delete(int a){
    int position = search(a);
    if (position > 0){
        dictionary[position].value = '\0';
        dictionary[position].state = DELETED;
        return 1;
    }
    else return 0;
}

int member(int a){
    if (search(a) > -1)
        return 1;
    else
        return 0;
}

enum boolean isEmpty(int a){
    if(dictionary[a].state != BUSY)
        return TRUE;
    else
        return FALSE;
}

int calcHash(int a){
    return a % MAX;
}

int search(int member){
    int result = -2;
    int hash = calcHash(member);
    enum boolean startedFromZero = FALSE;
    while (result == -2) {
        int index = hash;
        if (isEmpty(index) == FALSE) {
            if( dictionary[index].value == member)
                result = index;
            else {
                if ( index == hash && startedFromZero == FALSE)
                    index ++;
                else if (index > hash && index < MAX)
                    index++;
                else if (index == MAX){
                    index = 0;
                    startedFromZero = TRUE;
                }
                else if (index < hash)
                    index++;
                else if (index == hash && startedFromZero == TRUE)
                    result = -1;
            }
        }
    }
    return result;
}
