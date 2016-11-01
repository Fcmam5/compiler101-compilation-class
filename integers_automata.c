#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
* Checks if string in entry is a valid signed/unsigned integer
*/

int integerAtmt(char *strInt){
    int len;
    int i;

    len = strlen(strInt);
    i = 0;

    // Does it starts with
    if (len>1) {
        if((strInt[0] == '+')||(strInt[0] == '-')){
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

int main() {
    /* Test me  */
    
    return 0;
}
