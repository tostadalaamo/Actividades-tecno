#include <stdio.h>

int comparador(int numero){
    int resultado;
    if (numero > 0){
        resultado = 1;
    }else if(numero < 0){
        resultado = 2;
    }else{
        resultado = 0;
    }
    return resultado;
}

int main() {
    int num = 0;
    printf("Ingrese un numero:");
    scanf("%d", &num);
    int estado = comparador(num);
    if (estado == 1){
        printf("%d es positivo.", num);
    } else if (estado == 2){
        printf("%d es negativo.", num);
    } else if (estado == 0){
        printf("%d es cero.", num);
    }
}
