#include <stdlib.h>
#include <stdio.h>
#include "myIncludes.h"
// Reading files procedure

/*
* Checks if string in entry is a valid signed/unsigned integer
* Checks if string in entry is a valid identifer
*/

int main() {
    //Files reading
    FILE *fichier;
    char chaine[128];
    fichier = fopen("./myEntry.c", "r");
    fscanf(fichier, "%s", chaine);
    printf("Je suis %s\n", chaine);
    fclose(fichier);

    //TODO: insert our text in this variable
    int compilationResult;
    char *program = 0;
    tLine symbolTable;

    // Compilation process
    noSpacePlease(program);
    // noCommentPlease(""); not needed, we don't have comments in our language
    // TODO: Extract tokens and fill symbolTable

    //Compiling
    compilationResult = parse(program);

    switch (compilationResult) {
        case 0: printf("Compilation was successful\n"); break;
        case 1: printf("An erro occured\n"); break;
    }
    return 0;
}
