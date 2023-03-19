#include <stdio.h>

int main(){
    float a;
    float fun;
    
    printf("Escolha o valor: ");
    scanf("%f", &a);
    
    if (a <= 0 || a > 7){
        printf("Valores inexistentes!");
    }
    else if ( a < 2){
        fun = 3 * a + 11;
        printf("%fun", fun);
    }
    else if ( a <= 5){
        printf("17");
    }
    else {
        fun = -4.5 * a + 39.5;
        printf("%fun", fun); 
    }
    
    
    
}
