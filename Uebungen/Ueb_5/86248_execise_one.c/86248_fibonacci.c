#include "stdio.h"

int main(){

    int entry;
    int f1 = 0;
    int f2 = 1; 
    int f3 = f1 + f2;
    
    while(scanf("%d", &entry) == 0){
        scanf("%*s");
    }
    
    if (entry < 0)
    {
    }
    else if(entry == 0 ){
        printf("0\n");
    }
    else
    {

        printf("%d\n", f1);
        printf("%d\n", f2);

        while (f3 <= entry) {
            printf("%d\n", f3);
            f1 = f2;
            f2 = f3;
            f3 = f1 + f2;
            
        }
    }
    
    return 0;
}