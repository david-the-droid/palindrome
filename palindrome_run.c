#include <stdio.h>
#include <string.h>

// lets define a struct

#define INPUT_LEN (100u)            // Max input length
#define LOW_UPPER_CASE_ASCII 32     // Represents capital "A"
#define HIGH_UPPER_CASE_ASCII 90    // Represents capital "Z"
#define LOWER_CASE_OFFSET 32        // Represents capital to lower case shift

int main() {

   char input_string[INPUT_LEN] = " ";         // Input string
   char result_string[INPUT_LEN] = " ";        // De-capitalised, de-spaced and reversed to compare for palindrome
   char comparison_string[INPUT_LEN] = " ";    // comparison char array for lower case comparison copy
   int non_space_character_inc = 0;            // Counts N.O of non space characters to form index for result_string

   // want to get user input (not yet implemented)

   strncpy(input_string, "Top Spot", INPUT_LEN); // Examples "Top Spot", "1221"

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
      if(result_string[index] >= LOW_UPPER_CASE_ASCII && result_string[index] <= HIGH_UPPER_CASE_ASCII)
      {
         result_string[index] = result_string[index] + LOWER_CASE_OFFSET; // offset ascii by 32 to shift upper to lower case
      }
   }

   // need a strcopy here to form a comparison string once the result_string is reversed

   strncpy(comparison_string, result_string, INPUT_LEN);

   printf("Print result_string %s\n", result_string);
   
   // now want to reverse array and compare

   strrev(result_string);

   printf("Final result is: %s\n", result_string);

   // now need comparison

   if (strncmp(result_string, comparison_string, INPUT_LEN) == 0)
   {
      printf("True\n");
   }
   else
   {
      printf("False\n");
   }

   return 0;
}
