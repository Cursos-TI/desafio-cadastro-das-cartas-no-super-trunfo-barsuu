#include <stdio.h>

int main() {
    printf("Cadastre a sua carta para começar a jogar!\n"); // Mensagem de inicio

    /*CIDADE 1*/
    char cidade1[30] = "Fortaleza";      //cidade
    int populacao1 = 2000000;           //População
    float area1 = 120.0;               //Área em km²
    float pib1 = 21000.0;             //PIB
    int npontost1 = 10;              //Pontos Turísticos

    printf("Digite a Cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a População: \n");
    scanf("%d", &populacao1);
    printf("Digite a Área em km²: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite Quantos Pontos Turísticos Existem Na Cidade: \n");
    scanf("%d", &npontost1);

    printf("Cidade: %s\n", cidade1);
    printf("População: %d Habitantes\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Quantidade de Pontos Turísticos: %d\n", npontost1);

    printf("Cadastre mais uma carta para continuar o jogo!\n"); // Mensagem de continuação

    /*CIDADE 2*/
    char cidade2[30] = "santos";         //cidade
    int populacao2 = 200000;            //População
    float area2 = 12.0;                //Área em km²
    float pib2 = 2100.0;              //PIB
    int npontost2 = 20;              //Pontos Turísticos

    printf("Digite a Cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a População: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área em km²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite Quantos Pontos Turísticos Existem Na Cidade: \n");
    scanf("%d", &npontost2);

    printf("Cidade: %s\n", cidade2);
    printf("População: %d Habitantes\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade de Pontos Turísticos: %d\n", npontost2);



    return 0;
}
