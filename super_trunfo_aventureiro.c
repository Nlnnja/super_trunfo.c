//super trunfo aventureiro
#include <stdio.h>

int main(){
    //Decidindo as variáveis das cartas 1 e 2
    char estado, estado2;//Estado
    char codigoDaCarta[4], codigoDaCarta2[4];//Código da carta
    char nomeCidade[20], nomeCidade2[20];//Nome da Cidade
    int populacao, populacao2;//População
    int pontosTuristicos, pontosTuristicos2;//Pontos Turísticos
    float areaCidade, areaCidade2;//Área da Cidade
    float pib, pib2;//Pib da Cidade
    float densidadePopulacional, densidadePopulacional2;//Densidade Populacional da Cidade
    float pibPerCapita, pibPerCapita2;//Pib per Capita da Cidade

    //Carta 1
    //Decidindo os dados da carta 1
    printf("****Carta 1****\n");
    printf("Digite o Estado (Letra A a H): \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta (A01 B02...): \n");
    scanf(" %s", &codigoDaCarta);

    printf("Digite o nome da Cidade: \n");
    getchar();
    scanf(" %[^\n]", nomeCidade);

    printf("Digite a população da Cidade: \n");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &areaCidade);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos);
    printf(" \n");

    //calculando Pib per Capita e Densidade pop. da carta 1
    densidadePopulacional = populacao / areaCidade;
    pibPerCapita = (pib / (float) populacao * 1000000000);

    //Apresentando os dados da carta 1
    printf(" --- Carta 1 --- \n");
    printf("Nome do Estado: %c \n", estado);
    printf("Código da Carta: %s \n", codigoDaCarta);
    printf("Nome da Cidade: %s \n", nomeCidade);
    printf("Número de Habitantes: %d \n", populacao);
    printf("Área da Cidade : %.2f km² \n", areaCidade);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Pontos Turísticos: %d \n", pontosTuristicos), 
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional);
    printf("Pib per Capita: %.2f reais \n", pibPerCapita), printf(" \n");

    //Carta 2
    //Decidindo os dados da carta 2
    printf("****Carta 2****\n");
    printf("Digite o Estado (Letra A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (A01 B02...): \n");
    scanf(" %s", &codigoDaCarta2);

    printf("Digite o nome da Cidade: \n");
    getchar();
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população da Cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &areaCidade2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos2);
    printf(" \n");

    //calculando Pib per Capita e Densidade pop. da carta 2
    densidadePopulacional2 = populacao2 / areaCidade2;
    pibPerCapita2 = (pib2 / (float) populacao2 * 1000000000);

    //Apresentando os dados da carta 2

    printf(" --- Carta 2 --- \n");
    printf("Nome do Estado: %c \n", estado2);
    printf("Código da Carta: %s \n", codigoDaCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("Número de Habitantes: %d \n", populacao2);
    printf("Área da Cidade : %.2f km² \n", areaCidade2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("Pib per Capita: %.2f reais \n", pibPerCapita2);

    return 0;
}