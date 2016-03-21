#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char main(){
   char answer[100];
   int status;
   printf("Enter answer to assignment 3 :");
   scanf("%s",answer);
   printf("\n");
   
   if (strcmp(answer, "juist") == 0){
	   printf("it passed\n");
	   status = system("python test.py true false");
	   exit(0);
   }

   return 'a';
}
