#include <stdio.h>
#include <string.h>

 struct character{
    int daggers;
    char alias[10];
    int potions;
    int* ptr;
};

void out_cars(int* cars, size_t elm);

int main(){
    int num = 98;
    int cars[10];
    for (int i =0; i < 10; i++){
        cars[i] = i;
    }
    struct character rogue;
    rogue.daggers = 10;
    strncpy(rogue.alias, "Harry Mor", sizeof(rogue.alias) - 1);
    rogue.potions = 4;
    rogue.ptr = &num;
    for(int i = 0; i< sizeof(rogue.alias); i++){
        printf("alias[%d] = %c\n", i, rogue.alias[i]);
    }
    size_t cars_size = (sizeof(cars) / sizeof(cars[0]));
    out_cars(cars, cars_size);
    

    return 0;
}

void out_cars(int* cars, size_t elm){
    for(size_t i = 0; i < elm; i++){
        printf("cars[%zu] = %d\n", i, cars[i]);
    }
}