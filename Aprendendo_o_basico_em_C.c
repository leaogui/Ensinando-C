
// Feito por Guilherme Leão - ADS 3º semestre para ajudar os iniciantes.
// Anotações básicas e úteis no fim do programa.

/*

Ordem:

- Usando bibliotecas
- Começando o programa
- Apresentação printf/scanf
- Condicionais : if/else
- Condicionais : switch/case
- Trabalhando com vetores e laço de repetição while
- Trabalhado com String 1
- Quebrando um laço com break
- Utilizando o laço do while e o laço for


*/

// Usando bibliotecas

// Precisamos das bibliotecas para usar funções "pré feitas" da linguagem, sem elas o programa não funcionará. Podemos fazer nossas bibliotecas, entraremos nisso depois.

#include<stdio.h>  // Biblioteca para funções basicas (printf, scanf).
#include<stdlib.h>  // Biblioteca com outras funções, system("pause"), system("cls").
#include<locale.h>  // Biblioteca para alterar idiomas.






//Começando o programa

int main(void){ // Chamando a função principal, onde o programa começa. Usamos o "int" e o "void" para evitar problemas ocasionais, porém funciona apenas main(). Devemos abrir e fechar a função com { no começo e } no fim.
	
	setlocale(LC_ALL, "portuguese"); //Setando o idioma do arquivo como português, se não, acentos e caracteres da nossa linguagem irão bugar.
	
	
	
	
	
	
	//Fazendo apenas apresentação do printf e scanf
	
	int inteiro =0; //Declarando uma variavel do tipo int (inteiro) e inicializando ela, útil para evitar bugs em alguns programas menores como esse, em programs maiores talvez não seja tão vantajoso.
	
	char caractere; //Declarando uma variavel do tipo char.
	
	printf("O C é bonito\n\n"); // Printando algo na tela, o \n pula uma linha, para deixar tudo mais fácil de ler..
	
	printf("Digite um número para ser feliz: "); // Printando para o usuario escrever algo.
	
	scanf("%d",&inteiro); // Scaneando algo que o usuario escreveu, do tipo int pelo %d (Falamos sobre os tipos de variavel nas anotações no fim do programa). Lembrando que se digitarmos um caractere, o programa irá bugar totalmente.
						  // Lembrando que em um scanf nunca podemos esquecer o "&", pois isso significa que o que estamos digitando, está indo para o endereço de memória da váriavel escrita depois dele. 1 "&" = endereçamento.
	
	printf("\nDigite uma letra para ser feliz em dobro: ");
	
	fflush(stdin); // Limpando o buffer do teclado, sempre fazer isso antes de scanear um char, ou vai bugar e vai receber nada.
	
	scanf("%c",&caractere); // Scaneando do tipo char, %c.
	
	printf("\nEscrevi em inteiro: %d.\nEscrevi em caractere: %c.\n",inteiro,caractere); //Escrevendo na tela o valor das variaveis int e char, deve colocar o nome das variaveis fora das aspas.
	
	system("pause"); // Pausa o programa até algum botão ser apertado.
	
	
	
	
	
	
	
	// Usando if e else
	
	system("cls"); // Função para limpar a tela do programa para melhor visualização.
	
	int usandoIf;
	
	printf("Digite um número e veja se é par: "); 
	
	scanf("%d",&usandoIf);
	
	if(usandoIf % 2 == 0){ // No caso estamos fazendo uma condição. If (se) a variavel ter o resto 0 dividindo por 2 (usando o % para obter o resto), ele escreve na tela que o número é par. 
		
		printf("\nO número é par!\n");
		
	}
	else{ // Else(senão), escreve na tela que o número é ímpar.  
		
		printf("\nO número é ímpar!\n");
		
	}	// Lembrando que podemos usar ifs e elses encadeados, um dentro do outro. E também, nunca pode existir um else sem um if.
		






	// Usando switch/case
	
	char usandoSC;
	
	printf("\nDigite o seu sexo: "); 
	
	fflush(stdin);
	
	scanf("%c",&usandoSC);
	
	switch(usandoSC){ // Para utilizar o switch, chamamos a função "switch(){ }" e vamos usar o nome da variavel nos parenteses (parâmetro). 
		
	case 'm':										// caso o usuário tenha digitado m (ou masculino, já que char só vai pegar a primeira letra):
		printf("\nSeu sexo é masculino\n");  		// Escreve que o sexo é masculino
		break;										// break quebra o switch e passa para a próxima instrução
		
	case 'M':										// Mesma coisa do de cima, mas como a linguagem é case sensitive, temos que fazer maiusculo, vamos aprender como burlar isso depois.
		printf("\nSeu sexo é masculino\n");
		break;
		
	case 'f':
		printf("\nSeu sexo é feminino\n");
		break;
		
	case 'F':
		printf("\nSeu sexo é feminino\n");
		break;
		
	default:																	//default é acionado caso nenhuma das condições serem resolvidas. É o "else" do switch.
		printf("\nO programa só funciona com sexo masculino e feminino\n");	
			
		
	}
		
	system("pause");
		
	system("cls");


	
	
	


	//Trabalhando com vetores e laço while
	
	int vetor[5] = {0,0,0,0,0} ; //Criando um vetor (variável com várias posições), de 5 posições (0-4) e inicializando ele.
	
	int contador = 0; //Criando um contador para auxiliar no while.
		
	
	while(contador < 5){ /*Laço de repetição while, irá repetir o que está dentro até a sua condição ser resolvida. No caso, enquanto contador for menor que 5, continua fazendo.
						   Usamos menor que 5 pois o vetor com 5 posições começa do 0 e vai até o 4. Estamos adicionando 1 no contador sempre que o laço se repete.
						   Devemos usar "{ }" para determinar onde o while começa e termina. */
	
	printf("\nDigite um número para inserir no vetor: ");
	
	scanf("%d",&vetor[contador]); //Scaneando valores no vetor usando o contador para acessar suas posições. Enquanto contador estiver no 0, adiciona na posiçãõ 0.
	
	printf("\nEscrevi em Vetor posição %d: %d\n",contador+1,vetor[contador]); // Printando na tela com auxilio do while e o contador, para não ter que repetir.
	
	contador++; // Adicionando +1 no contador. Sempre que o while passar por aqui acontece contador = contador + 1. É muito importante lembrar que 1 "=" em linguagem c significa atribuição, 2 "==" significam comparação.
	
	}
	
	system("cls");
	
	contador = 0; // Atribuimos 0 ao contador para utilizar de novo da mesma forma.
	
	while(contador < 5){
		
		printf("\nVetor posição %d: %d", contador+1,vetor[contador]); // Este while serve apenas para confirmar se o que escrevemos estava certo.
		
		contador++;
		
	}
	
	printf("\n\n"); // Print apenas para pular linhas no programa.
	
	system("pause");
	
	system("cls");
	







	// Trabalhando com Strings
	
	char cadeia[20]; // Criando um vetor de caracteres para poder trabalhar com String, ou cadeia de caracteres, usado por exemplo para digitar um nome.
	
	printf("\nDigite um nome bem bonito: ");
	
	fflush(stdin); // Como uma string são vários chars, precisamos do fflush.

	fgets(cadeia,20,stdin);	// Escaneando uma string, se usar scanf para fazer isso, ele não irá ler o espaço. 20 é o número de dígitos.
	
	printf("O nome digitado foi: %s\n\n", cadeia); //Printando a string que escreveu com %s.
	
	system("pause");
	
	system("cls");
	

	
	
	
	
	
	//Quebrando um laço usando break
	
	
		while(2>1){										//Esse loop de while, tem uma condição que o deixa infinito, 2 sempre será maior que 1, ou seja, impossível de acabar.
			
			char auxiliar;
			
			printf("\nDigite algo para continuar o loop e X para sair: ");
			
			fflush(stdin);
			
			scanf("%c",&auxiliar);
			
			if(auxiliar == 'x' || auxiliar == 'X'){   	//Fazemos aqui um if, que toda vez que algo é digitado, verifica se o que o usuario escreveu é X ou x (usamos o OR por causa do case sensitive).
														//Se o que estiver na variável for X, o loop quebra e passa para a próxima instrução, senão o loop continua escrevendo.	
				printf("\n Você saiu do loop!");        //Essa é a melhor maneira de fazer um programa para cadastrar pessoas seguidas em algo por exemplo.
				break;
			}
			
			printf("\nO Guigui é lindo\n");
			
			
		}

	





	// Utilizando o laço do while e o laço for
	
	int vetorDW[5]; // Vetor para trabalhar com o laço.
	
	contador = 0; // zeramos o contador novamente para auxiliar.
	
	
	do{ // O laço do while funciona de maneira semelhante ao while, a difereça é: o laço while irá verificar se a condição é resolvida no começo do laço, o do while verifica se isso acontece no fim do laço.
	
	printf("\nDigite um número bem massa: ");
			
	scanf("%d",&vetorDW[contador]);											
	
	contador++;
		
	}while(contador < 5); // Devemos colocar "do", abrir e fechar as chaves, e no fim colocar o "while" igual ao próprio laço while. Toda vez adicionamos +1 em contador, e quando chega em 5, o laço quebra e continua o programa (verificando no final). 
	
	
	
	for(contador=0;contador<5;contador++){ // Para verificar se o laço do while funcionou, vamos usar o laço for para printar o vetor na tela.
										   // Devemos estruturar o for de tal maneira: for("O número que você deseja que a variavel inicie (no caso queremos que comece no 0)";"A condição limite que você deseja (no caso, queremos que pare quando contador passar de 4)";"a condição para passar o número da condição(no caso queremos que adicione 1 ao contador toda vez que o loop aconteça)")
										   // Outro exemplo: for(teste=30;teste=0;teste--){ "Conteudo dentro do laço" }, no caso o laço vai se repetir até "teste" descer de 30 para 0.
											
									
	printf("\nVetor posição %d: %d", contador+1,vetorDW[contador]);

	}
	
	puts("\n"); // A função puts significa "put string", que nada mais é que printa algo na tela, porém não recebe variaveis como o printf, apenas strings. Como vamos apenas pular linhas, é mais rápido escrever puts que printf.
	
	
	printf("Este foi seu primeiro programa!\n\n");
	
	
	system("pause"); // Pausando o programa para ver o que fizemos.
	
	return 0; // Fazemos isso para evitar bugs, retorno padrão do main.
}







  // Anotações extras:
  
