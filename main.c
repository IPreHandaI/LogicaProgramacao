#include <stdio.h>
#include <stdlib.h>

int main()
{
    int homi1, homi2, muie1, muie2;

    printf("Escreva a idade do homi1: ");
    scanf("%d", &homi1);
    printf("Escreva a idade do homi2: ");
    scanf("%d", &homi2);
    printf("Escreva a idade da muie1: ");
    scanf("%d", &muie1);
    printf("Escreva a idade da muie2: ");
    scanf("%d", &muie2);

    if(homi1 > homi2){
        if(muie1 < muie2){
            printf("homi1: %d + muie1: %d = %d\n", homi1, muie1, homi1+muie1);
            printf("homi2: %d + muie2: %d = %d", homi2, muie2, homi2+muie2);

        }else{
            printf("homi1: %d + muie2: %d = %d\n", homi1, muie2, homi1+muie2);
            printf("homi2: %d + muie1: %d = %d", homi2, muie1, homi2+muie1);
        }
    }else{
        if(muie1 < muie2){
            printf("homi2: %d + muie1: %d = %d\n", homi2, muie1, homi2+muie1);
            printf("homi1: %d + muie2: %d = %d", homi1, muie1, homi1+muie1);

        }else{
            printf("homi2: %d + muie2: %d = %d\n", homi2, muie2, homi2+muie2);
            printf("homi1: %d + muie1: %d = %d", homi1, muie1, homi1+muie1);
        }
    }

    return 0;
}
