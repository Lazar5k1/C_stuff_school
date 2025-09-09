#include <stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("test.txt", "r");
    char fcontent[1000];

    if(fptr == NULL){
        printf("file not found");
    }
    else{
        while(fgets(fcontent, 1000, fptr)){
            printf("%s", fcontent);
        }
    }
    fclose(fptr);
    
    fptr = fopen("test2.txt", "w");
    fputs("Meet me after the toga party\naoewvobnqab\noajervb", fptr);
    
    fclose(fptr);

    return 0;
}