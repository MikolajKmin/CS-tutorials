#include <stdio.h>
#include <math.h>
#define PI (4.*atan(1))
#define PIa 4.*atan(1) // without brackets
#define PIb 4*atan(1)  // without a dot after 4
//int main()
//{
//    
//    float a=10,b= 3;
//    printf("user enter value of a\n");
//    scanf_s("%f", &a);
//    printf("user enter value of b\n");
//    scanf_s("%f", &b);
//    printf("sumation a and b = %.2f \n", a + b);
//    printf("multiplication a and b = %.2f \n", a*b);
//    printf("division of a and b = %f\n", a/b);
//    printf("cube root of a = %f", cbrtf(a));
//    printf("cube of a is %f", pow(a, 3));
//    printf("square of a is %f", pow(a, 2));
//
//printf("%lf\n", 3/PI);
//printf("%lf\n", 3 / PIa);
//printf("%lf\n", 3 / PIb);
//    return 0;
//}

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












//void ReadData();
//double SolveQuadEq();
//void PrintSolution();
//
//// declaration of global variables
//double a, b, c, delta;
//double x1, x2;
//
//// main function
//int main()
//{
//    ReadData();
//    SolveQuadEq();
//    PrintSolution();
//
//    return 0;
//}
//
//// definitions of other functions
//void ReadData()
//{
//    printf("input a:\n");
//    scanf_s("%lf", &a);
//    printf("input b:\n");
//    scanf_s("%lf", &b);
//    printf("input b:\n");
//    scanf_s("%lf", &c);
//
//}
//
//double SolveQuadEq()
//{
//    delta = pow(b, 2) - 4 * a * c;
//    x1 = (-b - sqrt(delta)) / 2 * a;
//    x2 = (-b + sqrt(delta)) / 2 * a;
//    return x1, x2;
//}
//
//void PrintSolution()
//{
//    printf("Your equasion was: %.0lfx^2 + %.0lfx + %.0lf\n", a, b, c);
//    printf("Solved delta: %lf\n", delta);
//    printf("x1: %lf\nx2 %lf\n", x1,x2);
//}

//const char* const calculateTriangle(int a, int b, int c) {
// if ((a + b < c) || (a + c < b) || (b + c < c)) {
// return ("not triangle");
// }
// else
// {
// return ("triangle");
// }
//}
//const char* const text = "d";
//int main() {
// const char*const text = calculateTriangle(4, 6, 3);
// printf(text);
//}


//
//int main()
//{
//    long long i;
//    long long a;
//    long long b=1;
//    printf("Podaj liczbę:\n");
//    scanf_s("%lld", &a);
//
//    for (i = 1; i < a+1; i++)
//    {
//        b = b * i;
//    }
//
//    
//    printf("factorial of %lld = %lld\n", a, b);
//    return 0;
//
//}
