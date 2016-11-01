#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "identifers_automata.h"
#include "integers_automata.h"
/*
* Checks if string in entry is a valid signed/unsigned integer
examples:
printf("Result for +99213545: %d\n", integerAtmt("+99213545"));
*/

int main() {
    /* Test me  */
    printf("Testing identifers:\n");
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

    printf("______________\n");
    printf("Testing integers\n");
    printf("Result for +99213545: %d\n", integerAtmt("+99213545"));
    printf("Result for -0123: %d\n", integerAtmt("-123"));
    printf("Result for 5-: %d\n", integerAtmt("5-"));
    printf("Result for +: %d\n", integerAtmt("+"));
    printf("Result for 0: %d\n", integerAtmt("0"));
    printf("Result for 1561+164: %d\n", integerAtmt("1561+164"));
    printf("Result for -01a3: %d\n", integerAtmt("-1a3"));
    printf("Result for -a: %d\n", integerAtmt("-a"));
    printf("Result for a: %d\n", integerAtmt("a"));

    return 0;
}
