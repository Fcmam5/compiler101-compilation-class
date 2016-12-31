#ifndef SYMBOLE_TABLE
#define SYMBOLE_TABLE

/**
* a linked-list of cells each one is containing a
*    [Token, pointer to the next, a code]
*/
typedef struct tLine{
    char *str;
    int number;
    tLine *theNext;
};

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

//TODO:check if the token exsits in the symbol table
int find(char *intro, tLine *list){
    int position = 0;
    tLine current;

    if (list == NULL){
        return -2;
    }

    *current = list->theNext;
    while ((current != list)&&(position!=0)) {
        current = current->theNext;
        position++;
    }
    if (current == list) {
        return position;
    }else{
        return 0;
    }
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
#endif
