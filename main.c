#include <stdio.h>

int main() {

    int contador = 0, num1 = 0, num2 = 0;

    printf("Escreva dois numeros\n");

    while (contador < 2) {
        scanf("%d", &num1);
        scanf("%d", &num2);
        contador += 2;
    }
    contador++;
    if(num1 < num2){
        printf("Error");
    }else{
        printf("%d", num1 - num2 + 2);
    }

    return 0;
}
