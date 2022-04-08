#include<stdio.h>  
#include <string.h>    
int main(){    
  char stringa[15];    
  printf("inserisci la stringa: ");    
  gets(stringa);    
  printf("String is: %s",stringa);    
  printf("\n stringa minore: %s",strlwr(stringa));    
 return 0;    
}    