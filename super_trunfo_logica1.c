#include <stdio.h>

int main() {

//delcaração de variáveis---------------------------------------------------------------
    int populacao1, populacao2;
    int nmrPntTuristico1, nmrPntTuristico2;
    char nomeCidade1[30], nomeCidade2[30];
    char letraEstado1, letraEstado2;
    char codigoCarta1[5], codigoCarta2[5];
    float area1, area2, pib1, pib2;
    double pibPerCapita1, pibPerCapita2, densidadePopulacional1, densidadePopulacional2, pibBilhoes1, pibBilhoes2;

//primeira carta-------------------------------------------------------------------------
    printf("----Carta 01----\n");
    
    printf("\nDigite a letra do Estado: ");
        scanf(" %c", &letraEstado1);//com espaco antes do %c
   
    printf("\nDigite o Código da carta (com letra do estado e número de 01 a 04. ex: A01): ");
        scanf("%s", codigoCarta1);
    
    printf("\nDigite nome da cidade (ex: RioDeJaneiro): ");
        scanf("%s", nomeCidade1);

    printf("\nDigite o número da população: ");
        scanf("%d", &populacao1);

    printf("\nDigite a área em km (ex: 126.80): ");
        scanf("%f", &area1); 

    printf("\nDigite o PIB da sua cidade em Bilhões (ex: 123.46): ");
        scanf("%f", &pib1);

    printf("\nDigite o número de pontos túristicos: ");
        scanf("%d", &nmrPntTuristico1);

    

//Segunda Carta----------------------------------------------------------------------------
        printf("\n\n----Carta 02----\n");
    
    printf("\nDigite a letra do Estado: ");
        scanf(" %c", &letraEstado2);//com espaço antes do %c sempre
   
    printf("\nDigite o Código da carta (com letra do estado e número de 01 a 04. ex: A01): ");
        scanf("%s", codigoCarta2);
    
    printf("\nDigite nome da cidade (ex: RioDeJaneiro): ");
        scanf("%s", nomeCidade2);

    printf("\nDigite o número da população: ");
        scanf("%d", &populacao2);

    printf("\nDigite a área em km (ex: 126.80): ");
        scanf("%f", &area2); 

    printf("\nDigite o PIB da sua cidade em Bilhões (ex: 123.56): ");
        scanf("%f", &pib2);

    printf("\nDigite o número de pontos túristicos: ");
        scanf("%d", &nmrPntTuristico2);
    
    //Logica do cálculo---------------------------------------------------------------------
    pibBilhoes1 = pib1 * 1000000000.0;
    pibBilhoes2 = pib2 * 1000000000.0;
    pibPerCapita1 =(double) pibBilhoes1 / populacao1;
    pibPerCapita2 =(double) pibBilhoes2 / populacao2;
    densidadePopulacional1 =(double) populacao1 / area1;
    densidadePopulacional2 = (double) populacao2 / area2;

    //Aqui vai mostrar os dados da carta 1 -------------------------------------------------
        printf("\n------CARTA 01------\n");
        printf("Letra Estado: %c", letraEstado1);
        printf("\nCódigo Carta: %s", codigoCarta1);
        printf("\nNome da Cidade: %s", nomeCidade1);
        printf("\nPopulação: %d", populacao1);
        printf("\nÁrea da Cidade: %.2fkm2", area1);
        printf("\nPIB: $%.2f Bilhões", pib1);
        printf("\nNúmero de Pontos Turísticos: %d", nmrPntTuristico1);
        printf("\nDensidade Populacional: %.2lf hab/km2", densidadePopulacional1);
        printf("\nPIB per Capita: $%.2lf", pibPerCapita1);
        printf("\n-------------------------------\n");

        //Aqui mostrará os dados da carta 2-------------------------------------------------
        printf("\n------CARTA 02------\n");
        printf("Letra Estado: %c", letraEstado2);
        printf("\nCódigo Carta: %s", codigoCarta2);
        printf("\nNome da Cidade: %s", nomeCidade2);
        printf("\nPopulação: %d", populacao2);
        printf("\nÁrea da Cidade: %.2fkm2", area2);
        printf("\nPIB: $%.2f Bilhões", pib2);
        printf("\nNúmero de Pontos Turísticos: %d", nmrPntTuristico2);
        printf("\nDensidade Populacional: %.2lf hab/km2", densidadePopulacional2);
        printf("\nPIB per Capita: $%.2lf", pibPerCapita2);
        printf("\n-------------------------------\n");

    //Aqui começa a lógica de comparação entre as cartas---------------------------------
        
        printf("\n------COMPARAÇÕES ENTRE CARTAS------\n");
        printf("\n1 - População:\n");
        printf("\nCarta 01 - %s (%s): %d", nomeCidade1, codigoCarta1, populacao1);
        printf("\nCarta 02 - %s (%s): %d", nomeCidade2, codigoCarta2, populacao2);
        if (populacao1 > populacao2) {
            printf("\nCarta 01 (%s) Venceu !!!", nomeCidade1);
        }else if (populacao1 < populacao2){
            printf("\nCarta 02 (%s) Venceu !!!", nomeCidade2);
        }else{
            printf("\nEmpate !!!");
        }
        
        printf("\n------------------------------------\n");
        
        printf("\n2 - Área:\n");
        printf("\nCarta 01 - %s (%s): %.2f km2", nomeCidade1, codigoCarta1, area1);
        printf("\nCarta 02 - %s (%s): %.2f km2", nomeCidade2, codigoCarta2, area2);
        if (area1 > area2) {
            printf("\nCarta 01 (%s) Venceu !!!", nomeCidade1);
        }else if (area1 < area2){
            printf("\nCarta 02 (%s) Venceu !!!", nomeCidade2);
        }else{
            printf("\nEmpate !!!");
        }
        
        printf("\n------------------------------------\n");
        
        printf("\n3 - PIB:\n");
        printf("\nCarta 01 - %s (%s): $%.2f Bilhões", nomeCidade1, codigoCarta1, pib1);
        printf("\nCarta 02 - %s (%s): $%.2f Bilhões", nomeCidade2, codigoCarta2, pib2);
        if (pib1 > pib2) {
            printf("\nCarta 01 (%s) Venceu !!!", nomeCidade1);
        }else if (pib1 < pib2){
            printf("\nCarta 02 (%s) Venceu !!!", nomeCidade2);
        }else{
            printf("\nEmpate !!!");
        }
        
        printf("\n------------------------------------\n");
        
        printf("\n4 - Número de Pontos Turísticos:\n");
        printf("\nCarta 01 - %s (%s): %d", nomeCidade1, codigoCarta1, nmrPntTuristico1);
        printf("\nCarta 02 - %s (%s): %d", nomeCidade2, codigoCarta2, nmrPntTuristico2);
        if (nmrPntTuristico1 > nmrPntTuristico2) {
            printf("\nCarta 01 (%s) Venceu !!!", nomeCidade1);
        }else if (nmrPntTuristico1 < nmrPntTuristico2){
            printf("\nCarta 02 (%s) Venceu !!!", nomeCidade2);
        }else{
            printf("\nEmpate !!!");
        }
        
        printf("\n------------------------------------\n");
        
        printf("\n5 - Densidade Populacional:\n");
        printf("\nCarta 01 - %s (%s): %.2lf hab/km2", nomeCidade1, codigoCarta1, densidadePopulacional1);
        printf("\nCarta 02 - %s (%s): %.2lf hab/km2", nomeCidade2, codigoCarta2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("\nCarta 01 (%s) Venceu !!!", nomeCidade1);
        }else if (densidadePopulacional1 > densidadePopulacional2){
            printf("\nCarta 02 (%s) Venceu !!!", nomeCidade2);
        }else{
            printf("\nEmpate !!!");
        }
        
        printf("\n------------------------------------\n");
        
        printf("\n6 - PIB per Capita:\n");
        printf("\nCarta 01 - %s (%s): $%.2lf", nomeCidade1, codigoCarta1, pibPerCapita1);
        printf("\nCarta 02 - %s (%s): $%.2lf", nomeCidade2, codigoCarta2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2) {
            printf("\nCarta 01 (%s) Venceu !!!", nomeCidade1);
        }else if (pibPerCapita1 < pibPerCapita2){
            printf("\nCarta 02 (%s) Venceu !!!", nomeCidade2);
        }else{
            printf("\nEmpate !!!");
        }
        printf("\n------------------------------------\n");


return 0;

}
