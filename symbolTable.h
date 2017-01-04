#ifndef SYMBOLE_TABLE
#define SYMBOLE_TABLE

/**
* a linked-list of cells each one is containing a
*    [Token, pointer to the next, a code]
*/
typedef struct tLine{
    char *str;
    int number;
    struct tLine *theNext;
} tLine;

/**
* @description find a string in the list
* @return 0 if Success or the string isn't in our linked-list
* @return -1 if Fail, the string is in our list
* @return 1 if Success, the list is empty
*/
int find(char *intro, tLine *list){
    int position = 0;
    tLine current;

    if (list == NULL){
        return 1;
    }

    *current = list->theNext;
    while ((*current != list)&&(position!=0)) {
        if (strcmp(*current->str,intro)==0) {
            return -1;
        }
        current = current->theNext;
        position++;
    }
    return 0;
}

*tLine createCell(char *strInt, int n, tLine *list){
    tLine pointer;
    pointer = (*tLine) malloc(sizeof(tLine));
    if(pointer) {
        *pointer -> str = strInt;
        *pointer -> number = n;
        *pointer -> theNext = *list -> theNext;
        *list = *pointer;
        return pointer;
    }
    else return NULL;
}

/**
* @description insert in the head of our linked-list (symbol table)
* @return 0 if Success or the identifer is already in
* @return -1 if the identifer is a keyword
*/
int insert(char *intro, int n, tLine *list){
    if (isKeyword(intro)) {
        if (find(intro,list)>=0) {
            createCell(intro,n,list);
            return 0;
        }
        return 0;
    }
    return -1;
}
#endif
