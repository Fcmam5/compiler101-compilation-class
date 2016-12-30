#ifndef MINIFIER
#define MINIFIER

/**
* TODO: Implement this file if it's requrired by the teachers
*
* @description As a step in lexical analyze, the compiler should minify the entry program
*              by removing necessary spaces and line breaks, and removing comments
*/

// Remove spaces between tokens
void noSpacePlease(char *str) {}

void noCommentPlease(char *str) {
    int strLength = strlen(str);
    
    if ((str[0]=='/')&&(str[1]=='*')&&(str[strLength-1]=='/')&&
        (str[strLength-2]=='*')) {
            *str = "";
    }
}

#endif
