#include<stdio.h>  
#include <string.h>    
int main(){    
  char stringa[]="ciao sto studiando tpsit";    
  char *substringa;    
  substringa=strstr(stringa,"tpsit");    
  printf("\n Substringa è: %s",substringa);    
 return 0;    
}    