#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    char sexo;
    float valor, total, desconto;
    printf("Digite seu sexo: ");
    scanf("%c", &sexo);
    getchar();
    while(sexo != 'M' && sexo != 'm' && sexo != 'f' && sexo != 'F'){
        printf("Digite um sexo válido: ");
        scanf("%c", &sexo);
        getchar();
    }
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    getchar();
    while(valor <= 0){
        printf("Valor inválido digite novamente: ");
        scanf("%f", &valor);
        getchar();
    }
    if(sexo == 'f' || sexo == 'F'){
        total = valor - (valor * 0.15);
    }
    else{
        total = valor - (valor * 0.1);
    }
    desconto = valor - total;
    printf("\nSexo: %c \nValor Bruto: R$%.2f \nDesconto condedido: R$%.2f \nValor líquido: R$%.2f\n", sexo, valor, desconto, total);
    getchar();
}
