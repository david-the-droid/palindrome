#include <stdio.h>
#include <string.h>

// lets define a struct

#define INPUT_LEN (20u)

int main() {

   char input_string[INPUT_LEN] = " ";   // Input string
   char result_string[INPUT_LEN] = " ";  // De-capitalised, de-spaced and reversed to compare for palindrome
   char comparison_string[INPUT_LEN];    // comparison char array for lower case comparison copy
   int non_space_character_inc = 0;      // Counts N.O of non space characters to form index for result_string

   // want to get user input (not yet implemented)

   strcpy(input_string, "Top Spot");

   // want to remove spaces
   
   for (int index = 0; index<INPUT_LEN; index++)
   {
      if (input_string[index] != ' ')
      {
         result_string[non_space_character_inc] = input_string[index]; 
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

   // need a strcopy here to form a comparison string once the result_string is reversed

   strcpy(comparison_string, result_string);

   printf("Print result_string %s\n", result_string);
   // now want to reverse array and compare

   strrev(result_string);

   printf("Final result is: %s\n", result_string);

   // now need comparison

   if (strcmp(result_string, comparison_string) == 0)
   {
      printf("True\n");
   }
   else
   {
      printf("False\n");
   }

   return 0;
}
