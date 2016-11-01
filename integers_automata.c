#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
* Examples:
* +94459, 9875, -597978, +,-, 89-1, 5598-
*/

bool integerAtmt(char* strInt){
    int len;
    int i;

    len = strlen(strInt);
    i = 0;

    // Does it starts with
    if((strInt[0] == "+")||
        (strInt[0] == "-")||
        ((strInt[0]>= '0')&&(strInt[0]<='9'))){
        while(i <= len){
            if(!(strInt[i]>= '0')&&(strInt[i]<='9')){
                return false;
            } //second if 'check is [i] is not a digit'
            i++;
        } //End while
        if(i>=len)
            return true;
    } //End first if condition
    return false;
}

/* For debug
* Bugs: a single'+' is accepted 
*/
int main() {
    /* code */
    printf("Result for +99213545\n", integerAtmt('+99213545'));
    printf("Result for -0123\n", integerAtmt('-123'));
    printf("Result for +\n", integerAtmt('+'));
    printf("Result for 0\n", integerAtmt('0'));
    printf("Result for 1561+164\n", integerAtmt('1561+164'));

    return 0;
}
