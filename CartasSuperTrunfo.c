#include <stdio.h>
    #include <string.h>
    int main(){
        //carta 1
        char estado1, codigo1[4], nome_da_cidade1[50];
        int populacao1, pontos_turisticos1;
        float area1, PIB1;
        float densidade_populacional1, PIB_per_capita1;


        printf("Carta 1:\n");
        printf("Digite o estado: ");
        scanf("%c", &estado1);
        getchar();

        printf("Digite o código da carta: ");
        scanf("%s", codigo1);
        getchar();

        printf("Digite o nome da cidade: ");
        scanf("%s", &nome_da_cidade1);

        printf("Digite a população: ");
        scanf("%d", &populacao1);
        
        printf("Digite a área: ");
        scanf("%f", &area1);

        printf("Digite o PIB: ");
        scanf("%f", &PIB1);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontos_turisticos1);
        
        
        //calculo carta 1
        densidade_populacional1 = populacao1 / area1;
        PIB_per_capita1 = PIB1 * 1000000000 / populacao1;


        //carta2
        char estado2, codigo2[4], nome_da_cidade2[50];
        int populacao2, pontos_turisticos2;
        float area2, PIB2;
        float densidade_populacional2, PIB_per_capita2;


        printf("Carta 2:\n");
        printf("Digite o estado: ");
        scanf(" %c", &estado2);
        getchar();

        printf("Digite o código da carta: ");
        scanf("%s", codigo2);
        getchar();

        printf("Digite o nome da cidade: ");
        scanf("%s", &nome_da_cidade2);

        printf("Digite a população: ");
        scanf("%d", &populacao2);
        
        printf("Digite a área: ");
        scanf("%f", &area2);

        printf("Digite o PIB: ");
        scanf("%f", &PIB2);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontos_turisticos2);

        //calculo carta 2
        densidade_populacional2 = populacao2 / area2;
        PIB_per_capita2 = PIB2 * 1000000000 / populacao2;

        

        //imprimir carta 1
        printf("Carta 1:\n"); 
        printf("Estado: %c\n", estado1);
        printf("Codigo da carta: %s\n", codigo1);
        printf("Nome da cidade: %s\n", nome_da_cidade1);
        printf("População: %d\n", populacao1);
        printf("Área em km²: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", PIB1);
        printf("Número de pontos turisticos: %d\n", pontos_turisticos1);
        printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
        printf("PIB per capita: %.2f reais\n", PIB_per_capita1);

        //imprimir carta 2
        printf("Carta 2:\n"); 
        printf("Estado: %c\n", estado2);
        printf("Codigo da carta: %s\n", codigo2);
        printf("Nome da cidade: %s\n", nome_da_cidade2);
        printf("População: %d\n", populacao2);
        printf("Área em km²: %f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", PIB2);
        printf("Número de pontos turisticos: %d\n", pontos_turisticos2);
        printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("PIB per capita: %.2f reais\n", PIB_per_capita2);

        
    }
