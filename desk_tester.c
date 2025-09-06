#include <stdio.h>
#include <math.h>
#include <stdbool.h>                // needed for bool data type

int main(){
    char dagger = 'A';
    double stone = 65;
    printf("dagger = %d\n", dagger);
    printf("stone = %c\n", stone);

    int orange = 9;
    int grape = 2;
    double fruit = (double)orange / grape;
    printf("fruit = %.2lf\n", fruit);

    bool sad = true;
    bool happy = (12 < 3);          // false
    printf("sad = %d\n", sad);        // there is no format specifier for bool
    printf("opposite sad = %d\n", !sad);
    int stuff = 13;
    (stuff < 20) ? printf("stuff is less then 20\n") : printf("stuff is more than twenty\n");
    if(sad){
        happy = true;
        stuff = 0;
    }
    else{
        printf("no\n");
    }

    int knives = 0;
    printf("how many knives: ");
    scanf("%d", &knives);
    switch(knives){
        case 1:
            printf("there is one knife\n");
            break;
        case 0:
            printf("there are no knives\n");
            break;
        case 2:
            printf("there are 2 knives\n");
            break;
        case 3:
            printf("there are 3 knives\n");
            break;
        case 4:
            printf("there are 2 knives\n");
            break;
        case 8:
        case 6:
        case 9:
        case 5:                         // can be out of order
        case 7:
        case 10:
            printf("more than 5 knives but less than 11\n");
            break;
        
        default:
            printf("Idk ho many knives\n");
            break;
    }

    for (int i = 0; i < 10; i++){
        printf("i = %d\n", i);
    }
    printf("end loop\n");
    for (int i = 0; i < 20; i++){
        printf("i = %d\n", i);
    }
    printf("end loop\n");

    int i = 33;
    int dumb = 0;
    printf("i = %d\n", i);
    for (int i = 0; i < 10; i++){
        dumb++;
        for (int i = 0; i < 10; i++){
        printf("i = %d\n", i);
        }
        printf("i = %d\n", i);
        printf("dumb = %d\n", dumb);
    }                                       // i keeps track of itslef in different ways within a for loop and you can redefine i within a for loop which is cool

    while(1){
        printf("in loop\n");
        break;
        printf("in loop but after break so won't excecute");        // stuff after break in a loop won't execute. break is an emergency button for loops
    }
    printf("end loop\n");

    for(i = 0; i < 10; i++){
        if(i < 5){
            continue;                   // continue doesn't execute code after it in the loop but starts the loop again, it's like a soft break
        }
         printf("i = %d\n", i);
    }
    

    return 0;
}