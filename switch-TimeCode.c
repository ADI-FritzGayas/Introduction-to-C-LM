#include <stdio.h>
 
int main (){

   // local variable definition
   char ch = 'a';
   printf("Time code: %c\n", ch);
   
   switch (ch){
      case 'a':
         printf("Corresponding Greetings: Good Afternoon\n");
         break;
      
      case 'e':
         printf("Corresponding Greetings: Good Evening\n");
         break;
      
      case 'm':
         printf("Corresponding Greetings: Good Morning\n");
   }
   return 0;
}