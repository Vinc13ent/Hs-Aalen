#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
    
    char *zk = argv[1];
    char zeichen = *argv[2];
    int count = 0;

    for (int i = 0; i < strlen(zk); i++) {
        if (zk[i] == zeichen){
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}