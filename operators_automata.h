#ifndef OPERATOR_AUTOMATA
#define OPERATOR_AUTOMATA
/**
*@param [String] entryStr
*@retval -1 is not an operator
*@retval 0 Success, it's an operator
**/
int operatorAtmt(char *entryStr){
    if ((entryChar=='+')||(entryChar=='=')||(strcpy(entryChar,":=")==0)) {
        return 0;
    }
    return -1;
}
#endif
