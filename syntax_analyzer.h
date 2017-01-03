#ifndef SYNTAX_ANALYZER
#define SYNTAX_ANALYZER
/**
*            Implementing this given grammar
*
*   S → programme Ident ; D debut Inst fin
*   D → C V
*   C → const Dec / λ
*   Dec → Ident = Num ; Dec / Ident = Num
*   V → var Dev / λ
*   Dev → Ident M: Type; Dev / Ident M: Type
*   Type → ent / Bool
*   Inst → Instr / λ
*   Instr → Ident := Exp I / si Ident alors Instr sinon Instr fsi / si Ident alors Instr fsi
*   I → ; Instr / λ
*   Exp → Exp + Exp/ Ident / Cste
*   Ident → Lettre suitL
*   SuitL → Lettre SuitL / Chiffre SuitL / λ
*   Lettre → a / b /.../ z
*   Chiffre→ 0 / 1 / 2 / 3... / 9
*   Cste → Chiffre SuitC
*   SuitC → SuitC Chiffre / λ
*   M → , Ident M / λ
**   Num → Cste / Vrai / Faux
*/
int isNum(char *str){
    if ((integerAtmt(str)==0)||(strcmp(str,"Vrai")==0)||(strcmp(str,"Faux")==0)) {
        return 0;
    }
    return -1;
}

//TODO: Work on this in order to call M recursivly
int isM(char *str){
    if ((str[0]==',')) {
        strsep(str,',');
    }
}

int rule_V(){}

int rule_C(){}

int rule_D(){}

int parse(){
    /*TODO: check if it starts with "programme" and ends with "fin" and have
        the correspendent integers in their places (recursive calls)
            "programme" (identiferAtmt==0) ';' (rule_D() == 0) "debut" (intR==0) 'fin'
    */
}
#endif
