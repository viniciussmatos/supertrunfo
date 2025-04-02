#include <stdio.h>
#include <string.h>

int main(){
    printf("Desafio Super Trunfo - Cidades\n");

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ptur1, ptur2;
    float denpop1, denpop2;
    float pibpc1, pibpc2;
     
/* ----------------------------------------------------------------------------------------------------------
// SOLICITA AO USUÁRIO A ATRIBUIÇÃO DE VALOR ÀS VARIÁVEIS PARA CARTA 1
    printf("Digite o estado da cidade da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]s", cidade1); // [^\n] permite identificar o espaço no nome da cidade

    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade da Carta 1: ");
    scanf("%d", &ptur1);

// SOLICITA AO USUÁRIO A ATRIBUIÇÃO DE VALOR ÀS VARIÁVEIS PARA CARTA 2
    printf("Digite o estado da cidade da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]s", cidade2); // [^\n] permite identificar o espaço no nome da cidade

    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade da Carta 2: ");
    scanf("%d", &ptur2);
------------------------------------------------------------------------------------------------------------*/

// ATRIBUI VALOR PARA CADA CARTA SEM USAR SCANF PARA FACILITAR O TESTE DO CÓDIGO
// DADOS DA CARTA 1
estado1 = 'A';
strcpy(codigo1, "A01"); // STRCPY PERMITE COPIAR O CONTEUDO DA STRING 'A01' PARA O ARRAY 'codigo1'. É necessário incluir a biblioteca 'string.h'
strcpy(cidade1, "São Paulo");
populacao1 = 12325000;
area1 = 1521.11;
pib1 = 699.28;
ptur1 = 50;

// DADOS DA CARTA 2
estado2 = 'B';
strcpy(codigo2, "B02");
strcpy(cidade2, "Rio de Janeiro");
populacao2 = 6748000;
area2 = 1200.25;
pib2 = 300.50;
ptur2 = 30;

// CALCULA A DENSIDADE POPULACIONAL E O PIB PER CAPITA DAS CIDADES
    denpop1 = (float) populacao1 / area1;
    denpop2 = (float) populacao2 / area2;
    pibpc1 = (pib1 / (float) populacao1) * 1000000000;
    pibpc2 = (pib2 / (float) populacao2) * 1000000000;

// CALCULA SUPER PODER
    float superpoder1 = (float) populacao1 + area1 + pib1 + (float) ptur1 + pibpc1 + (1 / denpop1);
    float superpoder2 = (float) populacao2 + area2 + pib2 + (float) ptur2 + pibpc2 + (1 / denpop2);

// IMPRIME OS DADOS DA CARTA 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ptur1);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);
    printf("Super Poder: %.2f\n", superpoder1);

printf("\n");

// IMPRIME OS DADOS DA CARTA 2
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ptur2);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("Super Poder: %.2f\n", superpoder2);

printf("\n");

// COMPARA OS DADOS DAS CARTAS
    int r_populacao = populacao1 > populacao2;
    float r_area = area1 > area2;
    float r_pib = pib1 > pib2;
    int r_ptur = ptur1 > ptur2;
    float r_denpop = denpop1 < denpop2;
    float r_pibpc = pibpc1 > pibpc2;
    float r_superpoder = superpoder1 > superpoder2;

// VARIÁVEL PARA QUANTIFICAR VITÓRIAS. INICIA COM ZERO VITÓRIAS
    int vitorias_carta1 = 0;
    int vitorias_carta2 = 0;
    
        // POPULAÇÃO
        r_populacao == 1 ? vitorias_carta1++ : vitorias_carta2++;
    
        // ÁREA
        r_area == 1 ? vitorias_carta1++ : vitorias_carta2++;
    
        // PIB
        r_pib == 1 ? vitorias_carta1++ : vitorias_carta2++;
    
        // PONTOS TURÍSTICOS
        r_ptur == 1 ? vitorias_carta1++ : vitorias_carta2++;
    
        // DENSIDADE POPULACIONAL
        r_denpop == 1 ? vitorias_carta1++ : vitorias_carta2++;
    
        // PIB PER CAPTA
        r_pibpc == 1 ? vitorias_carta1++ : vitorias_carta2++;
    
        // SUPER PODER
        r_superpoder == 1 ? vitorias_carta1++ : vitorias_carta2++;


