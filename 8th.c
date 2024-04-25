#include <stdio.h>
struct complex
{
int real;
int imaginary;
};
int main()
{
int choice;
struct complex c1;
struct complex c2;
printf("What do you want to do: \n1. Reading a complex Number\n2.Writing a complex Number\n3.Addition of 2 complex Number\n4.Multiplication of two complex numbers\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the Real part of the complex Number: ");
scanf("%d",&c1.real);
printf("Enter the Imaginary part of the complex Number: ");
scanf("%d",&c1.imaginary);
break;
case 2:
printf("Enter the Real part of the complex Number: ");
scanf("%d",&c1.real);
printf("Enter the Imaginary part of the complex Number: ");
scanf("%d",&c1.imaginary);
printf("The entered imaginary number is: %d + %di\n",c1.real,c1.imaginary);
break;
case 3:
printf("Enter the Real part of the complex Number: ");
scanf("%d",&c1.real);
printf("Enter the Imaginary part of the complex Number: ");
scanf("%d",&c1.imaginary);
printf("The entered imaginary number is: %d + %di\n",c1.real,c1.imaginary);

printf("Enter the Real part of the complex Number: ");
scanf("%d",&c2.real);
printf("Enter the Imaginary part of the complex Number: ");
scanf("%d",&c2.imaginary);
printf("The entered imaginary number is: %d + %di\n",c2.real,c2.imaginary);
printf("The addition of the 2 complex numbers is: %d + %di\n",c1.real +
c2.real,c1.imaginary+c2.imaginary);
break;
case 4:
printf("Enter the Real part of the complex Number: ");
scanf("%d",&c1.real);
printf("Enter the Imaginary part of the complex Number: ");
scanf("%d",&c1.imaginary);
printf("The entered imaginary number is: %d + %di\n",c1.real,c1.imaginary);

printf("Enter the Real part of the complex Number: ");
scanf("%d",&c2.real);
printf("Enter the Imaginary part of the complex Number: ");
scanf("%d",&c2.imaginary);
printf("The entered imaginary number is: %d + %di\n",c2.real,c2.imaginary);
printf("The addition of the 2 complex numbers is: %d + %di\n",(c1.real* c2.real)
-(c1.imaginary*c2.imaginary),(c1.real*c2.imaginary)+(c2.real * c1.imaginary));
break;
default:printf("choice out of bounds");break;
}
}