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

//insert in the head of our linked-list (symbol table)
void insert(char *intro, tLine *list){}

//check if the token exsits in the symbol table
void find(char *intro, tLine *list){}

//TODO: Review linked-list methodes tmrw
void fillCell(char *strInt, int n, tLine *list){
    tLine pointer;
    //Filling the cell
    *pointer -> str = strInt;
    *pointer -> number = n;
    *pointer -> theNext = *list -> theNext;
    *list = *pointer;
    //linking the cell to the head of our list
}

*tLine createCell(char *strInt, int n, tLine *list){
    tLine pointer;
    pointer = (*tLine) malloc(sizeof(tLine));
    if(pointer) {
        fillCell(strInt,n,list);
        return pointer;
    }
    else return NULL;
}
#endif
