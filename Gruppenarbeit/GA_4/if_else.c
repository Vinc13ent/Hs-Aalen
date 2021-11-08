#include <stdio.h>
#include <math.h>

int main() {
    float f1 = 0.5, f2 = 0.3, f3 = 0.2, f4 = f1 - f2 - f3;
    if(f4 == 0)
    {
        printf("is Zero");
    }
    else
    {
        printf("%.10f is not zero\n", f4);
    }
    return 0;
}
