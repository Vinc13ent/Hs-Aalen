#include <stdlib.h>
#include <stdio.h>


void read (double* p, unsigned int size){
    for (int i = 0; i < size; i++) {
        scanf("%lf", &p[i]);
    }
}

void times (double* p, unsigned int size){
    for (int i = 0; i < size; i++) {
        p[i] *= 2;         
    }
}

void print (double* p, unsigned int size){
    for (int i = 0; i < size; i++) {
        printf("%lf\n", p[i]);
    }
}

int main (){
    unsigned int size;
    scanf("%du", &size);
    if (size == 0){
        return 0;
    }
    double *p = malloc(size*sizeof (double ));
    if (p == NULL){
        return 0;
    }
    read(p, size);
    times(p, size);
    print(p, size);
    free(p);
    p = NULL;
    return 0;
}