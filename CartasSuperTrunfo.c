#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // VARIÁVEIS CARTA 1
        char estado1; // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
        char codigo1[3]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
        char cidade1[20]; //O nome da cidade. Tipo: char[] (string)
        int populacao1; // O número de habitantes da cidade. Tipo: int
        float area1; // A área da cidade em quilômetros quadrados. Tipo: float
        float pib1; // O Produto Interno Bruto da cidade. Tipo: float
        int pturisticos1; // A quantidade de pontos turísticos na cidade. Tipo: int

        // VARIÁVEIS CARTA 2
        char estado2; // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
        char codigo2[3]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
        char cidade2[20]; //O nome da cidade. Tipo: char[] (string)
        int populacao2; // O número de habitantes da cidade. Tipo: int
        float area2; // A área da cidade em quilômetros quadrados. Tipo: float
        float pib2; // O Produto Interno Bruto da cidade. Tipo: float
        int pturisticos2; // A quantidade de pontos turísticos na cidade. Tipo: int
        
        // ENTRADA CARTA 01
        printf("\n\nCadastro de carta número 1:\nDigite a letra do Estado: "); // Solicita a letra do estado
        scanf(" %c", &estado1); // Lê a letra do estado e armazena na variável estado1
        
        printf("Digite o código do Estado: "); // Solicita o código do estado
        scanf("%s", codigo1); // Lê o código do estado e armazena na variável codigo1
        
        printf("Digite o nome da cidade: "); // Solicita o nome da cidade
        scanf("%s", &cidade1); // Lê o nome da cidade e armazena na variável cidade1
        

        printf("Digite a população: "); //  Solicita a população
        scanf("%d", &populacao1); // Lê a população e armazena na variável populacao1
        

        printf("Digite a área em km²: "); // Solicita a área
        scanf("%f", &area1);
    
        printf("Digite o PIB: ");
        scanf("%f", &pib1); // Lê o PIB e armazena na variável pib1
        

        printf("Digite a quantidade de pontos turísticos na cidade: "); // Solicita a quantidade de pontos turísticos
        scanf("%d", &pturisticos1); // Lê a quantidade de pontos turísticos e armazena na variável pturisticos1
        
        
        // ENTRADA CARTA 02

        printf("\nCadastro de carta número 2:\nDigite a letra do Estado: "); // Solicita a letra do estado
        scanf(" %c", &estado2); // Lê a letra do estado e armazena na variável estado2
        
        printf("Digite o código do Estado: "); // Solicita o código do estado
        scanf("%s", codigo2); // Lê o código do estado e armazena na variável codigo2
        
        printf("Digite o nome da cidade: "); // Solicita o nome da cidade
        scanf("%s", &cidade2); // Lê o nome da cidade e armazena na variável cidade2
        

        printf("Digite a população: "); //  Solicita a população
        scanf("%d", &populacao2); // Lê a população e armazena na variável populacao2
        

        printf("Digite a área em km²: "); // Solicita a área
        scanf("%f", &area2);
             
        printf("Digite o PIB: ");
        scanf("%f", &pib2); // Lê o PIB e armazena na variável pib2
        

        printf("Digite a quantidade de pontos turísticos na cidade: "); // Solicita a quantidade de pontos turísticos
        scanf("%d", &pturisticos2); // Lê a quantidade de pontos turísticos e armazena na variável pturisticos2
        

        // SAÍDAS CARTA 1

        printf("\n\n// ----- Impressão Carta 1 -----//\n\nCarta 1:\nEstado: %c\n", estado1); // Imprime a carta 1 com os dados fornecidos
        printf("Código: %c%s\n", estado1, codigo1); // Concatena a letra do estado com o código
        printf("Nome da Cidade: %s\n", cidade1); // Imprime o nome da cidade
        printf("População: %d\n", populacao1); // Imprime a população
        printf("Área: %.2f km²\n", area1); //  Imprime a área com duas casas decimais
        printf("PIB: %.2f bilhões de reais\n", pib1); // Imprime o PIB com duas casas decimais
        printf("Número de Pontos Turísticos: %d\n", pturisticos1); // Imprime a quantidade de pontos turísticos
        printf("\nCarta cadastrada com sucesso!\n"); // Mensagem de confirmação
                
        // SAÍDAS CARTA 2

        printf("\n// ----- Impressão Carta 2 -----//\n\nCarta 2:\nEstado: %c\n", estado2); // Imprime a carta 2 com os dados fornecidos
        printf("Código: %c%s\n", estado2, codigo2); // Concatena a letra do estado com o código
        printf("Nome da Cidade: %s\n", cidade2); // Imprime o nome da cidade 
        printf("População: %d\n", populacao2);  // Imprime a população
        printf("Área: %.2f km²\n", area2); // Imprime a área com duas casas decimais
        printf("PIB: %.2f bilhões de reais\n", pib2); // Imprime o PIB com duas casas decimais
        printf("Número de Pontos Turísticos: %d\n", pturisticos2); // Imprime a quantidade de pontos turísticos
        printf("\nCarta cadastrada com sucesso!\n"); // Mensagem de confirmação
       
return 0;
} 
