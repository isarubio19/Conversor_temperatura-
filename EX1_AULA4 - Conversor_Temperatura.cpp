#include <stdio.h>

float converterParaCelsius(float F);

int main(){

    float F, C;

    while(1){

        printf("Digite a temperatura em F:\n");
        scanf("%f", &F);

        C = converterParaCelsius(F);

        printf("Temperatura em C: %.2f\n", C);
    }

    return 0;
}

float converterParaCelsius(float F){

    float C;

    C = 5.0/9.0 * (F - 32.0);

    return C;
}