// PERMITE O JOGADOR ESCOLHER O ATRIBUTO QUE SERÁ COMPARADO
// EM CASO DE EMPATE, VENCERÁ A CARTA COM O MAIOR NÚMERO DE ATRIBUTOS VENCEDORES

    int escolha1, escolha2;
    float escolha1_Carta1, escolha1_Carta2;
    float escolha2_Carta1, escolha2_Carta2;

        // FORÇAR EMPATE PARA TESTAR O CÓDIGO
        //populacao1 = 100;
        //populacao2 = 100;

        //denpop1 = 100;
        //denpop2 = 100;

    printf("Escolha o primeiro atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &escolha1);

printf("\n");

        switch (escolha1){
            case 1:
                escolha1_Carta1 = populacao1;
                escolha1_Carta2 = populacao2;
                printf("População: Carta 1 (%s) = %d x Carta 2 (%s) = %d\n", cidade1, populacao1, cidade2, populacao2);
                break;
            case 2:
                escolha1_Carta1 = area1;
                escolha1_Carta2 = area2;            
                printf("Área: Carta 1 (%s) = %.2f km² x Carta 2 (%s) = %.2f km²\n", cidade1, area1, cidade2, area2);
                break;
            case 3:
                escolha1_Carta1 = pib1;
                escolha1_Carta2 = pib2;
                printf("PIB: Carta 1 (%s) = %.2f x Carta 2 (%s) = %.2f\n", cidade1, pib1, cidade2, pib2);
                break;
            case 4:
                escolha1_Carta1 = ptur1;
                escolha1_Carta2 = ptur2;
                printf("Pontos Turísticos: Carta 1 (%s) = %d x Carta 2 (%s) = %d\n", cidade1, ptur1, cidade2, ptur2);
                break;
            case 5:
                escolha1_Carta1 = -denpop1; //coloquei densidade populacional negativa para penalizar aquele que tiver a maior densidade populacional
                escolha1_Carta2 = -denpop2;
                printf("Densidade Populacional: Carta 1 (%s) = %.2f hab/km² x Carta 2 (%s) = %.2f hab/km²\n", cidade1, denpop1, cidade2, denpop2);
                break;
            case 6:
                escolha1_Carta1 = pibpc1;
                escolha1_Carta2 = pibpc2;
                printf("PIB per Capita: Carta 1 (%s) = %.2f reais x Carta 2 (%s) = %.2f reais\n", cidade1, pibpc1, cidade2, pibpc2);
                break;
            case 7:
                escolha1_Carta1 = superpoder1;
                escolha1_Carta2 = superpoder2;
                printf("Super Poder: Carta 1 (%s) = %.2f x Carta 2 (%s) = %.2f\n", cidade1, superpoder1, cidade2, superpoder2);
                break;
            default:
                printf("Opção inválida\n");
        }

printf("\n");

    printf("Escolha o segundo atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &escolha2);

printf("\n");

        switch (escolha2){
            case 1:
                escolha2_Carta1 = populacao1;
                escolha2_Carta2 = populacao2;
                printf("População: Carta 1 (%s) = %d x Carta 2 (%s) = %d\n", cidade1, populacao1, cidade2, populacao2);
                break;
            case 2:
                escolha2_Carta1 = area1;
                escolha2_Carta2 = area2;
                printf("Área: Carta 1 (%s) = %.2f km² x Carta 2 (%s) = %.2f km²\n", cidade1, area1, cidade2, area2);
                break;
            case 3:
                escolha2_Carta1 = pib1;
                escolha2_Carta2 = pib2;
                printf("PIB: Carta 1 (%s) = %.2f x Carta 2 (%s) = %.2f\n", cidade1, pib1, cidade2, pib2);
                break;
            case 4:
                escolha2_Carta1 = ptur1;
                escolha2_Carta2 = ptur2;
                printf("Pontos Turísticos: Carta 1 (%s) = %d x Carta 2 (%s) = %d\n", cidade1, ptur1, cidade2, ptur2);
                break;
            case 5:
                escolha2_Carta1 = -denpop1; //coloquei densidade populacional negativa para penalizar aquele que tiver a maior densidade populacional
                escolha2_Carta2 = -denpop2;
                printf("Densidade Populacional: Carta 1 (%s) = %.2f hab/km² x Carta 2 (%s) = %.2f hab/km²\n", cidade1, denpop1, cidade2, denpop2);
                break;
            case 6:
                escolha2_Carta1 = pibpc1;
                escolha2_Carta2 = pibpc2;
                printf("PIB per Capita: Carta 1 (%s) = %.2f reais x Carta 2 (%s) = %.2f reais\n", cidade1, pibpc1, cidade2, pibpc2);
                break;
            case 7:
                escolha2_Carta1 = superpoder1;
                escolha2_Carta2 = superpoder2;
                printf("Super Poder: Carta 1 (%s) = %.2f x Carta 2 (%s) = %.2f\n", cidade1, superpoder1, cidade2, superpoder2);
                break;
            default:
                printf("Opção inválida\n");
        }

printf("\n");

        float resultado_Carta1, resultado_Carta2;
        resultado_Carta1 = ((float) escolha1_Carta1 + (float) escolha2_Carta1);
        resultado_Carta2 = ((float) escolha1_Carta2 + (float) escolha2_Carta2);

        printf("A soma dos atributos da Carta 1 (%s) é %.2f\n\n", cidade1, resultado_Carta1);
        printf("A soma dos atributos da Carta 2 (%s) é %.2f\n\n", cidade2, resultado_Carta2);
        
        if (escolha1 == escolha2){
            printf("Escolha inválida. Escolha atributos diferentes.\n");
            } else if (resultado_Carta1 > resultado_Carta2){
                printf("### A Carta 1 (%s) venceu ###\n", cidade1);
            } else if (resultado_Carta1 < resultado_Carta2){
                printf("### A Carta 2 (%s) venceu ###\n", cidade2);
            } else {
                printf("Empate!! Vence a carta com maior pontuação.\n\n");
                if (vitorias_carta1 > vitorias_carta2){
                    printf("A Carta 1 possui %d vitórias a mais que a Carta 2.\n", vitorias_carta1 - vitorias_carta2);
                    printf("### A Carta 1 (%s) venceu ###\n\n", cidade1);
                } else {
                    printf("A Carta 2 possui %d vitórias a mais que a Carta 1\n", vitorias_carta2 - vitorias_carta1);
                    printf("### A Carta 2 (%s) venceu ###\n\n", cidade2);
                }
        }
}