#include<stdlib.h>
#include<stdio.h>

#include<string.h>

void lecturechaine(char *s){

int *boolean;
testcaractairesuivant(s,&boolean);
while(boolean){
    *s=getchar();
    testcaractairesuivant(s,&boolean);

    };



}

int testpremiercaract(char s){
     if(s>='a'&& s<='z' ||s>='A'&& s<='Z' )
     return 0;
     else
      return -1;
      }


void testcaractairesuivant(char s, int *b){
     if(s>='a'&& s<='z' ||s>='A'&& s<='Z'||(s>='0' && s<='9')||s=='_')
     *b= 0;
     else
     *b=-1;

}



int main(void)
{

  char s;



     s=getchar();
     if(testpremiercaract(s)==0){
        lecturechaine(&s);
     }
     else
     printf("Premier caractère érroné");

  return 0;
}






