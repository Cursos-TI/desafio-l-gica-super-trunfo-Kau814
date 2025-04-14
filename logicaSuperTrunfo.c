#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char Estado;
    char cidade[20];
    char codigo [5];
    int  NPT1, NPT2;
    unsigned int populacao1, populacao2;
    float KM1, KM2, PIB1, PIB2;
    float media1c1, media2c1, media1c2, media2c2;
    float supertrunfo1, supertrunfo2;

    
    // Cadastro das Cartas: 
    printf("Digite o Estado da Carta 1: \n");
    scanf("%s", &Estado);
    printf("Digite a Cidade da Carta 1: \n");
    scanf("%s", &cidade);
    printf("Digite o Código da carta 1: \n");
    scanf("%s", &codigo);
    printf("Digite a População da Carta 1: \n");
    scanf("%u", &populacao1);
    printf("Digite o Número de Pontos Turísticos da Carta 1: \n");
    scanf("%d", &NPT1);
    printf("Digite a Área em km² da Carta 1: \n");
    scanf("%f", &KM1);
    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &PIB1);

    media1c1 = (populacao1 / KM1);
    printf("A Densidade populacional da carta 1 é: %.2f HAB/KM²\n", media1c1 );
    media2c1 = (PIB1 / populacao1);
    printf("O PIB per Capita da carta 1 é: %2.f Reais\n", media2c1);
    supertrunfo1 = (float)(populacao1 + PIB1 + media2c1 + KM1 + NPT1);
    printf("SEU SUPER PODER É DE: %f\n", supertrunfo1);
    
    //cadastro carta 2
    printf("Digite o Estado da Carta 2: \n");
    scanf("%s", &Estado);
    printf("Digite a Cidade da Carta 2: \n");
    scanf("%s", &cidade);
    printf("Digite o Código da carta 2: \n");
    scanf("%s", &codigo);
    printf("Digite a População da Carta 2: \n");
    scanf("%u", &populacao2);
    printf("Digite o Número de Pontos Turísticos da Carta 2: \n");
    scanf("%d", &NPT2);
    printf("Digite a Área em km² da Carta 2: \n");
    scanf("%f", &KM2);
    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &PIB2);

    media1c2 = (populacao2 / KM2);
    printf("A Densidade populacional da carta 2 é: %.2f HAB/KM²\n", media1c2 );
    media2c2 = (PIB2 / populacao2);
    printf("O PIB per Capita da carta 2 é: %2.f Reais\n", media2c2);
    supertrunfo2 = (float)(populacao2 + PIB2 + media2c2 + KM2 + NPT2);
    printf("SEU SUPER PODER É DE: %f\n", supertrunfo2);

    // Comparação de Cartas:
    if(populacao1 > populacao2) {
        printf("A Carta 1 Venceu na População!!!!\n");
    } else {
        printf("A Carta 2 Venceu na População!!!!\n");
    }

    if(KM1 > KM2) {
        printf("A Carta 1 Venceu na Área!!!!\n");
    } else {
        printf("A Carta 2 Venceu na Área!!!!\n");
    }

    if(NPT1 > NPT2) {
        printf("A Carta 1 Venceu nos Pontos Turísticos!!!!\n");
    } else {
        printf("A Carta 2 Venceu nos Pontos Turísticos!!!!\n");
    }

    if(PIB1 > PIB2) {
        printf("A Carta 1 Venceu no PIB!!!!\n");
    } else {
        printf("A Carta 2 Venceu no PIB!!!!\n");
    }


    if(media1c1 > media1c2) {
        printf("A Carta 1 Venceu no Densidade Populacional!!!!\n");
    } else {
        printf("A Carta 2 Venceu na Densidade Populacional!!!!\n");
    }

    if(media2c2 < media2c2) {
        printf("A Carta 1 Venceu no Per Capita!!!!\n");
    } else {
        printf("A Carta 2 Venceu no Per Capita!!!!\n");

    // Exibição dos Resultados:
    if(supertrunfo1 > supertrunfo2) {
        printf("A Carta 1 foi a Campeã!!!");
    } else {
        printf("A Carta 2 foi a Campeã!!!");
    }

    return 0;
}
