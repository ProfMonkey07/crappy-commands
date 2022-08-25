#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *read;
    int readfile;
    read = fopen(argv[1], "r");
    readfile = fgetc(read);
    while(readfile != EOF){
        printf("%c", readfile);
        readfile = fgetc(read);
    }
    return 0;
}