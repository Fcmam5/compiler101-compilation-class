#ifndef ID_AUTOMATA
#define ID_AUTOMATA
/**
*@param strInt is the given string to analyze to check if it's a valid identifer
*@retval -1 didn't contain a letter nor a number
*@retval -2 didn't start with a letter
*@retval 0 Success, the string in entry is a valid identifer
**/
int identifersAtmt(char *strInt){
    int len;
    int i;

    len = strlen(strInt);
    i = 0;

    // Does it starts with a char
    if(((strInt[0] >= 'a')&&(strInt[0] <= 'z'))||((strInt[0] >= 'A')&&
        (strInt[0] <= 'Z'))){
        i++;
        while(i < len){
            if(!(((strInt[i] >= 'a')&&(strInt[i] <= 'z'))||((strInt[i] >= 'A')&&
                (strInt[i] <= 'Z'))||((strInt[i]>='0')&&(strInt[i]<='9')))){
                return -1;
            } //is it a non char or a non digit
            i++;
        } //End while
        return 0;
    } //End first if condition
    return -2; //didn't start with a char
}
#endif
