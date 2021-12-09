#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;
    int i = 0;

    scanf("%d", &size);
    double *ptr = malloc(size*sizeof (double));
    
    if (ptr == 0){
        return 0;
    }

    while (i < size){
        scanf("%lf", &ptr[i]);
        i++;
    }
    
    i = 0;
    while (i < size){
        printf("%lf\n", ptr[i]*2);
        i++;
    }

    free(ptr);
    ptr = NULL;
    
    return 0;
}
