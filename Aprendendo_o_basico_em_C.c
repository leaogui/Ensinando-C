
// Feito por Guilherme Le�o - ADS 3� semestre para ajudar os iniciantes.
// Anota��es b�sicas e �teis no fim do programa.

/*

Ordem:

- Usando bibliotecas
- Come�ando o programa
- Apresenta��o printf/scanf
- Condicionais : if/else
- Condicionais : switch/case
- Trabalhando com vetores e la�o de repeti��o while
- Trabalhado com String 1
- Quebrando um la�o com break
- Utilizando o la�o do while e o la�o for


*/

// Usando bibliotecas

// Precisamos das bibliotecas para usar fun��es "pr� feitas" da linguagem, sem elas o programa n�o funcionar�. Podemos fazer nossas bibliotecas, entraremos nisso depois.

#include<stdio.h>  // Biblioteca para fun��es basicas (printf, scanf).
#include<stdlib.h>  // Biblioteca com outras fun��es, system("pause"), system("cls").
#include<locale.h>  // Biblioteca para alterar idiomas.






//Come�ando o programa

int main(void){ // Chamando a fun��o principal, onde o programa come�a. Usamos o "int" e o "void" para evitar problemas ocasionais, por�m funciona apenas main(). Devemos abrir e fechar a fun��o com { no come�o e } no fim.
	
	setlocale(LC_ALL, "portuguese"); //Setando o idioma do arquivo como portugu�s, se n�o, acentos e caracteres da nossa linguagem ir�o bugar.
	
	
	
	
	
	
	//Fazendo apenas apresenta��o do printf e scanf
	
	int inteiro =0; //Declarando uma variavel do tipo int (inteiro) e inicializando ela, �til para evitar bugs em alguns programas menores como esse, em programs maiores talvez n�o seja t�o vantajoso.
	
	char caractere; //Declarando uma variavel do tipo char.
	
	printf("O C � bonito\n\n"); // Printando algo na tela, o \n pula uma linha, para deixar tudo mais f�cil de ler..
	
	printf("Digite um n�mero para ser feliz: "); // Printando para o usuario escrever algo.
	
	scanf("%d",&inteiro); // Scaneando algo que o usuario escreveu, do tipo int pelo %d (Falamos sobre os tipos de variavel nas anota��es no fim do programa). Lembrando que se digitarmos um caractere, o programa ir� bugar totalmente.
						  // Lembrando que em um scanf nunca podemos esquecer o "&", pois isso significa que o que estamos digitando, est� indo para o endere�o de mem�ria da v�riavel escrita depois dele. 1 "&" = endere�amento.
	
	printf("\nDigite uma letra para ser feliz em dobro: ");
	
	fflush(stdin); // Limpando o buffer do teclado, sempre fazer isso antes de scanear um char, ou vai bugar e vai receber nada.
	
	scanf("%c",&caractere); // Scaneando do tipo char, %c.
	
	printf("\nEscrevi em inteiro: %d.\nEscrevi em caractere: %c.\n",inteiro,caractere); //Escrevendo na tela o valor das variaveis int e char, deve colocar o nome das variaveis fora das aspas.
	
	system("pause"); // Pausa o programa at� algum bot�o ser apertado.
	
	
	
	
	
	
	
	// Usando if e else
	
	system("cls"); // Fun��o para limpar a tela do programa para melhor visualiza��o.
	
	int usandoIf;
	
	printf("Digite um n�mero e veja se � par: "); 
	
	scanf("%d",&usandoIf);
	
	if(usandoIf % 2 == 0){ // No caso estamos fazendo uma condi��o. If (se) a variavel ter o resto 0 dividindo por 2 (usando o % para obter o resto), ele escreve na tela que o n�mero � par. 
		
		printf("\nO n�mero � par!\n");
		
	}
	else{ // Else(sen�o), escreve na tela que o n�mero � �mpar.  
		
		printf("\nO n�mero � �mpar!\n");
		
	}	// Lembrando que podemos usar ifs e elses encadeados, um dentro do outro. E tamb�m, nunca pode existir um else sem um if.
		






	// Usando switch/case
	
	char usandoSC;
	
	printf("\nDigite o seu sexo: "); 
	
	fflush(stdin);
	
	scanf("%c",&usandoSC);
	
	switch(usandoSC){ // Para utilizar o switch, chamamos a fun��o "switch(){ }" e vamos usar o nome da variavel nos parenteses (par�metro). 
		
	case 'm':										// caso o usu�rio tenha digitado m (ou masculino, j� que char s� vai pegar a primeira letra):
		printf("\nSeu sexo � masculino\n");  		// Escreve que o sexo � masculino
		break;										// break quebra o switch e passa para a pr�xima instru��o
		
	case 'M':										// Mesma coisa do de cima, mas como a linguagem � case sensitive, temos que fazer maiusculo, vamos aprender como burlar isso depois.
		printf("\nSeu sexo � masculino\n");
		break;
		
	case 'f':
		printf("\nSeu sexo � feminino\n");
		break;
		
	case 'F':
		printf("\nSeu sexo � feminino\n");
		break;
		
	default:																	//default � acionado caso nenhuma das condi��es serem resolvidas. � o "else" do switch.
		printf("\nO programa s� funciona com sexo masculino e feminino\n");	
			
		
	}
		
	system("pause");
		
	system("cls");


	
	
	


	//Trabalhando com vetores e la�o while
	
	int vetor[5] = {0,0,0,0,0} ; //Criando um vetor (vari�vel com v�rias posi��es), de 5 posi��es (0-4) e inicializando ele.
	
	int contador = 0; //Criando um contador para auxiliar no while.
		
	
	while(contador < 5){ /*La�o de repeti��o while, ir� repetir o que est� dentro at� a sua condi��o ser resolvida. No caso, enquanto contador for menor que 5, continua fazendo.
						   Usamos menor que 5 pois o vetor com 5 posi��es come�a do 0 e vai at� o 4. Estamos adicionando 1 no contador sempre que o la�o se repete.
						   Devemos usar "{ }" para determinar onde o while come�a e termina. */
	
	printf("\nDigite um n�mero para inserir no vetor: ");
	
	scanf("%d",&vetor[contador]); //Scaneando valores no vetor usando o contador para acessar suas posi��es. Enquanto contador estiver no 0, adiciona na posi��� 0.
	
	printf("\nEscrevi em Vetor posi��o %d: %d\n",contador+1,vetor[contador]); // Printando na tela com auxilio do while e o contador, para n�o ter que repetir.
	
	contador++; // Adicionando +1 no contador. Sempre que o while passar por aqui acontece contador = contador + 1. � muito importante lembrar que 1 "=" em linguagem c significa atribui��o, 2 "==" significam compara��o.
	
	}
	
	system("cls");
	
	contador = 0; // Atribuimos 0 ao contador para utilizar de novo da mesma forma.
	
	while(contador < 5){
		
		printf("\nVetor posi��o %d: %d", contador+1,vetor[contador]); // Este while serve apenas para confirmar se o que escrevemos estava certo.
		
		contador++;
		
	}
	
	printf("\n\n"); // Print apenas para pular linhas no programa.
	
	system("pause");
	
	system("cls");
	







	// Trabalhando com Strings
	
	char cadeia[20]; // Criando um vetor de caracteres para poder trabalhar com String, ou cadeia de caracteres, usado por exemplo para digitar um nome.
	
	printf("\nDigite um nome bem bonito: ");
	
	fflush(stdin); // Como uma string s�o v�rios chars, precisamos do fflush.

	fgets(cadeia,20,stdin);	// Escaneando uma string, se usar scanf para fazer isso, ele n�o ir� ler o espa�o. 20 � o n�mero de d�gitos.
	
	printf("O nome digitado foi: %s\n\n", cadeia); //Printando a string que escreveu com %s.
	
	system("pause");
	
	system("cls");
	

	
	
	
	
	
	//Quebrando um la�o usando break
	
	
		while(2>1){										//Esse loop de while, tem uma condi��o que o deixa infinito, 2 sempre ser� maior que 1, ou seja, imposs�vel de acabar.
			
			char auxiliar;
			
			printf("\nDigite algo para continuar o loop e X para sair: ");
			
			fflush(stdin);
			
			scanf("%c",&auxiliar);
			
			if(auxiliar == 'x' || auxiliar == 'X'){   	//Fazemos aqui um if, que toda vez que algo � digitado, verifica se o que o usuario escreveu � X ou x (usamos o OR por causa do case sensitive).
														//Se o que estiver na vari�vel for X, o loop quebra e passa para a pr�xima instru��o, sen�o o loop continua escrevendo.	
				printf("\n Voc� saiu do loop!");        //Essa � a melhor maneira de fazer um programa para cadastrar pessoas seguidas em algo por exemplo.
				break;
			}
			
			printf("\nO Guigui � lindo\n");
			
			
		}

	





	// Utilizando o la�o do while e o la�o for
	
	int vetorDW[5]; // Vetor para trabalhar com o la�o.
	
	contador = 0; // zeramos o contador novamente para auxiliar.
	
	
	do{ // O la�o do while funciona de maneira semelhante ao while, a difere�a �: o la�o while ir� verificar se a condi��o � resolvida no come�o do la�o, o do while verifica se isso acontece no fim do la�o.
	
	printf("\nDigite um n�mero bem massa: ");
			
	scanf("%d",&vetorDW[contador]);											
	
	contador++;
		
	}while(contador < 5); // Devemos colocar "do", abrir e fechar as chaves, e no fim colocar o "while" igual ao pr�prio la�o while. Toda vez adicionamos +1 em contador, e quando chega em 5, o la�o quebra e continua o programa (verificando no final). 
	
	
	
	for(contador=0;contador<5;contador++){ // Para verificar se o la�o do while funcionou, vamos usar o la�o for para printar o vetor na tela.
										   // Devemos estruturar o for de tal maneira: for("O n�mero que voc� deseja que a variavel inicie (no caso queremos que comece no 0)";"A condi��o limite que voc� deseja (no caso, queremos que pare quando contador passar de 4)";"a condi��o para passar o n�mero da condi��o(no caso queremos que adicione 1 ao contador toda vez que o loop aconte�a)")
										   // Outro exemplo: for(teste=30;teste=0;teste--){ "Conteudo dentro do la�o" }, no caso o la�o vai se repetir at� "teste" descer de 30 para 0.
											
									
	printf("\nVetor posi��o %d: %d", contador+1,vetorDW[contador]);

	}
	
	puts("\n"); // A fun��o puts significa "put string", que nada mais � que printa algo na tela, por�m n�o recebe variaveis como o printf, apenas strings. Como vamos apenas pular linhas, � mais r�pido escrever puts que printf.
	
	
	printf("Este foi seu primeiro programa!\n\n");
	
	
	system("pause"); // Pausando o programa para ver o que fizemos.
	
	return 0; // Fazemos isso para evitar bugs, retorno padr�o do main.
}







  // Anota��es extras:
  
