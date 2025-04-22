#include <stdio.h>

int main(void) {
    int N, i, code;
    double height, max = 0.0, min = 1e9;
    double sumAll = 0.0, sumF = 0.0;
    int countF = 0;

    printf("Quantas pessoas? ");
    scanf("%d", &N);

    // coleta dados e calcula estatísticas em um único loop
    for (i = 0; i < N; i++) {
        printf("Altura e sexo (1=M,2=F,3=Outro): ");
        scanf("%lf %d", &height, &code);
        sumAll += height;
        if (height > max) max = height;  // atualiza máximo
        if (height < min) min = height;  // atualiza mínimo
        if (code == 2) { sumF += height; countF++; }  // estatística só para mulheres
    }

    printf("Altura maxima = %.2f\n", max);
    printf("Altura minima = %.2f\n", min);
    printf("Media das mulheres = %.2f\n", (countF ? sumF/countF : 0));
    printf("Media geral = %.2f\n", sumAll/N);
    return 0;
}
