#include "funciones.h"

float tasaInteres(float a){
    float tasa = a/12;
    return tasa;
}

float calcularMontoMensual(float capital, float interes){
    float monto = (capital * interes)/100;
    return monto;
}

float calcularGananciaMensual(float interes, float capital){
    float gananciaMensual = interes + capital;
    return gananciaMensual;
}

float calcularAhorroMensual(float gananciaMensual, float ahorroAnterior){
    float ahorro = gananciaMensual + ahorroAnterior;
    return ahorro;
}
