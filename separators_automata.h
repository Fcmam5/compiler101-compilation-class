#ifndef SEPARATOR_AUTOMATA
#define SEPARATOR_AUTOMATA
/**
*@param [char] entryChar
*@retval -1 is not a separator
*@retval 0 Success, it's a separator
**/
int separatorAtmt(char entryChar){
    if ((entryChar==' ')||(entryChar==';')||(entryChar==':')||(entryChar==',')||
        (entryChar==':')) {
        return 0;
    }
    return -1;
}
#endif
