#include <stdio.h>
#include <conio.h>
main()
{
int grade;
printf("enter the grade");
scanf("%d", &grade);
if (grade>=85 && grade<=100)
{
   printf("grade A");
}
else if(grade>=70 && grade<=84)
{
   printf("grade B");
}
else if(grade>=55 && grade<=69)
{
   printf("grade C");
}
else if(grade>=40 && grade<=54)
{
   printf("grade D");
}
else if(garde<40)
{
   printf("grade F");
}
else
{
return 0;
}
