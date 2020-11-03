/**
 * @file hoje.c
 * @author Bruna Macieira
 * @brief 
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

int main(){

    //declarar variaveis
    int num1, num2;
    float soma, subtrac, multi, divisao;

    printf("Introduza o seu primeiro numero: \n");
    scanf("%d", &num1);

    printf("Introduza o seu segundo numero: \n");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("soma= %f", soma);
    subtrac = num1 - num2;
    printf("subtracao= %f", subtrac);
    multi = num1 * num2;
    printf("multiplicacao= %f", multi);
    divisao = num1 / num2;
    printf("divisao= %f", divisao);

    getchar();
    return 0;


}