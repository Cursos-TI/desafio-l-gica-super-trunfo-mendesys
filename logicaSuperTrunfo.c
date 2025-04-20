#include <stdio.h>

int main() {
    //Declarando variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5], cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, percapita1, percapita2, densidade1, densidade2, superpoder1, superpoder2, soma1, soma2;
    int pontosturisticos1, pontosturisticos2, primeiroAtributo, segundoAtributo, resultado1, resultado2;


    //Operação soma dos atributos para obter o valor do Super Poder da Carta 1
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


    //Operação divisão para determinar os valores dos atributos "PIB per Capita" e "Densidade Populacional" da Carta 1
    percapita1 = pib1 / populacao1;
    densidade1 = populacao1 / area1;


    //Operação soma dos atributos para obter o valor do Super Poder da Carta 2
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


    //Operação divisão para determinar os valores dos atributos "PIB per Capita" e "Densidade Populacional" da Carta 2
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



    //Comparando cartas com múltiplos atributos
    //Menu interativo para que o usuário possa escolher um atributo para comparar
    printf("\nComparação das cartas com múltiplos atributos:\n");
    printf("\n   Escolha um atributo   \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Escolha: \n");
    scanf("%d", &primeiroAtributo);


    //Menu interativo e dinâmico para que o usuário possa escolher um segundo atributo para comparar
    switch (primeiroAtributo) {
        case 1:
        printf("\n   Escolha outro atributo para comparar   \n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("Escolha: \n");
        scanf("%d", &segundoAtributo);
        printf("\n");
        break;

        case 2:
        printf("\n   Escolha outro atributo para comparar   \n");
        printf("1 - População\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &segundoAtributo);
        printf("\n");
        break;

        case 3:
        printf("\n   Escolha outro atributo para comparar   \n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &segundoAtributo);
        printf("\n");
        break;

        case 4:
        printf("\n   Escolha outro atributo para comparar   \n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("5 - Densidade Populacional\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &segundoAtributo);
        printf("\n");
        break;

        case 5:
        printf("\n   Escolha outro atributo para comparar   \n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &segundoAtributo);
        printf("\n");
        break;

        default:
        printf("\nOpção inválida!\n");
        printf("\n");
        return 0;
        break;
    }


    
    if (primeiroAtributo == segundoAtributo) {
        printf("\nVocê escolheu o mesmo atributo!. Tente novamente...\n");
        printf("\n");
        return 0;
    } else if (primeiroAtributo == 1) {
        switch (segundoAtributo) {
        case 2:
            printf("Opções: %d e %d - Você escolheu os atributos População e Área.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("População: %lu\n", populacao1);
            printf("Área: %f\n", area1);
            printf("Soma dos atributos: %.2f\n", soma1 = populacao1 + area1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("População: %lu\n", populacao2);
            printf("Área: %f\n", area2);
            printf("Soma dos atributos: %.2f\n", soma2 = populacao2 + area2);

            resultado1 = populacao1 > populacao2 ? 1 : 0;
            if (populacao1 == populacao2) {
                resultado1 = 3;
            }
            resultado2 = area1 > area2 ? 1 : 0;
            if (area1 == area2) {
                resultado2 = 3;
            }
            break;

        case 3:
            printf("Opções: %d e %d - Você escolheu os atributos População e PIB.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("População: %lu\n", populacao1);
            printf("PIB: %f\n", pib1);
            printf("Soma dos atributos: %.2f\n", soma1 = populacao1 + pib1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("População: %lu\n", populacao2);
            printf("PIB: %f\n", pib2);
            printf("Soma dos atributos: %.2f\n", soma2 = populacao2 + pib2);

            resultado1 = populacao1 > populacao2 ? 1 : 0;
            if (populacao1 == populacao2) {
                resultado1 = 3;
            }
            resultado2 = pib1 > pib2 ? 1 : 0;
            if (pib1 == pib2) {
                resultado2 = 3;
            }
            break;

        case 4:
            printf("Opções: %d e %d - Você escolheu os atributos População e Pontos Turísticos.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("População: %lu\n", populacao1);
            printf("Pontos Turísticos: %d\n", pontosturisticos1);
            printf("Soma dos atributos: %.2f\n", soma1 = populacao1 + pontosturisticos1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("População: %lu\n", populacao2);
            printf("Pontos Turísticos: %d\n", pontosturisticos2);
            printf("Soma dos atributos: %.2f\n", soma2 = populacao2 + pontosturisticos2);

            resultado1 = populacao1 > populacao2 ? 1 : 0;
            if (populacao1 == populacao2) {
                resultado1 = 3;
            }
            resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            if (pontosturisticos1 == pontosturisticos2) {
                resultado2 = 3;
            }
            break;

        case 5:
            printf("Opções: %d e %d - Você escolheu os atributos População e Densidade Populacional.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("População: %lu\n", populacao1);
            printf("Densidade Populacional: %f\n", densidade1);
            printf("Soma dos atributos: %.2f\n", soma1 = populacao1 + densidade1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("População: %lu\n", populacao2);
            printf("Densidade Populacional: %f\n", densidade2);
            printf("Soma dos atributos: %.2f\n", soma2 = populacao2 + densidade2);

            resultado1 = populacao1 > populacao2 ? 1 : 0;
            if (populacao1 == populacao2) {
                resultado1 = 3;
            }
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            if (densidade1 == densidade2) {
                resultado2 = 3;
            }
            break;

        default:
            printf("\nOpção inválida!\n");
            printf("\n");
            return 0;
            break;
        }
    }
    

    


    if (primeiroAtributo == segundoAtributo) {
        printf("\nVocê escolheu o mesmo atributo!. Tente novamente...\n");
        printf("\n");
        return 0;
    } else if (primeiroAtributo == 2) {
        switch (segundoAtributo) {
        case 1:
            printf("Opções: %d e %d - Você escolheu os atributos Área e População.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("Área: %f\n", area1);
            printf("População: %lu\n", populacao1);
            printf("Soma dos atributos: %.2f\n", soma1 = area1 + populacao1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("Área: %f\n", area2);
            printf("População: %lu\n", populacao2);
            printf("Soma dos atributos: %.2f\n", soma2 = area2 + populacao2);

            resultado1 = area1 > area2 ? 1 : 0;
            if (area1 == area2) {
                resultado1 = 3;
            }
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            if (populacao1 == populacao2) {
                resultado2 = 3;
            }
            break;

        case 3:
            printf("Opções: %d e %d - Você escolheu os atributos Área e PIB.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("Área: %f\n", area1);
            printf("PIB: %f\n", pib1);
            printf("Soma dos atributos: %.2f\n", soma1 = area1 + pib1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("Área: %f\n", area2);
            printf("PIB: %f\n", pib2);
            printf("Soma dos atributos: %.2f\n", soma2 = area2 + pib2);

            resultado1 = area1 > area2 ? 1 : 0;
            if (area1 == area2) {
                resultado1 = 3;
            }
            resultado2 = pib1 > pib2 ? 1 : 0;
            if (pib1 == pib2) {
                resultado2 = 3;
            }
            break;

        case 4:
            printf("Opções: %d e %d - Você escolheu os atributos Área e Pontos Turísticos.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("Área: %f\n", area1);
            printf("Pontos Turísticos: %d\n", pontosturisticos1);
            printf("Soma dos atributos: %.2f\n", soma1 = area1 + pontosturisticos1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("Área: %f\n", area2);
            printf("Pontos Turísticos: %d\n", pontosturisticos2);
            printf("Soma dos atributos: %.2f\n", soma2 = area2 + pontosturisticos2);

            resultado1 = area1 > area2 ? 1 : 0;
            if (area1 == area2) {
                resultado1 = 3;
            }
            resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            if (pontosturisticos1 == pontosturisticos2) {
                resultado2 = 3;
            }
            break;

        case 5:
            printf("Opções: %d e %d - Você escolheu os atributos Área e Densidade Populacional.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("Área: %f\n", area1);
            printf("Densidade Populacional: %f\n", densidade1);
            printf("Soma dos atributos: %.2f\n", soma1 = area1 + densidade1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("Área: %f\n", area2);
            printf("Densidade Populacional: %f\n", densidade2);
            printf("Soma dos atributos: %.2f\n", soma2 = area2 + densidade2);

            resultado1 = area1 > area2 ? 1 : 0;
            if (area1 == area2) {
                resultado1 = 3;
            }
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            if (densidade1 == densidade2) {
                resultado2 = 3;
            }
            break;

        default:
            printf("\nOpção inválida!\n");
            printf("\n");
            return 0;
            break;
        }
    }



    if (primeiroAtributo == segundoAtributo) {
        printf("\nVocê escolheu o mesmo atributo!. Tente novamente...\n");
        printf("\n");
        return 0;
    } else if (primeiroAtributo == 3) {
        switch (segundoAtributo) {
        case 1:
            printf("Opções: %d e %d - Você escolheu os atributos PIB e População.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("PIB: %f\n", pib1);
            printf("População: %lu\n", populacao1);
            printf("Soma dos atributos: %.2f\n", soma1 = pib1 + populacao1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("PIB: %f\n", pib2);
            printf("População: %lu\n", populacao2);
            printf("Soma dos atributos: %.2f\n", soma2 = pib2 + populacao2);

            resultado1 = pib1 > pib2 ? 1 : 0;
            if (pib1 == pib2) {
                resultado1 = 3;
            }
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            if (populacao1 == populacao2) {
                resultado2 = 3;
            }
            break;

        case 2:
            printf("Opções: %d e %d - Você escolheu os atributos PIB e Área.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("PIB: %f\n", pib1);
            printf("Área: %f\n", area1);
            printf("Soma dos atributos: %.2f\n", soma1 = pib1 + area1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("PIB: %f\n", pib2);
            printf("Área: %f\n", area2);
            printf("Soma dos atributos: %.2f\n", soma2 = pib2 + area2);

            resultado1 = pib1 > pib2 ? 1 : 0;
            if (pib1 == pib2) {
                resultado1 = 3;
            }
            resultado2 = area1 > area2 ? 1 : 0;
            if (area1 == area2) {
                resultado2 = 3;
            }
            break;

        case 4:
            printf("Opções: %d e %d - Você escolheu os atributos PIB e Pontos Turísticos.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("PIB: %f\n", pib1);
            printf("Pontos Turísticos: %d\n", pontosturisticos1);
            printf("Soma dos atributos: %.2f\n", soma1 = pib1 + pontosturisticos1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("PIB: %f\n", pib2);
            printf("Pontos Turísticos: %d\n", pontosturisticos2);
            printf("Soma dos atributos: %.2f\n", soma2 = pib2 + pontosturisticos2);

            resultado1 = pib1 > pib2 ? 1 : 0;
            if (pib1 == pib2) {
                resultado1 = 3;
            }
            resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            if (pontosturisticos1 == pontosturisticos2) {
                resultado2 = 3;
            }
            break;

        case 5:
            printf("Opções: %d e %d - Você escolheu os atributos PIB e Densidade Populacional.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("PIB: %f\n", pib1);
            printf("Densidade Populacional: %f\n", densidade1);
            printf("Soma dos atributos: %.2f\n", soma1 = pib1 + densidade1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("PIB: %f\n", pib2);
            printf("Densidade Populacional: %f\n", densidade2);
            printf("Soma dos atributos: %.2f\n", soma2 = pib2 + densidade2);

            resultado1 = pib1 > pib2 ? 1 : 0;
            if (pib1 == pib2) {
                resultado1 = 3;
            }
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            if (densidade1 == densidade2) {
                resultado2 = 3;
            }
            break;

        default:
            printf("\nOpção inválida!\n");
            printf("\n");
            return 0;
            break;
        }
    }



    if (primeiroAtributo == segundoAtributo) {
        printf("\nVocê escolheu o mesmo atributo!. Tente novamente...\n");
        printf("\n");
        return 0;
    } else if (primeiroAtributo == 4) {
        switch (segundoAtributo) {
        case 1:
            printf("Opções: %d e %d - Você escolheu os atributos Pontos Turísticos e População.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("Pontos Turísticos: %d\n", pontosturisticos1);
            printf("População: %lu\n", populacao1);
            printf("Soma dos atributos: %.2f\n", soma1 = pontosturisticos1 + populacao1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("Pontos Turísticos: %d\n", pontosturisticos2);
            printf("População: %lu\n", populacao2);
            printf("Soma dos atributos: %.2f\n", soma2 = pontosturisticos2 + populacao2);

            resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            if (pontosturisticos1 == pontosturisticos2) {
                resultado1 = 3;
            }
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            if (populacao1 == populacao2) {
                resultado2 = 3;
            }
            break;

        case 2:
            printf("Opções: %d e %d - Você escolheu os atributos Pontos Turísticos e Área.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("Pontos Turísticos: %d\n", pontosturisticos1);
            printf("Área: %f\n", area1);
            printf("Soma dos atributos: %.2f\n", soma1 = pontosturisticos1 + area1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("Pontos Turísticos: %d\n", pontosturisticos2);
            printf("Área: %f\n", area2);
            printf("Soma dos atributos: %.2f\n", soma2 = pontosturisticos2 + area2);

            resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            if (pontosturisticos1 == pontosturisticos2) {
                resultado1 = 3;
            }
            resultado2 = area1 > area2 ? 1 : 0;
            if (area1 == area2) {
                resultado2 = 3;
            }
            break;

        case 3:
            printf("Opções: %d e %d - Você escolheu os atributos Pontos Turísticos e PIB.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("Pontos Turísticos: %d\n", pontosturisticos1);
            printf("PIB: %f\n", pib1);
            printf("Soma dos atributos: %.2f\n", soma1 = pontosturisticos1 + pib1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("Pontos Turísticos: %d\n", pontosturisticos2);
            printf("PIB: %f\n", pib2);
            printf("Soma dos atributos: %.2f\n", soma2 = pontosturisticos2 + pib2);

            resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            if (pontosturisticos1 == pontosturisticos2) {
                resultado1 = 3;
            }
            resultado2 = pib1 > pib2 ? 1 : 0;
            if (pib1 == pib2) {
                resultado2 = 3;
            }
            break;

        case 5:
            printf("Opções: %d e %d - Você escolheu os atributos Pontos Turísticos e Densidade Populacional.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("Pontos Turísticos: %d\n", pontosturisticos1);
            printf("Densidade Populacional: %f\n", densidade1);
            printf("Soma dos atributos: %.2f\n", soma1 = pontosturisticos1 + densidade1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("Pontos Turísticos: %d\n", pontosturisticos2);
            printf("Densidade Populacional: %f\n", densidade2);
            printf("Soma dos atributos: %.2f\n", soma2 = pontosturisticos2 + densidade2);

            resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            if (pontosturisticos1 == pontosturisticos2) {
                resultado1 = 3;
            }
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            if (densidade1 == densidade2) {
                resultado2 = 3;
            }
            break;

        default:
            printf("\nOpção inválida!\n");
            printf("\n");
            return 0;
            break;
        }
    }



    if (primeiroAtributo == segundoAtributo) {
        printf("\nVocê escolheu o mesmo atributo!. Tente novamente...\n");
        printf("\n");
        return 0;
    } else if (primeiroAtributo == 5) {
        switch (segundoAtributo) {
        case 1:
            printf("Opções: %d e %d - Você escolheu os atributos Densidade Populacional e População.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("Densidade Populacional: %f\n", densidade1);
            printf("População: %lu\n", populacao1);
            printf("Soma dos atributos: %.2f\n", soma1 = densidade1 + populacao1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("Densidade Populacional: %f\n", densidade2);
            printf("População: %lu\n", populacao2);
            printf("Soma dos atributos: %.2f\n", soma2 = densidade2 + populacao2);

            resultado1 = densidade1 < densidade2 ? 1 : 0;
            if (densidade1 == densidade2) {
                resultado1 = 3;
            }
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            if (populacao1 == populacao2) {
                resultado2 = 3;
            }
            break;

        case 2:
            printf("Opções: %d e %d - Você escolheu os atributos Densidade Populacional e Área.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("Densidade Populacional: %f\n", densidade1);
            printf("Área: %f\n", area1);
            printf("Soma dos atributos: %.2f\n", soma1 = densidade1 + area1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("Densidade Populacional: %f\n", densidade2);
            printf("Área: %f\n", area2);
            printf("Soma dos atributos: %.2f\n", soma2 = densidade2 + area2);

            resultado1 = densidade1 < densidade2 ? 1 : 0;
            if (densidade1 == densidade2) {
                resultado1 = 3;
            }
            resultado2 = area1 > area2 ? 1 : 0;
            if (area1 == area2) {
                resultado2 = 3;
            }
            break;

        case 3:
            printf("Opções: %d e %d - Você escolheu os atributos Densidade Populacional e PIB.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("Densidade Populacional: %f\n", densidade1);
            printf("PIB: %f\n", pib1);
            printf("Soma dos atributos: %.2f\n", soma1 = densidade1 + pib1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("Densidade Populacional: %f\n", densidade2);
            printf("PIB: %f\n", pib2);
            printf("Soma dos atributos: %.2f\n", soma2 = densidade2 + pib2);

            resultado1 = densidade1 < densidade2 ? 1 : 0;
            if (densidade1 == densidade2) {
                resultado1 = 3;
            }
            resultado2 = pib1 > pib2 ? 1 : 0;
            if (pib1 == pib2) {
                resultado2 = 3;
            }
            break;

        case 4:
            printf("Opções: %d e %d - Você escolheu os atributos Densidade Populacional e Pontos Turísticos.\n", primeiroAtributo, segundoAtributo);
            printf("\n**CARTA 1**\n");
            printf("Cidade: %s\n", cidade1);
            printf("Densidade Populacional: %f\n", densidade1);
            printf("Pontos Turísticos: %d\n", pontosturisticos1);
            printf("Soma dos atributos: %.2f\n", soma1 = densidade1 + pontosturisticos1);

            printf("\n**CARTA 2**\n");
            printf("Cidade: %s\n", cidade2);
            printf("Densidade Populacional: %f\n", densidade2);
            printf("Pontos Turísticos: %d\n", pontosturisticos2);
            printf("Soma dos atributos: %.2f\n", soma2 = densidade2 + pontosturisticos2);

            resultado1 = densidade1 < densidade2 ? 1 : 0;
            if (densidade1 == densidade2) {
                resultado1 = 3;
            }
            resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            if (pontosturisticos1 == pontosturisticos2) {
                resultado2 = 3;
            }
            break;

        default:
            printf("\nOpção inválida!\n");
            printf("\n");
            return 0;
            break;
        }
    }
    printf("\n");
 
    


    //Comparação do primeiro atributo da Carta 1 com o primeiro atributo da Carta 2
    printf("\n      ***RESULTADO DA COMPARAÇÃO DAS CARTAS***\n");
    if (resultado1 == 1) {
        printf("\n");
        printf("\nPrimeiro Atributo:             <<< CARTA 1 (%s) VENCEU! >>>\n", cidade1);
    } else if (resultado1 == 0) {
        printf("\n");
        printf("\nPrimeiro Atributo:             <<< CARTA 2 (%s) VENCEU! >>>\n", cidade2);
    } else {
        printf("\n");
        printf("\nPrimeiro Atributo:             <<< EMPATE! >>>\n");
    }
    printf("\n");



    //Comparação do segundo atributo da Carta 1 com o segundo atributo da Carta 2
    if (resultado2 == 1) {
        printf("Segundo Atributo:              <<< CARTA 1 (%s) VENCEU! >>>\n", cidade1);
    } else if (resultado2 == 0) {
        printf("Segundo Atributo:              <<< CARTA 2 (%s) VENCEU! >>>\n", cidade2);
    } else {
        printf("Segundo Atributo:              <<< EMPATE! >>>\n");
    }



    //Comparação da Soma dos Atributos da Carta 1 com a Soma dos Atributos da Carta 2
    if (soma1 > soma2) {
        printf("\nSoma dos Atributos:            <<< CARTA 1 (%s) VENCEU! >>>\n", cidade1);
        printf("\n");    
    } else if (soma1 < soma2) {
        printf("\nSoma dos Atributos:            <<< CARTA 2 (%s) VENCEU! >>>\n", cidade2);
        printf("\n");
    } else {
        printf("\nSoma dos Atributos:            <<< EMPATE! >>>\n");
        printf("\n");
    }

    return 0;
}