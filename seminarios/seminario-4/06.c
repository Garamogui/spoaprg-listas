/*
 *
 * 6. Implemente uma função que calcule a raiz quadrade de um número real utilizando o método de newton com precisão de 0.0001
 *
 */


#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

double sqrt_newton(double num);
double absolute(double num);

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("clear");

    double num;

    printf("------- Cálculo da raiz quadrada. -------\n");
    printf("Escolha o número: ");
    scanf("%lf", &num);

    printf("-----------------------------------------\n");

    if (num < 0) {
        printf("Número inválido. Raiz quadrada de número negativo não é real.\n");
    } else {
        double result = sqrt_newton(num);
        printf("A raiz quadrada de %.2lf é aproximadamente %.4lf.\n", num, result);
    }

    return 0;
}

double sqrt_newton(double num) {
    double guess = num / 2.0;
    double precision = 0.0001;

    while (absolute(guess * guess - num) > precision) {
        guess = (guess + num / guess) / 2.0;
    }

    return guess;
}

double absolute(double num) {
    return (num < 0) ? -num : num;
}
