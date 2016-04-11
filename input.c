#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char main(){
   char answer1[100];
   char answer2[100];
   char answer3[100];
   char answer4[100];
   char answer5[100];
   char group[100];
   int correct;
   int false;
   int status;
   char command[100];
   char prompt[100];

   //prompt voor groepsnummer
   printf("Voer uw groepsnummer in: ");
   scanf("%s",group);
   printf("\n");
   
   printf("U koos voor groep: ")
   printf(group)
   printf(", Is dit correct? [ja/nee]: ")
   scanf("%s",prompt)
   printf("\n")

   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
   }
   else if (strcmp(prompt, "nee"){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n")
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n")
	   exit(0);
   }
   


   //prompt voor antwoord 1
   printf("Voer antwoord in van opdracht 1 :");
   scanf("%s",answer1);
   printf("\n");
   
   printf("U koos voor antwoord: ")
   printf(answer1)
   printf(", Is dit correct? [ja/nee]: ")
   scanf("%s",prompt)
   printf("\n")

   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
   }
   else if (strcmp(prompt, "nee"){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n")
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n")
	   exit(0);
   }
   
   
   
   
   //prompt voor antwoord 2
   printf("Voer antwoord in van opdracht 2 :");
   scanf("%s",answer2);
   printf("\n");
   
   printf("U koos voor antwoord: ")
   printf(answer2)
   printf(", Is dit correct? [ja/nee]: ")
   scanf("%s",prompt)
   printf("\n")

   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
   }
   else if (strcmp(prompt, "nee"){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n")
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n")
	   exit(0);
   }
   
   
   
   
   //prompt voor antwoord 3
   printf("Voer antwoord in van opdracht 3 :");
   scanf("%s",answer3);
   printf("\n");
   
   printf("U koos voor antwoord: ")
   printf(answer3)
   printf(", Is dit correct? [ja/nee]: ")
   scanf("%s",prompt)
   printf("\n")

   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
   }
   else if (strcmp(prompt, "nee"){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n")
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n")
	   exit(0);
   }

   
   
   
   
   //prompt voor antwoord 4
   printf("Voer antwoord in van opdracht 1 :");
   scanf("%s",answer4);
   printf("\n");
   
   printf("U koos voor antwoord: ")
   printf(answer4)
   printf(", Is dit correct? [ja/nee]: ")
   scanf("%s",prompt)
   printf("\n")

   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
   }
   else if (strcmp(prompt, "nee"){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n")
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n")
	   exit(0);
   }

   
   
   
   
   //prompt voor antwoord 5
   printf("Voer antwoord in van opdracht 1 :");
   scanf("%s",answer5);
   printf("\n");
   
   printf("U koos voor antwoord: ")
   printf(answer5)
   printf(", Is dit correct? [ja/nee]: ")
   scanf("%s",prompt)
   printf("\n")

   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
   }
   else if (strcmp(prompt, "nee"){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n")
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n")
	   exit(0);
   }

   
   
   

   //check voor juiste antwoorden
   correct = 0;
   if (strcmp(answer1, "antwoord1") == 0){
	   correct++;
   }
   else {
	   false++;
   }
   
   if (strcmp(answer2, "antwoord2") == 0){
	   correct++;
   }
   else {
	   false++;
   }
   
   if (strcmp(answer3, "antwoord3") == 0){
	   correct++;
   }
   else {
	   false++;
   }
   
   
   if (strcmp(answer4, "antwoord4") == 0){
	   correct++;
   }
   else {
	   false++;
   }
   
   
   if (strcmp(answer5, "antwoord5") == 0){
	   correct++;
   }
   else {
	   false++;
   }
   
   
   
   //pipeline naar pythonscript
   strcpy(command, "python pusshy.py ");
   strcat(command, group);
   strcat(command, " ");
   strcat(command, answer1);
   strcat(command, " ");
   strcat(command, answer2);
   strcat(command, " ");
   strcat(command, answer3);
   strcat(command, " ");
   strcat(command, answer4);
   strcat(command, " ");
   strcat(command, answer5);
   strcat(command, " ");
   strcat(command, correct);
   
   
   

	status = system(command);
	exit(0);
   }

   return 'a';
}
