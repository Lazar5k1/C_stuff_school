#include <stdio.h>

int main(){
    int dolphin[10][10] = {{-1, -1, -1, -1, -1}, {-1, -1, -1, -1 , -1}};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(dolphin[i][j] != -1){
                dolphin[i][j] = j;
            }
            printf("dolphin[%d][%d] = %d\n", i, j, dolphin[i][j]);
        }
    }

    int imagine = 10;
    printf("imagine = %d\n", imagine);
    imagine++;
    printf("imagine = %d\n", imagine);
    ++imagine;
    printf("imagine = %d\n", imagine);
    printf("imagine = %d\n", imagine++);
    printf("imagine = %d\n", imagine);
    printf("imagine = %d\n", ++imagine);
    printf("imagine = %d\n", imagine);

    char gator[] = "apple";
    printf("%s\n", gator);
    char mountain[5];
    fgets(mountain, sizeof(mountain), stdin);               // when using scanf it's stop at the first white space, fgets gets all input within the second parameter's limit.
    printf("%s\n", mountain);
    printf("sizeof(mountain = %d)\n", sizeof(mountain));
    printf("sizeof(gator = %d)\n", sizeof(gator));          // when declaring a string it must be the length of the word + 1 because the \0 counts as a character


    return 0;
}