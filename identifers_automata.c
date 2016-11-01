#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
* Checks if string in entry is a valid signed/unsigned integer
examples:
printf("Result for +99213545: %d\n", integerAtmt("+99213545"));
*/

int identifersAtmt(char *strInt){
    int len;
    int i;

    len = strlen(strInt);
    i = 0;

    // Does it starts with a char or an underscore
    if(((strInt[0] >= 'a')&&(strInt[0] <= 'z'))||((strInt[0] >= 'A')&&
        (strInt[0] <= 'Z'))||(strInt[0] =='_')){
        i++;
        while(i < len){
            if(!(((strInt[i] >= 'a')&&(strInt[i] <= 'z'))||((strInt[i] >= 'A')&&
                (strInt[i] <= 'Z'))||(strInt[i] == '_')||((strInt[i]>='0')&&(strInt[i]<='9')))){
                return -1;
            } //is it a non char or a non digit and not an underscore
            i++;
        } //End while
        return 0;
    } //End first if condition
    return -2; //didn't start with a char nor an underscore
}

int main() {
    /* Test me  */
    printf("Result for x: %d\n", identifersAtmt("x"));
    printf("Result for x9: %d\n", identifersAtmt("x9"));
    printf("Result for _id: %d\n", identifersAtmt("_id"));
    printf("Result for 99: %d\n", identifersAtmt("99"));
    printf("Result for 9x: %d\n", identifersAtmt("9x"));
    printf("Result for beautifulCode: %d\n", identifersAtmt("beautifulCode"));
    printf("Result for nouVember1st: %d\n", identifersAtmt("nouVember1st"));
    printf("Result for endsWith_: %d\n", identifersAtmt("endsWith_"));
    printf("Result for miss_python: %d\n", identifersAtmt("miss_python"));
    printf("Result for $ecret: %d\n", identifersAtmt("$ecret"));
    printf("Result for po$t: %d\n", identifersAtmt("po$t"));
    printf("Result for d@m: %d\n", identifersAtmt("d@m"));



    return 0;
}
