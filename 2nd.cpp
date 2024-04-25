#include <stdio.h>
int main() {
 int sub1, sub2, sub3, sub4, sub5; //declaring integer variables
 int total_marks, max_marks;
 float aggregate; //declaring a float variable 
 //getting input from user for marks of 5 subjects
 printf("Enter marks of the first subject: ");
 scanf("%d", &sub1); 
 printf("Enter marks of the second subject: ");
 scanf("%d", &sub2);
 printf("Enter marks of the third subject: ");
 scanf("%d", &sub3);
 printf("Enter marks of the fourth subject: ");
 scanf("%d", &sub4);
 printf("Enter marks of the fifth subject: ");
 scanf("%d", &sub5);
 aggregate = (float)(sub1 + sub2 + sub3 + sub4 + sub5) / 500; //calculating aggregate and 
storing it in a variable
 //checking for where aggregate lies and grading it on that basis
 if (aggregate >= 0.75) {
 printf("Grade: Distinction\n");
 } else if (aggregate >= 0.6 && aggregate < 0.75) {
 printf("Grade: First Division\n");
 } else if (aggregate >= 0.5 && aggregate < 0.6) {
 printf("Grade: Second Division\n");
 } else if (aggregate >= 0.4 && aggregate < 0.5) {
 printf("Grade: Third Division\n");
 } else {
 printf("Grade: Fail\n");
 }
 return 0;

