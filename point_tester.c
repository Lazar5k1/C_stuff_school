#include <stdio.h>

void broom(int* broom);
// unsigned char* carrot(unsigned char* num, unsigned char nim);
int* something(int* dog);

int main(){
    int bullets = 6;    // assigns a variable of type int to 4 bytes of memory
    int* casings = &bullets;    // creates a variable of type pointer that points to the address of bullets
    printf("%zu\n", sizeof(bullets));   // number of bytes in an int variable
    printf("%p\n", &bullets);   // address of bullets
    printf("%p\n", casings);    // address stored in casings
    printf("%d\n", *casings);   // value stored in the address stored in casings
    *casings = 4;   // changes value stored in address stored in casings
    printf("%d\n", bullets);   // value in bullets

    int sand = 12;
    int* grain = &sand;
    printf("sand = %d\n", *grain);
    broom(grain);
    printf("sand = %d\n", *grain);

    // unsigned char num = 0b00011010;
    // unsigned char nim = 0b00001100;
    // unsigned char sum = 0;
    // unsigned char* num_ptr = &num;
    // carrot(num, nim);
    // printf("%0X\n", sum);
    
    printf("exam address = %p\n", something(grain));
    int* val = something(grain);
    printf("exam value = %d\n", *val);

    return 0;
}

// pointer variables store addresses
// * = value at this address
// & = address

void broom(int* water){
    *water = 24;
}

// unsigned char* carrot(unsigned char* num, unsigned char nim){
//     for(int i = 7; i > 0; i--){
//         (*num >> i);
//         (nim >> i);
//         // I'll finish it later
//     }
// }

int* something(int* dog){
    return dog;
}