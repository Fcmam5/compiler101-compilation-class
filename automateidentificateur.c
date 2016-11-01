#include<stdlib.h>
#include<stdio.h>

#include<string.h>

void lecturechaine(char *s){
while(testcaractairesuivant(&s)==0){
    *s= getchar();
    };



}

int testpremiercaract(char s){
     if(s>='a'&& s<='z' ||s>='A'&& s<='Z' )
     return 1;
     else
      return 0;
      }


int testcaractairesuivant(char *s){
     if(('a'<= *s && *s<='z')||('A'<= *s && *s<='Z')||('0'<=*s && s<='9')||*s=='_')
     return 0;
     else
     return 1;

}



int main(void)
{
  int i;

  char s;



     s=getchar();
     if(testpremiercaract(s)==1){
        lecturechaine(&s);
     }

  return 0;
}






