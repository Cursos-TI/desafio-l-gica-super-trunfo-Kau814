#include <stdio.h>

int main(){
char país1, país2;
char cidade[20];
char codigo [5];
unsigned int populacao1, populacao2;
float KM1, KM2, PIB1, PIB2;
float densidade1, densidade2,percapita1, percapita2;
int escolhajogador, NPT1, NPT2;

// cadastro da carta 1
printf("***Bem-Vindo ao Super Trunfo***\n");
printf("Digite o País da Carta 1: \n");
scanf("%s", &país1);
printf("Digite a Cidade da Carta 1: \n");
scanf("%s", &cidade);
printf("Digite o Código da Carta 1: \n");
scanf("%s", &codigo);
printf("Digite a População da Carta 1: \n");
scanf("%f", &populacao1);
printf("Digite a Quantia de Pontos Turísticos da Carta 1: \n");
scanf("%d", &NPT1);
printf("Digite a área da cidade: \n");
scanf("%f", &KM1);
printf("Digite o PIB da cidade: \n");
scanf("%f", &PIB1);

densidade1 = (populacao1 / KM1);
printf("A Densidade Populacional da Carta 1 é: %.2f HAB/KM²\n", densidade1);

percapita1 = (PIB1 / populacao1);
printf("O PIB per Capita da Carta 1 é: %.2f Reais\n", percapita1);

// cadastro carta 2
printf("***Cadastro da Carta 2!***\n");
printf("Digite o País da Carta: \n");
scanf("%s", &país2);
printf("Digite a Cidade da Carta 2: \n");
scanf("%s", &cidade);
printf("Digite o Código da Carta 2: \n");
scanf("%s", &codigo);
printf("Digite a População da Carta 2: \n");
scanf("%f", &populacao2);
printf("Digite a Quantia de Pontos Turísticos da Carta 2: \n");
scanf("%d", &NPT2);
printf("Digite a área da cidade: \n");
scanf("%f", &KM2);
printf("Digite o PIB da cidade: \n");
scanf("%f", &PIB2);

densidade2 = (populacao2 / KM2);
printf("A Densidade Populacional da Carta 2 é: %.2f HAB/KM²\n", densidade2);

percapita2 = (PIB2 / populacao2);
printf("O PIB Per Capita da Cidade 2 é: %.2f Reais\n", percapita2);

//Escolha de Atributos de Comparação
printf("Escolha o Atributo que Deseja Comparar: \n");
printf("1. População\n");
printf("2. Pontos Turísticos\n");
printf("3. Área\n");
printf("4. PIB\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per Capita\n");
printf("Escolha: \n");
scanf("%d", &escolhajogador);

//código dos resultados da comparação
switch (escolhajogador)
{
case 1:
    printf("População\n");

    if (populacao1 > populacao2){
        printf("A Carta 1 Venceu no Atributo População com %f Pontos!\n", populacao1);
    } else if (populacao1 < populacao2)
    {
    printf("A Carta 2 Venceu no Atributo População com %f Pontos!\n", populacao2);
    } else {
        printf("Empate!\n");
    }
    break;

case 2:
    printf("Pontos Turísticos\n");

    if (NPT1 > NPT2)
    {
        printf("A Carta 1 Venceu No Atributo Pontos Turísticos com %d Pontos!\n", NPT1);
    } else if (NPT1 < NPT2) {
        printf("A Carta 2 Venceu no Atributo Pontos Turísticos com %d Pontos\n", NPT2);
    } else {
        printf("Empate!\n");
    }
    break;

case 3:
    printf("Área\n");

    if(KM1 > KM2){
        printf("A Carta 1 Venceu no Atributo Área com %2.f Pontos!\n", KM1);
    } else if(KM1 < KM2) {
        printf("A Carta 2 Venceu no Atributo Área com %2.f Pontos!\n", KM2);
    } else {
        printf("Empate!\n");
    }
    break;

case 4:
    printf("PIB\n");

    if (PIB1 > PIB2)
    {
        printf("A Carta 1 Venceu No Atributo PIB com %2.f Pontos!\n", PIB1);
    } else if(PIB1 < PIB2) {
        printf("a Carta 2 Venceu no Atributo PIB com %2.f Pontos!\n", PIB2);
    } else {
        printf("Empate!\n");
    }
    break;

case 5:
    printf("Densidade Populacional\n");


    if (densidade1 > densidade2)
    {
        printf("A Carta 2 Venceu no Atributo Densidade Populacional com %2.f Pontos!\n", densidade2);
    }else if(densidade1 < densidade2) {
        printf("A Carta 1 Venceu no Atributo Densidade Populacional com %2.f Pontos!\n", densidade1);
    }else {
        printf("Empate!\n");
    }
    break;

case 6:
    printf("PIB Per Capita\n");

    if (percapita1 > percapita2)
    {
        printf("A Carta 1 Venceu no Atributo PIB per Capita com %2.f Pontos!\n", percapita1);
    }else if(percapita1 < percapita2){
        printf("A Carta 2 Venceu no Atributo PIB per Capita com %2.f Pontos!\n", percapita2);
    } else {
        printf("Empate!\n");
    }
    break;

default:
    printf("Opção Inválida\n");
    break;
}

}