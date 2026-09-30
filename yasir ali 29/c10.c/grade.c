#include<stdio.h>

 int main()

  {
   char grade;
  printf("enter the grade/(A/B/C/D):");

  scanf("%c",&grade);
  switch (grade)
  {
   case'A':
   printf("excellent");
   break;

   case'B':
   printf("very good");
   break;

   case'C':
   printf("good");
   break;

   case'D':
   printf("passed");
   break;
   return 0;
   }




  }










