#include <stdio.h>

int main() {

   float l, b; 
   printf("enter length of rectangle = ");
   scanf("%f", &l);
   printf("enter breadth of rectangle = ");
   scanf("%f", &b);

   float area  = (l * b), perimeter = (2 * (l + b)); 
   printf("area of rectangle = %.2f\n", area );
   printf("perimeter of rectangle = %.2f\n", perimeter);

   if (area  > perimeter) {
      printf("area of rectangle is greater than its perimeter by %.2f\n", (area - perimeter));
   } else if (area == perimeter) {
      printf("area of rectangle is equal to its perimeter\n");
   } else {
      printf("perimeter of rectangle is greater than its area by %.2f\n", (perimeter - area ));
   }

   return 0;
}