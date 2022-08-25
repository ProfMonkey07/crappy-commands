#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(int argc, char *argv[]) {
    bool trailing = true;
    bool escapes = false;
    bool pastoptions = false;
    int i = 0;
    while(pastoptions == false) {
        i++;
        if(strcmp(argv[i], "-n") == 0) {
            trailing = false;
        } else if(strcmp(argv[i], "-e") == 0) {
            escapes = true;
        } else {
            pastoptions = true;
        }
    }
    while(i < argc) {
        printf("%s", argv[i]);printf(" ");i++;
    }
    if(trailing == true){printf("\n");}
    return 0;
}