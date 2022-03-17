/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float s1mark,s2mark;
  float average;

  printf("Enter subject1m: ");
  scanf("%f",&s1mark);

  printf("Enter subject2m: ");
  scanf("%f",&s2mark);

  average=(s1mark+s2mark)/2;
  printf("%.2f",average);

  
  return 0;
}