//  Utilizano duas barras (//) fazemos um comentário, não altera o código, apenas anota algo que o programador julga útil para fazer a manutenção do código.
// Também podemos fazer /* */ 
// Isso faz com que tudo que esteja dentro, seja comentado. O comentário é útil para testar o código sem ter que apagar algo. Ao invés de apagar algo para arrumar, apenas deixe a parte comentada.

/*

	A regra principal é: o usuário é burro. Devemos tentar prever todas as formas de quebrar o programa para arrumar antes, pois se elas existirem, vão acabar sendo usadas.

	Lembrando sempre que C é uma linguagem case sensitve, ou seja, diferencia maiúsculas de minúsculas. Tome cuidado ao escrever.

 Operadores:


	+  = Soma
	-  = Subtação
	*  = Multiplicação
	/  = Divisão
	%  = Mod (resto)
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



Uso de variaveis:

Ao declarar uma variavel, você armazena um espaço na memória para ela. Falaremos do tamanho de cada variavel abaixo.

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



 !!!!!!!!!!!!!!!!!!!!!!!!!!!!! IMPORTANTE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 
 
 
  							NUNCA, EU DISSE NUNCA, use goto na sua vida. Vai ferrar tudo e quebrar e você vai odiar a existência e vai xigar eu vizinho.
 
 
 
 */

