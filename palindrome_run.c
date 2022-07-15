#include <stdio.h>

// lets define a struct

#define INPUT_LEN (9u)

int main() {
   
   char test_string[INPUT_LEN] = "Top spot";
   char result_string[INPUT_LEN];
   int non_space_character_inc = 0;

   // want to remove spaces

   for (int index = 0; index<INPUT_LEN; index++)
   {
      if (test_string[index] != ' ')
      {
         result_string[non_space_character_inc] = test_string[index]; 
         non_space_character_inc++;
      }

   }
   printf("Print result_string %s\n", result_string);

   // want to remove captial letters

   for (int index = 0; index<INPUT_LEN; index++)
   {
      if(result_string[index] >= 65 && result_string[index] <= 90)
      {
         result_string[index] = result_string[index] + 32; // offset ascii by 32 to shift upper to lower case
      }
   }

   printf("Print result_string %s\n", result_string);
   // now want to reverse array and compare

   for(int index = 0; index<INPUT_LEN; index++)
   {
      
   }


   return 0;
}
