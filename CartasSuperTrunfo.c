#include <stdio.h>
int main() {
    
    //carta 1
	char ESTADO1;
	char CODIGO1[4];
    char NOME1[20];
    int POPULACAO1;
    float AREA1;
    float PIB1;
    int NUMERO_DE_PONTOS_TURISTICOS1;

    //carta 2
	char ESTADO2;
	char CODIGO2[4];
    char NOME2[20];
    int POPULACAO2;
    float AREA2;
    float PIB2;
    int NUMERO_DE_PONTOS_TURISTICOS2;

	// ENTRADA DE DADOS DA CARTA1
	printf("Cadastro da Carta1 \n");
	printf("Estado(letra de A a H): \n");
	scanf(" %c", &ESTADO1);

	printf("Codigo da Carta: ");
	scanf(" %s[^\n]",CODIGO1);

    printf("Nome da Cidade: \n");
    scanf("%s", NOME1);

    printf("Populacao: \n");
    scanf("%d", &POPULACAO1);

    printf("Area: \n");
    scanf("%f", &AREA1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &NUMERO_DE_PONTOS_TURISTICOS1);


    //Saída de dados Carta 1
    printf("Estado: %c \n", ESTADO1);
    printf("Código: %s \n", CODIGO1);
    printf("Nome da Cidade: %s \n", NOME1);
    printf("População: %d \n", POPULACAO1);
    printf("Área: %f \n", AREA1);
    printf("PIB: %f \n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", NUMERO_DE_PONTOS_TURISTICOS1);


    //entrada de dados Carta 2
    printf("Cadastro da Carta2 \n");
	printf("Estado(letra de A a H): \n");
	scanf(" %c", &ESTADO2);

	printf("Codigo da Carta: ");
	scanf(" %s[^\n]",CODIGO2);

    printf("Nome da Cidade: \n");
    scanf("%s", NOME2);

    printf("População: \n");
    scanf("%d", &POPULACAO2);

    printf("Area: \n");
    scanf("%f", &AREA2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &NUMERO_DE_PONTOS_TURISTICOS2);

    return 0;
}
