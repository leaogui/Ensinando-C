
// Feito por Guilherme Leão - ADS 3º semestre para ajudar os iniciantes.


/*
- Começando o programa
- Apresentação printf/scanf
- Trabalhando com vetores e laço de repetição while
- Trabalhado com String 1


*/

#include<stdio.h> // Biblioteca para funções basicas (printf, scanf).
#include<stdlib.h>// Biblioteca com outras funções, system("pause"), system("cls").
#include<locale.h>// Biblioteca para alterar idiomas.



//Começando o programa

int main(void){ // Chamando a função principal, onde o programa começa. Usamos o "int" e o "void" para evitar problemas ocasionais, porém funciona apenas main(). Devemos abrir e fechar a função com { no começo e } no fim.
	
	setlocale(LC_ALL, "portuguese"); //Setando o idioma do arquivo como portugues.
	
	//Fazendo apenas apresentação do printf e scanf
	
	int inteiro; //Declarando uma variavel do tipo int (inteiro).
	
	char caractere; //Declarando uma variavel do tipo char.
	
	printf("O C é bonito\n\n"); // Printando algo na tela, o \n pula uma linha, para deixar tudo mais fácil de ler..
	
	printf("Digite um número para ser feliz: "); // Printando para o usuario escrever algo.
	
	scanf("%d",&inteiro); // Scaneando algo que o usuario escreveu, do tipo int pelo %d (Falamos sobre os tipos de variavel nas anotações no fim do programa).
	
	printf("\nDigite uma letra para ser feliz em dobro: ");
	
	fflush(stdin); // Limpando o buffer do teclado, sempre fazer isso antes de scanear um char, ou vai bugar e vai receber nada.
	
	scanf("%c",&caractere); // Scaneando do tipo char, %c.
	
	printf("\nEscrevi em inteiro: %d.\nEscrevi em caractere: %c.\n",inteiro,caractere); //Escrevendo na tela o valor das variaveis int e char.
	
	//Trabalhando com vetores e laço while
	
	int vetor[5]; //Criando um vetor (variável com várias posições), de 5 posições (0-4).
	
	int contador = 0; //Criando um contador para auxiliar no while.
		
	
	while(contador < 5){ /*Laço de repetição while, irá repetir o que está dentro até a sua condição ser resolvida. No caso, enquanto contador for menor que 5, continua fazendo.
						   Usamos menor que 5 pois o vetor com 5 posições começa do 0 e vai até o 4. Estamos adicionando 1 no contador sempre que o laço se repete.
						   Devemos usar "{ }" para determinar onde o while começa e termina. */
	
	printf("\nDigite um número para inserir no vetor: ");
	
	scanf("%d",&vetor[contador]); //Scaneando valores no vetor usando o contador para acessar suas posições. Enquanto contador estiver no 0, adiciona na posiçãõ 0.
	
	printf("\nEscrevi em Vetor posição %d: %d\n",contador+1,vetor[contador]); // Printando na tela com auxilio do while e o contador, para não ter que repetir.
	
	contador++; // Adicionando +1 no contador. Sempre que o while passar por aqui acontece contador = contador + 1. É muito importante lembrar que 1 "=" em linguagem c significa atribuição, 2 "==" significam comparação.
	
	}
	
	system("cls"); // Função para limpar a tela do programa para melhor visualização.
	
	contador = 0; // Atribuimos 0 ao contador para utilizar de novo da mesma forma.
	
	while(contador < 5){
		
		printf("\nVetor posição %d: %d", contador+1,vetor[contador]); // Este while serve apenas para confirmar se o que escrevemos estava certo.
		
		contador++;
		
	}
	
	printf("\n\n"); // Print apenas para pular linhas no programa.
	
	system("pause"); // Pausa o programa até algum botão ser apertado.
	
	system("cls");
	
	// Trabalhando com Strings
	
	char cadeia[20]; // Criando um vetor de caracteres para poder trabalhar com String, ou cadeia de caracteres, usado por exemplo para digitar um nome.
	
	printf("\nDigite um nome bem bonito: ");
	
	fflush(stdin);

	fgets(cadeia,20,stdin);	// Escaneando uma string, se usar scanf para fazer isso, ele não irá ler o espaço. 20 é o número de dígitos.
	
	printf("O nome digitado foi: %s\n\n", cadeia); //Printando a string que escreveu com %s.
	
	printf("Este foi seu primeiro programa!\n\n");
	
	
	system("pause"); // Pausando o programa para ver o que fizemos.
	
	return 0; // Fazemos isso para evitar bugs, retorno padrão do main.
}

  // Anotações extras:
  
// /* Utilizano duas barras (//) fazemos um comentário, não altera o código, apenas anota algo que o programador julga útil para fazer a manutenção do código.
// Também podemos fazer /* */ 
// Isso faz com que tudo que esteja dentro, seja comentado. O comentário é útil para testar o código sem ter que apagar algo. Ao invés de apagar algo para arrumar, apenas deixe a parte comentada.

/*

 Operadores:


	+  = Soma
	-  = Subtação
	*  = Multiplicação
	/  = Divisão
	|| = OR
	&& = AND
	!  = NOT
	== = Comparação
	!= = Diferente
	=  = Atribuição
	> = Maior
	< = Menor
	<=, >= = Menor/Maior ou igual
 
	Para facilitar a vida, podemos ao invés de fazer a = a + b ao fazer uma operação, podemos fazer a += b, ou a -= b, e por ai vai. O resultado é o mesmo.

/*

Uso de variaveis:

Devemos lembrar que em computação, sempre estamos de uma maneira ou de outra trabalhando com binários. 
Então, 8 bits em binário equivalem a 1 byte. Logo, em 1 byte podemos representar um número em binário até 8 bits, (255, lembrando que sempre começamos em 0).

char (character) = Guarda 1 caractere, pesa 1 byte.
int (integer) = Números inteiros, pode guardar números de até 4 bytes.
float (floating) = Números em ponto flutuante, para representar reais. Tem 4 bytes. Fazer contas com números float com vírgula gera imprecisão pois os números são calculados em binário, e isso gera dízimas.
double = Números reais também, porém com o dobro de alcance do float. Tem 8 bytes. Ainda tem problemas para calcular números com virgula. (Esses problemas só são notáveis em apps que precisam de 100% de previsão, como bancos manipulando dinheiro)
string = Cadeia de caracteres, tem o tamanho dependendo do que o usuário determina.


%d = inteiro
%c = caractere
%f = float
%lf = double
%s = string

*/

