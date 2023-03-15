#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int votoBranco = 0, votoNulo = 0, votoValido = 0, i;
    char voto[10];



    for(i = 0; i < 5; i++){
        printf("\nEscreva um voto na tela\n");
        scanf("%s", voto);
        if(strcmp(voto, "Branco") == 0 || strcmp(voto, "branco") == 0){
        printf("Voce votou: %s", voto);
        votoBranco++;
        }else if(strcmp(voto, "Nulo") == 0 || strcmp(voto, "nulo") == 0){
            printf("Voce votou: %s", voto);
            votoNulo++;
        }else if (strcmp(voto, "Valido") == 0 || strcmp(voto, "valido") == 0){
            printf("Voce votou: %s", votoValido);
            votoValido++;
        }else{
            printf("Error");
            system("cls");
            i--;
        }
        if(i == 4){
            printf("\nVotos brancos: %d", votoBranco);
            printf("\nVotos nulos: %d", votoNulo);
            printf("\nVotos validos: %d", votoValido);

        }
    }

    return 0;
}
