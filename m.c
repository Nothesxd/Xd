#include <stdio.h>
#include "funciones.h"

int main()
{
    float inversionAnual, interesAnual, meses, tasaInteresMensual, gananciaMensual, monto, ingresoTotal, ahorroMensual, montoTotal, contador ;

    printf ("Ingrese el monto a invertir: ");
    scanf ("%f", &inversionAnual);

    printf ("Ingrese el interes anual que se tiene: ");
    scanf ("%f", &interesAnual);

    printf ("Ingrese los meses que se usara: ");
    scanf ("%f", &meses);

    tasaInteresMensual = tasaInteres(interesAnual);
    ahorroMensual = 0 + inversionAnual;
    montoTotal = meses * inversionAnual;
    meses = meses + 1;
    
    printf("Mes\tGanancia\tMonto\n");
    contador = 0;
    printf("%.f\t%.2f\n", contador, ahorroMensual);

    for (float contador = 1; contador < meses; contador++) {
        monto = calcularMontoMensual(ahorroMensual, tasaInteresMensual);
        gananciaMensual = calcularGananciaMensual(monto, ahorroMensual);
        ahorroMensual = calcularAhorroMensual(gananciaMensual, inversionAnual);
        
        printf("%.f\t%.2f\t%.2f\n", contador, gananciaMensual, monto);
    }
    
    ingresoTotal = gananciaMensual - montoTotal;
    
