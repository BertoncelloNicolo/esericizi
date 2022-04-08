#include<stdio.h>  
#include <string.h>    
int main(){    
  char stringa1[8]={'t', 'p', 's', 'i', 't', '\0'};    
   char stringa2[10]={'m', '\0'};    
   strcat(stringa1,stringa2);    
   printf("Value of first string is: %s",stringa1);    
 return 0;    
}    