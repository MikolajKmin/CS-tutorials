#include <stdio.h>
#include <math.h>
#define PI (4.*atan(1))
#define PIa 4.*atan(1) // without brackets
#define PIb 4*atan(1)  // without a dot after 4
int main()
{
   
   float a=10,b= 3;
   printf("user enter value of a\n");
   scanf("%f", &a);
   printf("user enter value of b\n");
   scanf("%f", &b);
   printf("sumation a and b = %.2f \n", a + b);
   printf("multiplication a and b = %.2f \n", a*b);
   printf("division of a and b = %f\n", a/b);
   printf("cube root of a = %f\n", cbrtf(a));
   printf("cube of a is %f\n", pow(a, 3));
   printf("square of a is %f\n", pow(a, 2));

printf("%lf\n", 3/PI);
printf("%lf\n", 3 / PIa);
printf("%lf\n", 3 / PIb);
   return 0;
}

//void IncNumber();
//int Number = 4;
//void FunView();
//int main() {
// FunView();
// IncNumber();
//
// return 0;
//
//
//
//
//}
//void FunView()           // function header: contains return type and name
//{
// printf("Hello!\n");    // function starting bracket
//}
//void IncNumber()
//{
// Number = Number + 5; // or better: Number += 5;
// printf("Wynik:  % d\n",Number);
// Number = Number * 5;
// Number = Number * 5;
// Number = Number * 5;
// printf("Wynik:  % d\n", Number);
// Number = Number / 3;
// Number = Number / 3;
// Number = Number *5;
// printf("Wynik:  % d\n", Number);
//}



