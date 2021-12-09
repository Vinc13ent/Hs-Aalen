#include "stdio.h"
#include "math.h"

int main(){
    
    float a, b, c; // Anlegen der einzulesenden Variablen 
    float result;
    float resultp, resultn;
    
    scanf("%f", &a);    //Einlesen der Variablen 
    scanf("%f", &b);
    scanf("%f", &c);
    
    float radicant = (b*b) - 4*a*c;
    
    if ( a != 0) {
        if (radicant < 0) {
            printf("no solution\n");
        } else if (radicant == 0) {
            result = -b / (2 * a);
            printf("%f\n", result);
        } else {
            resultp = (-b + sqrt(radicant)) / (2 * a);
            resultn = (-b - sqrt(radicant)) / (2 * a);
            printf("%f\n", resultp);
            printf("%f\n", resultn);
        }
    }else{
        if ( b == 0){
            if ( c == 0){
                printf("infinite solutions\n");
            }else{
                printf("no solution\n");
            }
        }else{
            result = -(c/b);
            printf("%f\n", result);
        }
    }
    
}