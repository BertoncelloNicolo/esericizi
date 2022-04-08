#include<stdio.h>  
#include <string.h>    
int main(){    
  char stringa1[20],stringa2[20];    
  printf("metti la prima stringa");    
  gets(stringa1);    
  printf("metti la seconda stringa: ");    
  gets(stringa2);    
  if(strcmp(stringa1,stringa2)==0)    
      printf("le stringhe sono uguali");    
  else    
      printf("le stringhe sono diverse");    
 return 0;    
}    