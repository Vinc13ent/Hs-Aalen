#include <stdio.h>

int main() {
    int entry;
    scanf("%d", &entry);
    if (entry == 0){
        printf("");
    }else if(entry == 1){
        printf("");
    }else {
        for (int i = 2; i <= entry; ++i) {
            if (i % 2 == 0) {
                if (i == entry) {
                    printf("%d\n", i);
                    break;
                } else if (i == entry - 1) {
                    printf("%d\n", i);
                    break;
                } else {
                    printf("%d, ", i);
                }
            }
        }
    }
   return 0;
}
