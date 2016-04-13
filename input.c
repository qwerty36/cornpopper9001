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
   printf("\nVoer uw groepsnummer in: ");
   scanf("%s",group);
   printf("\n");
   
   printf("U koos voor groep: ");
   printf(group);
   printf(", Is dit correct? [ja/nee]: ");
   scanf("%s",prompt);
   printf("\n");

   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
   }
   else if (strcmp(prompt, "nee")){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n");
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n");
	   exit(0);
   }
   


   //prompt voor antwoord 1
   printf("\nVoer antwoord in van opdracht 1 (Elektroroom) :");
   scanf("%s",answer1);
   printf("\n");
   
   printf("U koos voor antwoord: ");
   printf(answer1);
   printf(", Is dit correct? [ja/nee]: ");
   scanf("%s",prompt);
   printf("\n");

   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
   }
   else if (strcmp(prompt, "nee")){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n");
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n");
	   exit(0);
   }
   
   
   
   
   //prompt voor antwoord 2
   printf("\nVoer antwoord in van opdracht 2 (Het rad van HLO) :");
   scanf("%s",answer2);
   printf("\n");
   
   printf("U koos voor antwoord: ");
   printf(answer2);
   printf(", Is dit correct? [ja/nee]: ");
   scanf("%s",prompt);
   printf("\n");

   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
   }
   else if (strcmp(prompt, "nee")){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n");
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n");
	   exit(0);
   }
   
   
   
   
   //prompt voor antwoord 3
   printf("\nVoer antwoord in van opdracht 3 (Nucleophile):");
   scanf("%s",answer3);
   printf("\n");
   
   printf("U koos voor antwoord: ");
   printf(answer3);
   printf(", Is dit correct? [ja/nee]: ");
   scanf("%s",prompt);
   printf("\n");

   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
   }
   else if (strcmp(prompt, "nee")){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n");
	   exit(0);
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n");
	   exit(0);
   }

   
   
   
   
   //prompt voor antwoord 4
   printf("\nVoer antwoord in van opdracht 4 (versla de computer):");
   scanf("%s",answer4);
   printf("\n");
   
   printf("U koos voor antwoord: ");
   printf(answer4);
   printf(", Is dit correct? [ja/nee]: ");
   scanf("%s",prompt);
   printf("\n");

   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
   }
   else if (strcmp(prompt, "nee")){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n");
	   exit(0);
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n");
	   exit(0);
   }

   
   
   
   
   //prompt voor antwoord 5
   printf("\nVoer antwoord in van opdracht 5 (Debuggen):");
   scanf("%s",answer5);
   printf("\n");
   
   printf("U koos voor antwoord: ");
   printf(answer5);
   printf(", Is dit correct? [ja/nee]: ");
   scanf("%s",prompt);
   printf("\n");

   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
   }
   else if (strcmp(prompt, "nee")){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n");
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n");
	   exit(0);
   }

   
   
   

   //check voor juiste antwoorden
   correct = 0;
   if (strcmp(answer1, "lightning") == 0){
	   correct++;
   }
   else {
	   false++;
   }
   
   if (strcmp(answer2, "galgje") == 0){
	   correct++;
   }
   else {
	   false++;
   }
   
   if (strcmp(answer3, "cytosine") == 0){
	   correct++;
   }
   else {
	   false++;
   }
   
   
   if (strcmp(answer4, "analyse") == 0){
	   correct++;
   }
   else {
	   false++;
   }
   
   
   if (strcmp(answer5, "aminozuren") == 0){
	   correct++;
   }
   else {
	   false++;
   }
   
   printf("\n\n\n\nVan de 5 opdrachten heeft u er: ");
   printf("%d", correct);
   printf(" goed, Wilt u het opnieuw proberen? [ja/nee]: ");
   scanf("%s",prompt);
   
   if (strcmp(prompt, "ja") == 0){
	   printf("Top! \n\n");
	   exit(0);
   }
   else if (strcmp(prompt, "nee")){
	   printf("Het gehele script zal opnieuw starten om een nieuwe kans te bieden. \n\n");
   }
   else {
	   printf("Antwoord niet herkent, script start opnieuw. \n\n");
	   exit(0);
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
   char buffer[2];
   sprintf(buffer, "%d", correct);
   strcat(command, buffer);
   
   
   

	status = system(command);
	exit(0);

   return 'a';
}
