#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //====== CARTA 1 ========
    
    int pontosturisticos1;
    unsigned long int populacao1;
    float area1;
    float SuperPoder1;
    double densidadepopulacional1, pib1, pibpercapita1;
    char estado1;
    char nomecidade1[50], codigocarta1[10];

        printf("==== CADASTRO DA CARTA1 ==== \n");

        printf("Digite um Estado (A-H): ");
        scanf(" %c" , &estado1);

        printf("Digite o Código da Carta (ex:A01): ");
        scanf("%s" , &codigocarta1);

        getchar();
        printf("Digite o Nome da Cidade: ");
        fgets( nomecidade1, sizeof(nomecidade1), stdin);
        nomecidade1[strcspn(nomecidade1, "\n")] = '\0'; 

        printf("Digite o Numero da População: ");
        scanf("%lu" , &populacao1);

        printf("Digite a Área: ");
        scanf("%f" , &area1);

        printf("Digite o Pib da Cidade: ");
        scanf("%lf" , &pib1);

        printf("Digite a Quantidade de Pontos Turísticos: ");
        scanf("%d" , &pontosturisticos1);
        
        // CÁLCULOS

        densidadepopulacional1 = populacao1 / area1;
        pibpercapita1 = (pib1 * 1000000000) / populacao1;
        SuperPoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0 / densidadepopulacional1);

        printf("=== RESULTADO CARTA1 === \n");

    // ==== EXIBIÇÃO ====
        
        printf("O Estado é: %c \n" , estado1);
        printf("O Código da Carta é: %s \n" , codigocarta1);
        printf("O Nome da Cidade é: %s \n" , nomecidade1);
        printf("O Número da População é: %lu Habitantes \n" , populacao1);
        printf("A Área é: %.2f KM² \n" , area1);
        printf("O Pib é: %.2lf Bilhões \n" , pib1);
        printf("O Pontos  Turísticos é: %d \n" , pontosturisticos1);
        printf("A Densidade Populacional é: %.2lf HAB/KM²\n" , densidadepopulacional1);
        printf("O Pib per Capita é: %.2lf REAIS\n" , pibpercapita1);
       
        // ==== CARTA2 ====

    int pontosturisticos2;
    unsigned long int populacao2;
    float area2;
    float SuperPoder2;
    double densidadepopulacional2, pib2, pibpercapita2;
    char estado2, nomecidade2[50], codigocarta2[10];

        printf(" ==== CADASTRO DA CARTA2 ==== \n ");

        printf("Digite um Estado (A-H):");
        scanf(" %c" , &estado2);

        printf("Digite o Código da Carta (ex:A02): ");
        scanf("%s" , &codigocarta2);

        getchar();
        printf("Digite o Nome da Cidade: ");
        fgets( nomecidade2, sizeof(nomecidade2), stdin);
        nomecidade2[strcspn(nomecidade2, "\n")] = '\0'; 

        printf("Digite o Numero da População: ");
        scanf("%lu" , &populacao2);

        printf("Digite a Área: ");
        scanf("%f" , &area2);

        printf("Digite o Pib da Cidade: ");
        scanf("%lf" , &pib2);

        printf("Digite a Quantidade de Pontos Turísticos: ");
        scanf("%d" , &pontosturisticos2);

    //CALCULOS
        densidadepopulacional2 = populacao2 / area2;
        pibpercapita2 = (pib2 * 1000000000) / populacao2;
        SuperPoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0 / densidadepopulacional2);

        printf("==== RESULTADO DA CARTA2 ==== \n");

        // ==== EXIBIÇÃO ====

        printf("O Estado é: %c \n" , estado2);
        printf("O Código da Carta é: %s \n" , codigocarta2);
        printf("O Nome da Cidade é: %s \n" , nomecidade2);
        printf("O Número da População é: %lu Habitantes \n" , populacao2);
        printf("A Área é: %.2f KM² \n" , area2);
        printf("O Pib é: %.2lf Bilhões \n" , pib2);
        printf("O Pontos  Turísticos é: %d \n" , pontosturisticos2);
        printf("A Densidade Populacional é: %.2lf HAB/KM² \n" , densidadepopulacional2);
        printf("O Pib per Capita é: %.2lf REAIS\n" , pibpercapita2);
        
    // RESULTADO DAS CARTAS COM IF E ELSE

        printf("==== COMPARAÇÃO DAS CARTAS ==== \n");
        
        // PRIMEIRO POPULAÇÃO
        printf("POPULAÇÃO VENCEDORA É: ");
        if (populacao1 > populacao2) {
            printf("CARTA 1 VENCEU! \n");
        } else {
            printf("CARTA 2 VENCEU! \n");
        }
       
        // SEGUNDO ÁREA
        printf("ÁREA VENCEDORA É: ");
        if (area1 > area2) {
            printf("CARTA 1 VENCEU! \n");
        } else {
            printf("CARTA 2 VENCEU! \n");
        }
        
        // TERCEIRO PIB
        printf("PIB VENCEDOR É: ");
        if (pib1 > pib2) {
            printf("CARTA 1 VENCEU! \n");
        } else {
            printf("CARTA 2 VENCEU \n");
        }
        
        // QUARTO PONTOS TURÍSTICOS
        printf("PONTO TURÍSTICO VENCEDOR É: ");
        if (pontosturisticos1 > pontosturisticos2) {
            printf("CARTA 1 VENCEU! \n");
        } else {
            printf("CARTA 2 VENCEU! \n");
        }

        // QUINTO DENSIDADE POPULACIONAL
        printf("DENSIDADE POPULACIONAL VENCEDORA É: ");
        if (densidadepopulacional1 < densidadepopulacional2) {
            printf("CARTA 1 VENCEU! \n");
        } else {
            printf("CARTA 2 VENCEU! \n");
        }

        // SEXTO PIB PER CÁPITA
        printf("PIB PER CAPITA VENCEDORA É: ");
        if (pibpercapita1 > pibpercapita2) {
            printf("CARTA 1 VENCEU! \n");
        } else {
            printf("CARTA 2 VENCEU! \n");
        }

        //SÉTIMO SUPER PODER
        printf("SUPER PODER VENCEDOR É: ");
        if (SuperPoder1 > SuperPoder2) {
            printf("CARTA 1 VENCEU! \n");
        } else {
            printf("CARTA 2 VENCEU! \n");
        }



    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
