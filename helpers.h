#ifndef HELPERS
#define HELPERS

char* substr(char *str, int from, int to){
    int i;
    char *newStr = "";
    if ((to>=from)&&(to<=strlen(str))) {
        for (i = from; i < to; i++) {
            newStr += str[i];
        }
        return newStr;
    }else{
        return "_"+str[0]; //For debugging, means error
    }
}

/*
* cuts a string from [ind] to the end
* @param [String] str , the string we want to cuts
* @param [int] ind, the index we want to start cutting from
*/
char cutStrFrom(char *str,int ind){
    if (ind<=strlen(str)) {
        return substr(str,ind,strlen(str)-1);
    }
    return "_"+str[0]; //For debugging, means error
}

#endif
