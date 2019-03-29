
// Feito por Guilherme Le�o - ADS 3� semestre para ajudar os iniciantes.


/*
- Come�ando o programa
- Apresenta��o printf/scanf
- Trabalhando com vetores e la�o de repeti��o while
- Trabalhado com String 1


*/

#include<stdio.h> // Biblioteca para fun��es basicas (printf, scanf).
#include<stdlib.h>// Biblioteca com outras fun��es, system("pause"), system("cls").
#include<locale.h>// Biblioteca para alterar idiomas.



//Come�ando o programa

int main(void){ // Chamando a fun��o principal, onde o programa come�a. Usamos o "int" e o "void" para evitar problemas ocasionais, por�m funciona apenas main(). Devemos abrir e fechar a fun��o com { no come�o e } no fim.
	
	setlocale(LC_ALL, "portuguese"); //Setando o idioma do arquivo como portugues.
	
	//Fazendo apenas apresenta��o do printf e scanf
	
	int inteiro; //Declarando uma variavel do tipo int (inteiro).
	
	char caractere; //Declarando uma variavel do tipo char.
	
	printf("O C � bonito\n\n"); // Printando algo na tela, o \n pula uma linha, para deixar tudo mais f�cil de ler..
	
	printf("Digite um n�mero para ser feliz: "); // Printando para o usuario escrever algo.
	
	scanf("%d",&inteiro); // Scaneando algo que o usuario escreveu, do tipo int pelo %d (Falamos sobre os tipos de variavel nas anota��es no fim do programa).
	
	printf("\nDigite uma letra para ser feliz em dobro: ");
	
	fflush(stdin); // Limpando o buffer do teclado, sempre fazer isso antes de scanear um char, ou vai bugar e vai receber nada.
	
	scanf("%c",&caractere); // Scaneando do tipo char, %c.
	
	printf("\nEscrevi em inteiro: %d.\nEscrevi em caractere: %c.\n",inteiro,caractere); //Escrevendo na tela o valor das variaveis int e char.
	
	//Trabalhando com vetores e la�o while
	
	int vetor[5]; //Criando um vetor (vari�vel com v�rias posi��es), de 5 posi��es (0-4).
	
	int contador = 0; //Criando um contador para auxiliar no while.
		
	
	while(contador < 5){ /*La�o de repeti��o while, ir� repetir o que est� dentro at� a sua condi��o ser resolvida. No caso, enquanto contador for menor que 5, continua fazendo.
						   Usamos menor que 5 pois o vetor com 5 posi��es come�a do 0 e vai at� o 4. Estamos adicionando 1 no contador sempre que o la�o se repete.
						   Devemos usar "{ }" para determinar onde o while come�a e termina. */
	
	printf("\nDigite um n�mero para inserir no vetor: ");
	
	scanf("%d",&vetor[contador]); //Scaneando valores no vetor usando o contador para acessar suas posi��es. Enquanto contador estiver no 0, adiciona na posi��� 0.
	
	printf("\nEscrevi em Vetor posi��o %d: %d\n",contador+1,vetor[contador]); // Printando na tela com auxilio do while e o contador, para n�o ter que repetir.
	
	contador++; // Adicionando +1 no contador. Sempre que o while passar por aqui acontece contador = contador + 1. � muito importante lembrar que 1 "=" em linguagem c significa atribui��o, 2 "==" significam compara��o.
	
	}
	
	system("cls"); // Fun��o para limpar a tela do programa para melhor visualiza��o.
	
	contador = 0; // Atribuimos 0 ao contador para utilizar de novo da mesma forma.
	
	while(contador < 5){
		
		printf("\nVetor posi��o %d: %d", contador+1,vetor[contador]); // Este while serve apenas para confirmar se o que escrevemos estava certo.
		
		contador++;
		
	}
	
	printf("\n\n"); // Print apenas para pular linhas no programa.
	
	system("pause"); // Pausa o programa at� algum bot�o ser apertado.
	
	system("cls");
	
	// Trabalhando com Strings
	
	char cadeia[20]; // Criando um vetor de caracteres para poder trabalhar com String, ou cadeia de caracteres, usado por exemplo para digitar um nome.
	
	printf("\nDigite um nome bem bonito: ");
	
	fflush(stdin);

	fgets(cadeia,20,stdin);	// Escaneando uma string, se usar scanf para fazer isso, ele n�o ir� ler o espa�o. 20 � o n�mero de d�gitos.
	
	printf("O nome digitado foi: %s\n\n", cadeia); //Printando a string que escreveu com %s.
	
	printf("Este foi seu primeiro programa!\n\n");
	
	
	system("pause"); // Pausando o programa para ver o que fizemos.
	
	return 0; // Fazemos isso para evitar bugs, retorno padr�o do main.
}

  // Anota��es extras:
  
// /* Utilizano duas barras (//) fazemos um coment�rio, n�o altera o c�digo, apenas anota algo que o programador julga �til para fazer a manuten��o do c�digo.
// Tamb�m podemos fazer /* */ 
// Isso faz com que tudo que esteja dentro, seja comentado. O coment�rio � �til para testar o c�digo sem ter que apagar algo. Ao inv�s de apagar algo para arrumar, apenas deixe a parte comentada.

/*

 Operadores:


	+  = Soma
	-  = Subta��o
	*  = Multiplica��o
	/  = Divis�o
	|| = OR
	&& = AND
	!  = NOT
	== = Compara��o
	!= = Diferente
	=  = Atribui��o
	> = Maior
	< = Menor
	<=, >= = Menor/Maior ou igual
 
	Para facilitar a vida, podemos ao inv�s de fazer a = a + b ao fazer uma opera��o, podemos fazer a += b, ou a -= b, e por ai vai. O resultado � o mesmo.

/*

Uso de variaveis:

Devemos lembrar que em computa��o, sempre estamos de uma maneira ou de outra trabalhando com bin�rios. 
Ent�o, 8 bits em bin�rio equivalem a 1 byte. Logo, em 1 byte podemos representar um n�mero em bin�rio at� 8 bits, (255, lembrando que sempre come�amos em 0).

char (character) = Guarda 1 caractere, pesa 1 byte.
int (integer) = N�meros inteiros, pode guardar n�meros de at� 4 bytes.
float (floating) = N�meros em ponto flutuante, para representar reais. Tem 4 bytes. Fazer contas com n�meros float com v�rgula gera imprecis�o pois os n�meros s�o calculados em bin�rio, e isso gera d�zimas.
double = N�meros reais tamb�m, por�m com o dobro de alcance do float. Tem 8 bytes. Ainda tem problemas para calcular n�meros com virgula. (Esses problemas s� s�o not�veis em apps que precisam de 100% de previs�o, como bancos manipulando dinheiro)
string = Cadeia de caracteres, tem o tamanho dependendo do que o usu�rio determina.


%d = inteiro
%c = caractere
%f = float
%lf = double
%s = string

*/

