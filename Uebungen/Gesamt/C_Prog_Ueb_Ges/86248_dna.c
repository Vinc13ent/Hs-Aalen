#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void complement( char* dna );

int main(){
    
    char orgstrang[100];
    char compstrang[100];
    
    fgets(orgstrang, 100, stdin);
    strcpy(compstrang, orgstrang);

    complement(compstrang);

    printf("%s", compstrang);
    printf("%s", orgstrang);

    return 0; 
}

void complement( char* dna){
    for (int i = 0; i < strlen(dna); i++) {
        switch (dna[i]) {
            case 't': dna[i] = 'A'; break;
            case 'T': dna[i] = 'A'; break;
            case 'a': dna[i] = 'T'; break;
            case 'A': dna[i] = 'T'; break;
            case 'c': dna[i] = 'G'; break;
            case 'C': dna[i] = 'G'; break;
            case 'g': dna[i] = 'C'; break;
            case 'G': dna[i] = 'C'; break;
            case '\n': break;
            case ' ': break;
            default: dna[i] = ' '; break;
        }
    }
}