    #include <stdio.h>
    #include <string.h>

    int main(){
        //carta 1
        char estado1, codigo1[4], nome_da_cidade1[50];
        int populacao1, pontos_turisticos1;
        float área1, PIB1;

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
        scanf("%f", &área1);

        printf("Digite o PIB: ");
        scanf("%f", &PIB1);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontos_turisticos1);



        //carta2
        char estado2, codigo2[4], nome_da_cidade2[50];
        int populacao2, pontos_turisticos2;
        float área2, PIB2;

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
        scanf("%f", &área2);

        printf("Digite o PIB: ");
        scanf("%f", &PIB2);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontos_turisticos2);

        

        //imprimir carta 1
        printf("Carta 1:\n"); 
        printf("Estado: %c\n", estado1);
        printf("Codigo da carta: %s\n", codigo1);
        printf("Nome da cidade: %s\n", nome_da_cidade1);
        printf("População: %d\n", populacao1);
        printf("Área em km²: %f\n", área1);
        printf("PIB: %f\n", PIB1);
        printf("Número de pontos turisticos: %d\n", pontos_turisticos1); 

        //imprimir carta 2
        printf("Carta 2:\n"); 
        printf("Estado: %c\n", estado2);
        printf("Codigo da carta: %s\n", codigo2);
        printf("Nome da cidade: %s\n", nome_da_cidade2);
        printf("População: %d\n", populacao2);
        printf("Área em km²: %f\n", área2);
        printf("PIB: %f\n", PIB2);
        printf("Número de pontos turisticos: %d\n", pontos_turisticos2);
        
    }
