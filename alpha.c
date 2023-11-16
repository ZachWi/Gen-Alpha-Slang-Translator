#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  char words[4][8] = {"skibidi", "fanum", "rizzler", "gyatt"};
  for (int i = 1; i < argc; i++){
    if (strcmp(argv[i], words[0]) == 0){
      printf("evil ");
    }
    if (strcmp(argv[i], words[0]) != 0){
      if (strcmp(argv[i], words[1]) != 0){
        if (strcmp(argv[i], words[2]) != 0){
          if (strcmp(argv[i], words[3]) != 0){
            printf("%s ", argv[i]);
          }
        }
      }
    }
    if (strcmp(argv[i], words[1]) == 0){
      printf("food taxation ");
    } 
    if (strcmp(argv[i], words[2]) == 0){
      printf("charismatic person ");
    }
    if (strcmp(argv[i], words[3]) == 0){
      printf("behind ");
    }
  }
  return 0;
}