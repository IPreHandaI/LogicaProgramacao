#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1, nota2, nota3, notaRec;

    printf("Digite sua primeira nota\n");
    scanf("%d", &nota1);
    if(nota1 <= 10 && nota1 > 0){
        printf("Digite sua segunda nota\n");
        scanf("%d", &nota2);
        if(nota2 <= 10 && nota2 > 0){
            printf("Digite sua terceira nota\n");0,

            scanf("%d", &nota3);
            if(nota3 <= 10 && nota3 > 0){
                int media = (nota1 + nota2 + nota3)/3;
                if(media >= 7){
                    printf("Voce foi aprovado!\nSua media e de: %d", media);
                }else{
                    printf("Voce esta em recuperacao!\nSua media e de: %d\n", media);
                    sleep(1);
                    printf("Digite sua nota de recuperacao:\n");
                    scanf("%d", &notaRec);
                    if(notaRec <= 10 && notaRec >= 0){
                        if(nota1 < nota2 && nota1 < nota3){
                            int nota1 = notaRec;
                            int media = (nota1 + nota2 + nota3)/3;
                            printf("%d", media);
                            if(media >= 7){
                                printf("Voce passou com uma media de: %d", media);
                            }else{
                                printf("Voce reprovou com uma media de: %d", media);
                            }
                        }else if(nota2 < nota3){
                            int nota2 = notaRec;
                            int media = (nota1 + nota2 + nota3)/3;
                            if(media >= 7){
                                printf("Voce passou com uma media de: %d", media);
                            }else{
                                printf("Voce reprovou com uma media de: %d", media);
                            }
                        }else{
                            int nota3 = notaRec;
                            int media = (nota1 + nota2 + nota3)/3;
                            if(media >= 7){
                                printf("Voce passou com uma media de: %d", media);
                            }else{
                                printf("Voce reprovou com uma media de: %d", media);
                            }
                        }

                    }else{
                        printf("Error");
                    }
                }
            }else{
                printf("Error");
            }
        }else{
            printf("Error");
        }
    }else{
        printf("Error");
    }




    return 0;
}
