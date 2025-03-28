#include <stdio.h>

int main() {
    
    char carta = '1';
    char estado = 'F';
    char codigo = "F01";
    char cidade [50] = "fortaleza";
    int populacao = 2850000;
    float area = 155.35;
    float pib = 750.30;
    int pontosturisticos = 70; 


    printf("Carta 1: \n");
    scanf("%c", &carta);

    printf("Qual Estado: \n");
    scanf("%s", &estado);

    printf("Código: \n");
    scanf("%s", &codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao) ;

    printf("Área da Cidade: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib );

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Carta: %s\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
   

    return 0;



}
