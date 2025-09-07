#include <stdio.h>
#include <string.h>                 // you can use %s and char arrays without this but you need string.h for string functions

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
    fgets(mountain, sizeof(mountain), stdin);               // when using scanf it stops at the first white space, fgets gets all input within the second parameter's limit.
    printf("%s\n", mountain);
    printf("sizeof(mountain = %d)\n", sizeof(mountain));
    printf("sizeof(gator = %d)\n", sizeof(gator));          // when declaring a string it must be the length of the word + 1 because the \0 counts as a character
    char title[] = "soul";
    printf("strlen(title) = %zu\n", strlen(title));            // counts characters in string and ignores \0
    char newGame[strlen(title) + 1];                        // if you don't put the + 1 it still "works" but that would be called a buffer overflow :o
    strcpy(newGame, title);                                        // also apparently you can exploit buffer overflow with malicious code??? super cool stuff dude
    printf("newGame = %s\n");
    char swim[] = "never";
    strcat(title, swim);
    printf("title = %s\n", title);
    char stairs[] = "never";
    

    return 0;
}