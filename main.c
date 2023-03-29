#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int creditoUsuario, minimo = 2, maximo = 12, apostaUsuario, i1, i2, somaUsuario, somaPC;
    bool exibirMensagemFinal = true;

    srand(time(NULL));

    printf("Digite seu valor incial de credito\n");
    scanf("%d", &creditoUsuario);

    int creditoPC = creditoUsuario;
    while(creditoUsuario > 0){
        do {
            do {
                printf("\nDigite o valor da sua aposta\n");
                scanf("%d", &apostaUsuario);

                if (apostaUsuario > creditoUsuario && apostaUsuario > 0) {
                    printf("Digite um valor inferior ou igual ao seu credito...\n");
                }
            } while (apostaUsuario > creditoUsuario);

            int apostaPC = apostaUsuario;

            creditoUsuario -= apostaUsuario;
            creditoPC -= apostaPC;

            for(int i = 0; i < 2; i++){
                int dado = (rand() % (maximo - minimo )) + minimo;
                if(i == 0){
                    i1 = dado;
                    printf("Seu %do numero foi: %d\n", i+1, dado);
                }else{
                    i2 = dado;
                    printf("Seu %do numero foi: %d\n", i+1, dado);
                }
            }

            somaUsuario = i1 + i2;

            printf("Sua soma foi de %d\n", somaUsuario);

            for(int i = 0; i < 2; i++){
                int dado = (rand() % (maximo - minimo )) + minimo;
                if(i == 0){
                    i1 = dado;
                    printf("\nO %do numero do PC foi: %d\n", i+1, dado);
                }else{
                    i2 = dado;
                    printf("O %do numero do PC foi: %d\n", i+1, dado);
                }
            }

            somaPC = i1 + i2;

            printf("A soma do PC foi de %d\r\n", somaPC);

            if(somaUsuario > somaPC){
                printf("\nVoce venceu com: %d", somaUsuario);
                creditoUsuario += apostaUsuario + apostaPC;
            }else{
                printf("\nO PC venceu com: %d", somaPC);
                creditoPC += apostaPC + apostaUsuario;
            }

            char respostaUsuario;

            printf("\nVoce ficou com %d creditos!\nVoce deseja continuar?\nS\nor\nN ?", creditoUsuario);
            scanf("%s", &respostaUsuario);

            if(creditoUsuario > 0){
                if(respostaUsuario == 's' || respostaUsuario == 'S'){
                    continue;
                }else if(respostaUsuario == 'n' || respostaUsuario == 'N'){
                    exibirMensagemFinal = false;
                    break;
                }
            }else{
                printf("Voce nao tem mais creditos!");
                break;
            }



        }while(true);
        break;
    }


    return 0;
}
