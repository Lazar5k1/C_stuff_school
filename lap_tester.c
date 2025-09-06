#include <stdio.h>
#include <math.h>                   // needed for floor
/*
int     |   4 bytes |   %d for print
double  |   8 bytes |   %lf for print
float   |   4 bytes |   %f for print
char    |   1 byte  |   %c for print
*/

int main(){
    int num = 123;
    printf("num = %d\n", num);
    double pi = 3.1415926535;
    printf("pi = %.2lf\n", pi);     // the .2 after % specifies number of decimals
    float boat = 13.876f;           // floats need an f at the end
    printf("boat = %.2f\n", boat);  // automatically rounds when cutting out other numbers
    double heart = 4.789e7;         // e7 or e"n" multiplies the number before by 10 to the n power e.g. 5e3 == 3000
    printf("heart = %lf\n", heart);
    boat = floor(boat * 100) / 100;
    printf("boat = %.2f", boat);    // in order not to round floor is the easiest way
    char knife = 'k';
    printf("knife = %c\n", knife);
    printf("knife = %d\n", knife);
    printf("size of int = %zu\n", sizeof(num));   // %zu is the format specifier for the data type size_t

    int arrows;
    printf("Enter number of arrows: ");
    scanf("%d", &arrows);
    printf("arrows = %d\n", arrows);

    char apple;
    printf("Enter letter then number of arrows: ");
    scanf("%c %d", &apple, &arrows);
    printf("apple = %c\narrows = %d\n", apple, arrows);
    printf("apple = %c1", apple);


    return 0;
}