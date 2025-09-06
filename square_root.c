// returns the square root of a number and tells whether it's a perfect square or not
#include <stdio.h>
#include <math.h>

void square(double sNum);

int main(){
    double mNum;
    printf("enter number: ");
    scanf("%lf", &mNum);
    square(mNum);

    return 0;
}

void square(double sNum){
    if(sNum < 0){
        printf("%lf has no square root", sNum);
        return;
    }
    else if(sNum == 0 || sNum == 1){
        printf("%lf has a square root of %lf", sNum, sNum);
        return;
    }
    else{
        double guess = sNum / 2;
        double epsilon = 1e-13;
        while(fabs(guess * guess - sNum) > epsilon){
            printf("guess = %lf\n", guess);
            guess = (guess + sNum / guess) / 2;
        }
        if((guess - (int)guess) < epsilon){
            printf("%d is a perfect square and has a square root of %d", (int)sNum, (int)guess);
        }
        else{
            printf("%lf has an irrational square root of %lf", sNum, guess);
        }
    }
}