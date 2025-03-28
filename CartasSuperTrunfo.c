#include <stdio.h>

int main() {

    printf("\tNível mestre\n");

    // CARTA 1 //
  
    char inicial = 'A';
    char codigo[6] = "A01";
    char nome[20] = "São Paulo";
    unsigned long int populacao = 12325000;
    float area = 1521.11;
    float PIB = 699.28;
    int numero = 50;

    // Cálculo da densidade populacional e PIB per capita
    float D = populacao / area;  // Densidade populacional (hab/km²)
    float P = PIB * 1e9 / populacao;    // PIB per capita (reais)

    // Soma de valores, mas com unidades diferentes
    float soma = populacao + area + (PIB * 1e9) + numero + D + P;
    
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", inicial);
    printf("Código: %s\n", codigo);
    printf("Nome do Estado: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de pontos Turísticos: %d\n", numero);
    printf("Densidade Populacional: %.2f hab/km²\n", D);
    printf("PIB per Capita: %.2f reais\n", P);
    printf("Soma do Super Poder: %.2f\n", soma);
    
    printf("\n");
    
    // CARTA 2 //
    
    char inicial1 = 'B';
    char codigo1 [6] = "A02";
    char nome1 [20] = "Rio de Janeiro";
    unsigned long int populacao1 = 6748000;
    float area1 = 1200.25;
    float PIB1 = 300.50;
    int numero1 = 30;
    
        // Cálculo da densidade populacional e PIB per capita
    float D1 = populacao1 / area1;  // Densidade populacional (hab/km²)
    float P1 = PIB1 * 1e9 / populacao1;    // PIB per capita (reais)

    // Soma de valores, mas com unidades diferentes
    float soma1 = populacao1 + area1 + (PIB1 * 1e9) + numero1 + D1 + P1;
    
    printf("\n");
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", inicial1);
    printf("Código: %s\n", codigo1);
    printf("Nome do Estado: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos Turísticos: %d\n", numero1);
    printf("Densidade Populacional: %.2f hab/km²\n", D1);
    printf("PIB per Capita: %.2f reais\n", P1);
    printf("Soma do Super Poder: %.2f\n", soma1);

        // Batalha de Cartas no Super Trunfo //

    printf("\n\tComparação de Cartas: \n");
    printf("\n");
    
 printf("População: Carta 1: Venceu %d\n", populacao > populacao1);
 printf("Área: Carta 1: Venceu %d\n", area > area1);
 printf("PIB: Carta 1: Venceu %d\n", PIB > PIB1);
 printf("Pontos turísticos: Carta 1: Venceu %d\n", numero > numero1);
 printf("Densidade populacional: Carta 2: Venceu %d\n", D < D1);
 printf("PIB per capita: Carta 1: Venceu %d\n", P > P1);
 printf("Super Poder: Carta 1: Venceu %d\n", soma > soma1);
   
    return 0;
}