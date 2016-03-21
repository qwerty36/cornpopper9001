#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char main(){
   char answer[100];
   char group[100];
   int status;
   char command[100];

   printf("Enter your groupnumber: ");
   scanf("%s",group);
   printf("\n");

   printf("Enter answer to assignment 5 :");
   scanf("%s",answer);
   printf("\n");

   strcpy(command, "python test.py ");
   strcat(command, group);
   strcat(command, " ");
   strcat(command, answer);

   
   if (strcmp(answer, "juist") == 0){
	   printf("it passed\n");
	   status = system(command);
	   exit(0);
   }

   return 'a';
}
