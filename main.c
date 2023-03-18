#include <stdio.h>
#include <string.h>

int main()
{
    int litros;
    char escolha[0];

    printf("Escolha entre alcool (A) ou gasolina (G)");
    scanf("%s", &escolha);

    switch (escolha[0]) {
        case 'A':
        printf("Quantos litros voce vai querer?");
        scanf("%d", &litros);
            if(litros < 0 || litros > 100){
                printf("Nosso limite por carro e de 100L");
            }else {
                if(litros <= 20){
                    printf("%d\n", litros*5 - (int)(litros*5*0.03));
                }else if(litros > 20 || litros <= 100){
                    printf("%d\n", litros*5 - (int)(litros*5*0.05));
                }
            }
        break;

        case 'G':
            printf("Quantos litros voce vai querer?");
            scanf("%d", &litros);
            if(litros < 0 || litros > 100){
                printf("Nosso limite por carro e de 100L");
            }else {
                if(litros <= 20){
                    printf("%d\n", litros*5 - (int)(litros*5*0.04));
                }else if(litros > 20 || litros <= 100){
                    printf("%d\n", litros*5 - (int)(litros*5*0.06));
                }
            }
        break;
    }



    return 0;
}
