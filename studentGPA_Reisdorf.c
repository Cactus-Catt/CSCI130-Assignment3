/* Assignment 3 - Reisdorf - CSCI 130, online, Spring 2023 */

#include <stdio.h>

int main(void) {

  int credits1;
// Credits //
  printf("Enter your number of college credits:\n");
  scanf("%d", &credits1);

  if ( credits1 <= 23 ) {
    printf("You are a Freshman!\n");
  }

  if ( credits1 >= 24 && credits1 <= 59 ) {
    printf("You are a Sophmore!\n");
  }

  if ( credits1 >=60 && credits1 <= 89 ) {
    printf("You are a Junior!\n");
  }

  if ( credits1 >= 90 ) {
    printf("You are a Senior!\n");
  }
printf("\n");
  // GPA //

  float studentGpa;  
 
  printf ("Enter your GPA:\n");
  scanf("%f",  &studentGpa);

if ( studentGpa == 4.00 ) {
  printf("Excellent!\n");
  }

else if ( studentGpa >= 3.75 ) {
  printf("Very Good!\n");
}
 
else if ( studentGpa >= 3.20 ) {
  printf("Good!\n");
}
else if ( studentGpa >= 3.00 ) {
  printf("Above Average.\n");
}
 else if ( studentGpa >= 2.50 ) {
   printf ("Average.\n");
 }

 else if ( studentGpa >= 2.00 ) {
   printf("Satisfactory.\n");
 } 

  else if ( studentGpa <= 1.99) {
    printf("Poor.\n");
  }

  // Eligible for graduation? //
printf("BUT... are you eligible to graduate?\n");
  

if (studentGpa >= 2.20  && credits1 >= 120){
  printf("You are eligible for Graduation!\n" );
  }
  if (studentGpa <= 2.19 || credits1 <= 119) {
   printf ("You are not eligible for Graduation :-( \n" );
 }
  
  
  printf("\n");
 
  return 0;
}