//  Utilizano duas barras (//) fazemos um coment�rio, n�o altera o c�digo, apenas anota algo que o programador julga �til para fazer a manuten��o do c�digo.
// Tamb�m podemos fazer /* */ 
// Isso faz com que tudo que esteja dentro, seja comentado. O coment�rio � �til para testar o c�digo sem ter que apagar algo. Ao inv�s de apagar algo para arrumar, apenas deixe a parte comentada.

/*

	A regra principal �: o usu�rio � burro. Devemos tentar prever todas as formas de quebrar o programa para arrumar antes, pois se elas existirem, v�o acabar sendo usadas.

	Lembrando sempre que C � uma linguagem case sensitve, ou seja, diferencia mai�sculas de min�sculas. Tome cuidado ao escrever.

 Operadores:


	+  = Soma
	-  = Subta��o
	*  = Multiplica��o
	/  = Divis�o
	%  = Mod (resto)
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



Uso de variaveis:

Ao declarar uma variavel, voc� armazena um espa�o na mem�ria para ela. Falaremos do tamanho de cada variavel abaixo.

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



 !!!!!!!!!!!!!!!!!!!!!!!!!!!!! IMPORTANTE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 
 
 
  							NUNCA, EU DISSE NUNCA, use goto na sua vida. Vai ferrar tudo e quebrar e voc� vai odiar a exist�ncia e vai xigar eu vizinho.
 
 
 
 */

