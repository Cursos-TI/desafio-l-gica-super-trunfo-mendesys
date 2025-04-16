#include <stdio.h>

int main() {
    //Declarando variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5], cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, percapita1, percapita2, densidade1, densidade2, superpoder1, superpoder2, soma1, soma2;
    int pontosturisticos1, pontosturisticos2, primeiroAtributo, segundoAtributo;


    //Operação soma dos atributos da Carta 1
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + percapita1 + densidade1;


    //Entrada dos dados da Carta 1
    printf("\nCARTA 1\n");
    printf("Digite uma letra para representar o Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o Código: \n");
    scanf("%s", codigo1);

    printf("Digite a Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a População: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);


    //Operação divisão para determinar os valores dos atributos "PIB per Capita" e "Densidade Populacional"
    percapita1 = pib1 / populacao1;
    densidade1 = populacao1 / area1;


    //Operação soma dos atributos da Carta 2
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + percapita2 + densidade2;


    //Entrada dos dados da Carta 2
    printf("\nCARTA 2\n");
    printf("Digite uma letra para representar o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código: \n");
    scanf("%s", codigo2);

    printf("Digite a Cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a População: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);


    //Operação divisão para determinar os valores dos atributos "PIB per Capita" e "Densidade Populacional"
    percapita2 = pib2 / populacao2;
    densidade2 = populacao2 / area2;


    //Imprimindo na tela a saída dos dados da Carta 1
    printf("\n***CARTA 1***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f milhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Super Poder: %f\n", superpoder1);
    
    
    //Imprimindo na tela a saída dos dados da Carta 2
    printf("\n***CARTA 2***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f milhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Super Poder: %f\n", superpoder2);



    //Comparando as cartas 1 e 2 e imprimindo a saída
    printf("\n**Comparação das Cartas**\n");
    printf("Se o resultado da comparação for 1, a carta 1 venceu. Se o resultado for 0, a carta 2 venceu.\n");
    printf("\n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("PIB per Capita: %d\n", percapita1 > percapita2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);
    printf("\n");



    //Comparando cartas com múltiplos atributos
    //Menu interativo para que o usuário possa escolher um atributo para comparar
    printf("\n***Comparação das Cartas com múltiplos atributos***\n");
    printf(" **Escolha um atributo** \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &primeiroAtributo);


    //Menu interativo e dinâmico para que o usuário possa escolher um segundo atributo para comparar
    switch (primeiroAtributo) {
        case 1:
        printf("\n **Escolha outro atributo para comparar** \n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &segundoAtributo);
        printf("\n");
        if (segundoAtributo == 2) {
            printf("Opções: %d e %d - Você escolheu os atributos População e Área.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 3) {
            printf("Opções: %d e %d - Você escolheu os atributos População e PIB.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 4) {
            printf("Opções: %d e %d - Você escolheu os atributos População e Pontos Turísticos.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 5) {
            printf("Opções: %d e %d - Você escolheu os atributos População e Densidade Populacional.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == primeiroAtributo) {
            printf("\nVocê escolheu o mesmo atributo!. Tente novamente...\n");
            printf("\n");
            return 0;
        } else if (segundoAtributo == 0 || segundoAtributo >= 6) {
            printf("\nOpção inválida!\n");
            printf("\n");
            return 0;            
        }
        break;

        case 2:
        printf("\n **Escolha outro atributo para comparar** \n");
        printf("1 - Populacao\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &segundoAtributo);
        printf("\n");
        if (segundoAtributo == 1) {
            printf("Opções: %d e %d - Você escolheu os atributos Área e População.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 3) {
            printf("Opções: %d e %d - Você escolheu os atributos Área e PIB.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 4) {
            printf("Opções: %d e %d - Você escolheu os atributos Área e Pontos Turísticos.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 5) {
            printf("Opções: %d e %d - Você escolheu os atributos Área e Densidade Populacional.\n", primeiroAtributo, segundoAtributo);
        } else if (primeiroAtributo == segundoAtributo) {
            printf("\nVocê escolheu o mesmo atributo!. Tente novamente...\n");
            printf("\n");
            return 0;
        } else if (segundoAtributo == 0 || segundoAtributo >= 6) {
            printf("\nOpção inválida!\n");
            printf("\n");
            return 0;            
        }
        break;

        case 3:
        printf("\n **Escolha outro atributo para comparar** \n");
        printf("1 - Populacao\n");
        printf("2 - Área\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &segundoAtributo);
        printf("\n");
        if (segundoAtributo == 1) {
            printf("Opções: %d e %d - Você escolheu os atributos PIB e População.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 2) {
            printf("Opções: %d e %d - Você escolheu os atributos PIB e Área.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 4) {
            printf("Opções: %d e %d - Você escolheu os atributos PIB e Pontos Turísticos.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 5) {
            printf("Opções: %d e %d - Você escolheu os atributos PIB e Densidade Populacional.\n", primeiroAtributo, segundoAtributo);
        } else if (primeiroAtributo == segundoAtributo) {
            printf("\nVocê escolheu o mesmo atributo!. Tente novamente...\n");
            printf("\n");
            return 0;
        } else if (segundoAtributo == 0 || segundoAtributo >= 6) {
            printf("\nOpção inválida!\n");
            printf("\n");
            return 0;            
        }
        break;

        case 4:
        printf("\n **Escolha outro atributo para comparar** \n");
        printf("1 - Populacao\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("5 - Densidade Populacional\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &segundoAtributo);
        printf("\n");
        if (segundoAtributo == 1) {
            printf("Opções: %d e %d - Você escolheu os atributos Pontos Turísticos e População.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 2) {
            printf("Opções: %d e %d - Você escolheu os atributos Pontos Turísticos e Área.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 3) {
            printf("Opções: %d e %d - Você escolheu os atributos Pontos Turísticos e PIB.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 5) {
            printf("Opções: %d e %d - Você escolheu os atributos Pontos Turísticos e Densidade Populacional.\n", primeiroAtributo, segundoAtributo);
        } else if (primeiroAtributo == segundoAtributo) {
            printf("\nVocê escolheu o mesmo atributo!. Tente novamente...\n");
            printf("\n");
            return 0;
        } else if (segundoAtributo == 0 || segundoAtributo >= 6) {
            printf("\nOpção inválida!\n");
            printf("\n");
            return 0;            
        }
        break;

        case 5:
        printf("\n **Escolha outro atributo para comparar** \n");
        printf("1 - Populacao\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &segundoAtributo);
        printf("\n");
        if (segundoAtributo == 1) {
            printf("Opções: %d e %d - Você escolheu os atributos Densidade Populacional e População.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 2) {
            printf("Opções: %d e %d - Você escolheu os atributos Densidade Populacional e Área.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 3) {
            printf("Opções: %d e %d - Você escolheu os atributos Densidade Populacional e PIB.\n", primeiroAtributo, segundoAtributo);
        } else if (segundoAtributo == 4) {
            printf("Opções: %d e %d - Você escolheu os atributos Densidade Populacional e Pontos Turísticos.\n", primeiroAtributo, segundoAtributo);
        } else if (primeiroAtributo == segundoAtributo) {
            printf("\nVocê escolheu o mesmo atributo!. Tente novamente...\n");
            printf("\n");
            return 0;
        } else if (segundoAtributo == 0 || segundoAtributo >= 6) {
            printf("\nOpção inválida!\n");
            printf("\n");
            return 0;            
        }
        break;

        default:
        printf("\nOpção inválida!\n");
        printf("\n");
        return 0;
        break;        
    }

    

 
    switch (primeiroAtributo) {
        case 1:
        printf("\n       ***CARTA 1***                      ***CARTA 2***         \n");
        printf("Cidade: %s                                  ", cidade1);
        printf("Cidade: %s\n", cidade2);
        printf("População: %lu                           ", populacao1);
        printf("População: %lu\n", populacao2);
        break;
        
        case 2:
        printf("\n       ***CARTA 1***                      ***CARTA 2***         \n");
        printf("Cidade: %s                                  ", cidade1);
        printf("Cidade: %s\n", cidade2);
        printf("Área: %f                         ", area1);
        printf("Área: %f\n", area2);
        break;
        
        case 3:
        printf("\n       ***CARTA 1***                      ***CARTA 2***         \n");
        printf("Cidade: %s                                  ", cidade1);
        printf("Cidade: %s\n", cidade2);
        printf("PIB: %f                         ", pib1);
        printf("PIB: %f\n", pib2);
        break;

        case 4:
        printf("\n       ***CARTA 1***                      ***CARTA 2***         \n");
        printf("Cidade: %s                                  ", cidade1);
        printf("Cidade: %s\n", cidade2);
        printf("Pontos Turísticos: %d                         ", pontosturisticos1);
        printf("Pontos Turísticos: %d\n", pontosturisticos2);
        break;

        case 5:
        printf("\n       ***CARTA 1***                      ***CARTA 2***         \n");
        printf("Cidade: %s                                  ", cidade1);
        printf("Cidade: %s\n", cidade2);
        printf("Densidade Populacional: %.2f                         ", densidade1);
        printf("Densidade Populacional: %.2f\n", densidade2);
        break;

        default:
        printf("\nOpção inválida!\n");
        printf("\n");
        return 0;
        break;
    }


    //Operação Soma dos atributos de cada carta
    switch (segundoAtributo) {
        case 1:
        printf("População: %lu                     ", populacao1);
        printf("População: %lu\n", populacao2);
        if (primeiroAtributo == 2) {
            printf("Soma dos atributos: %.2f         ", soma1 = populacao1 + area1);
            printf("Soma dos atributos: %.2f\n", soma2 = populacao2 + area2);
        } else if (primeiroAtributo == 3) {
            printf("Soma dos atributos: %.2f         ", soma1 = populacao1 + pib1);
            printf("Soma dos atributos: %.2f\n", soma2 = populacao2 + pib2);
        } else if (primeiroAtributo == 4) {
            printf("Soma dos atributos: %.2f         ", soma1 = populacao1 + pontosturisticos1);
            printf("Soma dos atributos: %.2f\n", soma2 = populacao2 + pontosturisticos2);
        } else if (primeiroAtributo == 5) {
            printf("Soma dos atributos: %.2f         ", soma1 = populacao1 + densidade1);
            printf("Soma dos atributos: %.2f\n", soma2 = populacao2 + densidade2);
        }
        break;
        
        case 2:
        printf("Área: %f km²                     ", area1);
        printf("Área: %f km²\n", area2);
        if (primeiroAtributo == 1) {
            printf("Soma dos atributos: %.2f         ", soma1 = area1 + populacao1);
            printf("Soma dos atributos: %.2f\n", soma2 = area2 + populacao2);
        } else if (primeiroAtributo == 3) {
            printf("Soma dos atributos: %.2f         ", soma1 = area1 + pib1);
            printf("Soma dos atributos: %.2f\n", soma2 = area2 + pib2);
        } else if (primeiroAtributo == 4) {
            printf("Soma dos atributos: %.2f         ", soma1 = area1 + pontosturisticos1);
            printf("Soma dos atributos: %.2f\n", soma2 = area2 + pontosturisticos2);
        } else if (primeiroAtributo == 5) {
            printf("Soma dos atributos: %.2f         ", soma1 = area1 + densidade1);
            printf("Soma dos atributos: %.2f\n", soma2 = area2 + densidade2);
        }
        break;
        
        case 3:
        printf("PIB: %f                     ", pib1);
        printf("PIB: %f\n", pib2);
        if (primeiroAtributo == 1) {
            printf("Soma dos atributos: %.2f         ", soma1 = pib1 + populacao1);
            printf("Soma dos atributos: %.2f\n", soma2 = pib2 + populacao2);
        } else if (primeiroAtributo == 2) {
            printf("Soma dos atributos: %.2f         ", soma1 = pib1 + area1);
            printf("Soma dos atributos: %.2f\n", soma2 = pib2 + area2);
        } else if (primeiroAtributo == 4) {
            printf("Soma dos atributos: %.2f         ", soma1 = pib1 + pontosturisticos1);
            printf("Soma dos atributos: %.2f\n", soma2 = pib2 + pontosturisticos2);
        } else if (primeiroAtributo == 5) {
            printf("Soma dos atributos: %.2f         ", soma1 = pib1 + densidade1);
            printf("Soma dos atributos: %.2f\n", soma2 = pib2 + densidade2);
        }
        break;

        case 4:
        printf("Pontos Turísticos: %d                     ", pontosturisticos1);
        printf("Pontos Turísticos: %d\n", pontosturisticos2);
        if (primeiroAtributo == 1) {
            printf("Soma dos atributos: %.2f         ", soma1 = pontosturisticos1 + populacao1);
            printf("Soma dos atributos: %.2f\n", soma2 = pontosturisticos2 + populacao2);
        } else if (primeiroAtributo == 2) {
            printf("Soma dos atributos: %.2f         ", soma1 = pontosturisticos1 + area1);
            printf("Soma dos atributos: %.2f\n", soma2 = pontosturisticos2 + area2);
        } else if (primeiroAtributo == 3) {
            printf("Soma dos atributos: %.2f         ", soma1 = pontosturisticos1 + pib1);
            printf("Soma dos atributos: %.2f\n", soma2 = pontosturisticos2 + pib2);
        } else if (primeiroAtributo == 5) {
            printf("Soma dos atributos: %.2f         ", soma1 = pontosturisticos1 + densidade1);
            printf("Soma dos atributos: %.2f\n", soma2 = pontosturisticos2 + densidade2);
        }
        break;

        case 5:
        printf("Densidade Populacional: %.2f                     ", densidade1);
        printf("Densidade Populacional: %.2f\n", densidade2);
        if (primeiroAtributo == 1) {
            printf("Soma dos atributos: %.2f         ", soma1 = densidade1 + populacao1);
            printf("Soma dos atributos: %.2f\n", soma2 = densidade2 + populacao2);
        } else if (primeiroAtributo == 2) {
            printf("Soma dos atributos: %.2f         ", soma1 = densidade1 + area1);
            printf("Soma dos atributos: %.2f\n", soma2 = densidade2 + area2);
        } else if (primeiroAtributo == 3) {
            printf("Soma dos atributos: %.2f         ", soma1 = densidade1 + pib1);
            printf("Soma dos atributos: %.2f\n", soma2 = densidade2 + pib2);
        } else if (primeiroAtributo == 4) {
            printf("Soma dos atributos: %.2f         ", soma1 = densidade1 + pontosturisticos1);
            printf("Soma dos atributos: %.2f\n", soma2 = densidade2 + pontosturisticos2);
        }
        break;

        default:
        printf("\nOpção inválida!\n");
        printf("\n");
        return 0;
        break;
    }


    //Comparação da Soma dos atributos da Carta 1 com a Carta 2
    if (soma1 == soma2) {
        printf("\n               <<< EMPATE! >>>\n");
        printf("\n");    
    } else {
    soma1 > soma2 ? printf("\n               <<< CARTA 1 (%s) VENCEU! >>>\n", cidade1) : printf("\n               <<< CARTA 2 (%s) VENCEU! >>>\n", cidade2);
    printf("\n");
    }

    return 0;
}