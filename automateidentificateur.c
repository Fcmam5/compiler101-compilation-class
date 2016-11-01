#include<stdlib.h>
#include<stdio.h>

#include<string.h>

void lecturechaine(char *s , int *i, char mot[]){
while(0){
    *s= getchar();
    mot[*i+1]=*s;
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
     return 1;
     else
     return 0;

}



int main(void)
{
  int i;

  char s;
  char mot[20];


     s=getchar();
     mot[0]=s;
     i=0;

     /*if(testpremiercaract(s)==1){
        lecturechaine(&s);
     }*/

  return 0;
}






