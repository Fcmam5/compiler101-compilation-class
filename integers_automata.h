#ifndef integers_automata
#define integers_automata
/**
* Checks if string in entry is a valid signed/unsigned integerexamples:
* @param strInt is the given string to analyze to check if it's a valid identifer
* @retval -1 didn't contain a letter nor a number
* @retval -2 didn't start with a letter
* @retval 0 Success, the string in entry is a valid identifer
* Examples usage
* @code
*   printf("Result for +99213545: %d\n", integerAtmt("+99213545"));
*   printf("Result for -0123: %d\n", integerAtmt("-123"));
*   printf("Result for 5-: %d\n", integerAtmt("5-"));
*   printf("Result for +: %d\n", integerAtmt("+"));
*   printf("Result for 0: %d\n", integerAtmt("0"));
*   printf("Result for 1561+164: %d\n", integerAtmt("1561+164"));
*   printf("Result for -01a3: %d\n", integerAtmt("-1a3"));
*   printf("Result for -a: %d\n", integerAtmt("-a"));
*   printf("Result for a: %d\n", integerAtmt("a"));
* @endcode
**/
int integerAtmt(char *strInt){
    int len;
    int i;

    len = strlen(strInt);
    i = 0;

    // Does it starts with
    if (len>1) {
        if((strInt[0] == '+')||(strInt[0] == '-')||((strInt[0]>= '0')&&(strInt[0]<='9'))){
            i++;
            while(i < len){
                if(!((strInt[i]>= '0')&&(strInt[i]<='9'))){
                    return -1;
                } //second if 'check is [i] is not a digit'
                i++;
            } //End while
            if(i>=len)
                return 0;
        } //End first if condition
    }else{
        if ((strInt[0]>= '0')&&(strInt[0]<='9')) {
            return 0;
        }
    }
    return -1;
}
#endif
