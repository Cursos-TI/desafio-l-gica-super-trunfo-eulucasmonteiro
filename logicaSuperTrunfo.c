#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char Estado_1, Estado_2;
    char Codigo_1, Codigo_2;
    char Cidade_1 [25], Cidade_2 [25];  
    int Populacao_1, Populacao_2;
    float Area_1, Area_2;
    float PIB_1, PIB_2;
    int Pontos_Turisticos_1, Pontos_Turisticos_2;
    float Densidade_Populacional_1, Densidade_Populacional_2;
    float PIB_per_capita_1, PIB_per_capita_2;
    float inversodensidade_1, inversodensidade_2;

    Densidade_Populacional_1 = (float) Populacao_1 / Area_1;
    PIB_per_capita_1 = (PIB_1 * 1000000000.0) / Populacao_1;   
    inversodensidade_1 = 1 / Densidade_Populacional_1;
    float superpoder_1 = inversodensidade_1 + PIB_per_capita_1 + Pontos_Turisticos_1 + Area_1 + PIB_1 + Populacao_1;
    
    Densidade_Populacional_2 = (float) Populacao_2 / Area_2;        
    PIB_per_capita_2 = (PIB_2 * 1000000000.0) / Populacao_2;    
    inversodensidade_2 = 1 / Densidade_Populacional_2;
    float superpoder_2 = inversodensidade_2 + PIB_per_capita_2 + Pontos_Turisticos_2 + Area_2 + PIB_2 + Populacao_2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    printf("Super Trunfo\n");
    printf("Insira abaixo os dados de sua carta\n");

    printf("Digite o estado: ");
    scanf(" %c", &Estado_1);

    printf("Digite o codigo: ");
    scanf(" %c", &Codigo_1);

    printf("Digite a cidade: ");
    scanf("%s", Cidade_1);   

    printf("Digite a populacao: ");
    scanf("%d", &Populacao_1);
    
    printf("Digite a area 'em km2': ");
    scanf("%f", &Area_1); 

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &PIB_1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &Pontos_Turisticos_1);

    printf("\n\nCarta criada com sucesso!\n");
    printf("Insira os dados de sua segunda carta\n");
    
    printf("\nDigite o estado: ");
    scanf(" %c", &Estado_2);

    printf("Digite o codigo: ");
    scanf(" %c", &Codigo_2);  

    printf("Digite a cidade: ");
    scanf("%s", Cidade_2);
    
    printf("Digite a populacao: ");
    scanf("%d", &Populacao_2);

    printf("Digite a area 'em km2': ");
    scanf("%f", &Area_2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &PIB_2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &Pontos_Turisticos_2);
    

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    printf ("A carta 1 %s possui pib per capita de %.2f. \n", Cidade_1, PIB_per_capita_1);
    printf ("A carta 2 %s possui pib per capita de %.2f. \n", Cidade_2, PIB_per_capita_2);
    if (PIB_per_capita_1 > PIB_per_capita_2){
        printf ("A carta 1 venceu por ter maior pib per capita \n");
    }
    else { 
        printf ("A carta 2 venceu por ter maior pib per capita \n");
    }

    return 0;
}
