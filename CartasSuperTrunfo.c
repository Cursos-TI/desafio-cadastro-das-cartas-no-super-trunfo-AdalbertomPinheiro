#include <stdio.h>
#include <string.h>//bilbioteca para facilitar a trabalhar com string

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Adalberto Moutinho Pinheiro

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //declaração para os regsitros da primeira carta
    /*
    declarando e já iniciando as variáveis para evitar pegar sujeira da memória 
    */

   /* inicio das declarações das variaveis da primeira carta*/
    char Estado_1 = '0';
    char Codigo_1[4] = "0";
    char Nome_da_cidade_1[50] = "0";
    int Populacao_1 = 0;
    float Area_1 = 0;
    float PIB_1 = 0;
    int Pontos_Turisticos_1 = 0;
/* fim da declaração das variaveis da primeira carta*/

/* inicio das declarações das variaveis da segunda carta*/
    char Estado_2 = '0';
    char Codigo_2[4] = "0";
    char Nome_da_cidade_2[50] = "0";
    int Populacao_2 = 0;
    float Area_2 = 0;
    float PIB_2 = 0;
    int Pontos_Turisticos_2 = 0;
    /* fim da declaração das variaveis da segunda carta*/

    /*
        criando uma variavel que ira ser utilizada de intermediaria para evitar lixos no stdin
    */
    char variaveltemporaria[100]; 






    /* criando um pequeno cabeçalho para o jogo  */

    printf("\n--------------------------------------------\n");
    printf("-- Super Trunfo - Paises                   --\n");
    printf("--------------------------------------------\n");
    printf("-- Cadastro de cartas ---------------------\n");
    printf("--------------------------------------------\n");
    printf("-- Primeira Carta --------------------------\n");

    /*
   
   
    Resumo de algumas funções utlizada para terminar essa tarefa sem problemas.
   
    fgets( variavel , tamanho, entrada); usada para leitura de variavel tanto em arquivos como em teclados. 
     
    a função strcspn() é uma função que se encontra na biblioteca string.h que retorna a posição da ocorrencia do caracter selecionado , no caso é o \n  
    
    sizeof() , retorna o tamanho de uma string
    
    strncpy(variavel1 , variavel2 ,tamanho) coloca aquantidades de bytes selcionados no paramentro  tamanho da variavel2 na variavel1     
 	
   sscanf( variaveltemporaria, tipo de variavel , variavel final) e usada para trabalhar uma string formatada. 
    */

    //mostra na tela e pega o primeiro caracter e coloca no Estado_1
    printf("-- Digite uma letra de A a H para o estado: ");//mostra a mensagem na tela 
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);  //leitura via teclado e grava na variavel
    Estado_1 = variaveltemporaria[0]; // pega só o primeiro caractere

    // Responsavel para pegar as informações do codigo
    printf("-- Digite o Código da carta (2 dígitos ex: 01): "); // mostra na tela
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);//leitura via teclado e coloca na variavel temporaria 
    variaveltemporaria[strcspn(variaveltemporaria, "\n")] = '\0'; // remove \n
    strncpy(Codigo_1, variaveltemporaria, sizeof(Codigo_1) - 1);//copia as insformações da variaveltemporaria para Codigo_1 , tamanho -1 bytes
    Codigo_1[sizeof(Codigo_1) - 1] = '\0'; // garante terminação

    //le o nome da cidade 
    printf("-- Digite o Nome da Cidade: ");//mostra na tela
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);//armazena o valor digitado na variavel 
    variaveltemporaria[strcspn(variaveltemporaria, "\n")] = '\0';//remove o \n
    strncpy(Nome_da_cidade_1, variaveltemporaria, sizeof(Nome_da_cidade_1) - 1);//copia os dados para a  variavel Nome_cidade
    Nome_da_cidade_1[sizeof(Nome_da_cidade_1) - 1] = '\0'; //coloca \0 no final

    // Número de habitantes
    printf("-- Digite o Número de Habitantes: ");//mostra na tela
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);//armazena o valor digitado na variavel temporaria
    sscanf(variaveltemporaria, "%d", &Populacao_1);//coloca o valor em Populacao_1

    // Área em Km²
    printf("-- Digite a Área em Km²: ");//mostra na tela 
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);//armazena o valor digitado na variavel temporaria
    sscanf(variaveltemporaria, "%f", &Area_1);//coloca o valor em Area_1

    // Produto Interno Bruto (PIB)
    printf("-- Digite o Produto Interno Bruto (PIB): ");//mostra na tela
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);//armazena o valor digitado na variavel temporaria
    sscanf(variaveltemporaria, "%f", &PIB_1);//coloca o valor em PIB_1

    // Pontos turísticos
    printf("-- Digite o Número de Pontos Turísticos: ");//mostra na tela
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);//armazena o valor digitado na variavel temporaria
    sscanf(variaveltemporaria, "%d", &Pontos_Turisticos_1);//coloca o valor em Pontos_turisticos_1

    //-------------------------------------------------------------
    // gravação dos dados da segunda carta 
 
    printf("-- Segunda Carta --------------------------\n");

    //mostra na tela e pega o primeiro caracter e coloca no Estado_1
    printf("-- Digite uma letra de A a H para o estado: ");//mostra a mensagem na tela 
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);  //leitura via teclado e grava na variavel
    Estado_2 = variaveltemporaria[0]; // pega só o primeiro caractere

    // Responsavel para pegar as informações do codigo
    printf("-- Digite o Código da carta (2 dígitos ex: 01): "); // mostra na tela
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);//leitura via teclado e coloca na variavel temporaria 
    variaveltemporaria[strcspn(variaveltemporaria, "\n")] = '\0'; // remove \n
    strncpy(Codigo_2, variaveltemporaria, sizeof(Codigo_2) - 1);//copia as insformações da variaveltemporaria para Codigo_1 , tamanho -1 bytes
    Codigo_2[sizeof(Codigo_2) - 1] = '\0'; // garante terminação

    //le o nome da cidade 
    printf("-- Digite o Nome da Cidade: ");//mostra na tela
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);//armazena o valor digitado na variavel 
    variaveltemporaria[strcspn(variaveltemporaria, "\n")] = '\0';//remove o \n
    strncpy(Nome_da_cidade_2, variaveltemporaria, sizeof(Nome_da_cidade_2) - 1);//copia os dados para a  variavel Nome_cidade
    Nome_da_cidade_2[sizeof(Nome_da_cidade_2) - 1] = '\0'; //coloca \0 no final

    // Número de habitantes
    printf("-- Digite o Número de Habitantes: ");//mostra na tela
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);//armazena o valor digitado na variavel temporaria
    sscanf(variaveltemporaria, "%d", &Populacao_2);//coloca o valor em Populacao_2

    // Área em Km²
    printf("-- Digite a Área em Km²: ");//mostra na tela 
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);//armazena o valor digitado na variavel temporaria
    sscanf(variaveltemporaria, "%f", &Area_2);//coloca o valor em Area_2

    // Produto Interno Bruto (PIB)
    printf("-- Digite o Produto Interno Bruto (PIB): ");//mostra na tela
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);//armazena o valor digitado na variavel temporaria
    sscanf(variaveltemporaria, "%f", &PIB_2);//coloca o valor em PIB_2

    // Pontos turísticos
    printf("-- Digite o Número de Pontos Turísticos: ");//mostra na tela
    fgets(variaveltemporaria, sizeof(variaveltemporaria), stdin);//armazena o valor digitado na variavel temporaria
    sscanf(variaveltemporaria, "%d", &Pontos_Turisticos_2);//coloca o valor em Pontos_turisticos_2

    // Exibe os dados
    printf("\n---- DADOS DA CARTA 1 ----\n");
    printf("Estado: %c\n", Estado_1);
    printf("Código: %s\n", Codigo_1);
    printf("Cidade: %s\n", Nome_da_cidade_1);
    printf("População: %d\n", Populacao_1);
    printf("Área: %.2f km²\n", Area_1);
    printf("PIB: %.2f\n", PIB_1);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos_1);
    
    printf("\n---- DADOS DA CARTA 2 ----\n");
    printf("Estado: %c\n", Estado_2);
    printf("Código: %s\n", Codigo_2);
    printf("Cidade: %s\n", Nome_da_cidade_2);
    printf("População: %d\n", Populacao_2);
    printf("Área: %.2f km²\n", Area_2);
    printf("PIB: %.2f\n", PIB_2);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos_2);

    return 0;
}
