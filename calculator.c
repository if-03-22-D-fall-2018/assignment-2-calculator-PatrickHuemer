/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			Pocket Calculator
 * Author:		Patrick Huemer
 * ----------------------------------------------------------
 * Description:
 * <some brief description, what the program does: example:
 * Calculates a pyramid of numbers, i.e., it multiplies a big
 * integer by the number 2, its result by 3, etc. and then
 * returns to the original value by subsequently dividing,
 * again starting by 2, 3, etc.>
 * ----------------------------------------------------------
 */

 #include <stdio.h>

 double add(double operand1, double operand2){
   double sum = operand1 + operand2;
   return sum;
 }
 double substract(double operand1, double operand2){
   double sum = operand1 - operand2;
   return sum;
 }
 double multiply(double operand1, double operand2){
   double sum = operand1 * operand2;
   return sum;
 }
 double divide(double operand1, double operand2){
   double sum = operand1/ operand2;
   return sum;
 }

int main(int argc, char const *argv[]) {
   int choice;
   double operand1;
   double operand2;
   double summe;

   while (choice != -1) {
     printf("Choose one of the following operations\n");
     printf("Add (1)\n");
     printf("Subtract (2)\n");
     printf("Multiply (3)\n");
     printf("Divide (4)\n");
     printf("Stop  program (-1)\n");
     printf("Enter your choice\n");
     scanf("%d",&choice );
     if (choice != -1) {
       printf("Please enter first operand\n");
       scanf("%lf",&operand1 );
       printf("Please enter second operand\n");
       scanf("%lf",&operand2 );

     }
     if (choice == 1) {
       summe = add(operand1, operand2);
     }
     else if (choice == 2) {
       summe = substract(operand1, operand2);
     }
     else if (choice == 3) {
       summe = multiply(operand1, operand2);
     }
     else if (choice == 4) {
       summe = divide(operand1, operand2);
     }
     if (choice != -1) {
       printf("%lf\n",summe );
     }



   }



   return 0;
 }
