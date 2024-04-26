#include <stdio.h>
#include <math.h>


float calcularInteres(float tasaInteres) {
    return tasaInteres / 100;
}


float calcularValorAPagar(float monto, float interes, int tiempo) {
    return monto * (1 + interes * tiempo);
}

int main() {
    
    float monto = 10000; 
    float tasaInteres = 15; 
    int tiempo = 5; 
    float interes;
    float valorAPagar;

    
    interes = calcularInteres(tasaInteres);

    
    valorAPagar = calcularValorAPagar(monto, interes, tiempo);

    
    printf("El valor a pagar del préstamo es: %.2f\n", valorAPagar);

    return 0;
}
