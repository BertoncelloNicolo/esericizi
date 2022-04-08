#include<stdio.h>  
#include <string.h>    
int main(){    
  char stringa[20];    
  printf("Enter string: ");    
  gets(stringa);
  printf("la stringa è: %s",stringa);    
  printf("\n la stringa inversa è: %s",strrev(stringa));    
 return 0;    
}        