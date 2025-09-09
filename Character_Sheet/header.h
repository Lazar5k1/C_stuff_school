#ifndef CHARACTER_H
#define CHARACTER_H

typedef struct {
    char name[50];
    int hp;
    int fp;
    int *ptr;
} character;

void initCharacter(character* rogue, int* ptr, const char* name, int hp, int fp);

#endif