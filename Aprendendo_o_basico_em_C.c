
// Feito por Guilherme Le�o - IFSP - ADS, para ajudar os iniciantes.
// Qualquer d�vida entre em contato. links de contato em: https://somnus.dev
// Anota��es b�sicas e �teis no fim do programa.


/*

Ordem:

 (Comece o programa pela linha pontilhada ap�s ver sobre as bibliotecas)

- Usando bibliotecas
- Come�ando o programa
- Apresenta��o printf/scanf
- Condicionais : if/else
- Condicionais : switch/case
- Trabalhando com vetores e la�o de repeti��o while
- Trabalhado com String 1
- Quebrando um la�o com break
- Utilizando o la�o do while e o la�o for
- Sub-Rotinas: Procedimentos
- Sub-Rotinas: Fun��es
- Vari�veis globais/locais
- Passagem por refer�ncia
- WIP : Ponteiros
- WIP : Structs
- WIP : Extras (sleep, define...)

*/

// Usando bibliotecas

// Precisamos das bibliotecas para usar fun��es "pr� feitas" da linguagem, sem elas o programa n�o funcionar�. Podemos fazer nossas bibliotecas, entraremos nisso depois.

#include<stdio.h>  // Biblioteca para fun��es basicas (printf, scanf).
#include<stdlib.h>  // Biblioteca com outras fun��es, system("pause"), system("cls").
#include<locale.h>  // Biblioteca para alterar idiomas.







int global; // declarando vari�vel global







void testeRef(float *testeRef){ // Nesse caso, para receber um endere�o pelo par�metro, precisaremos colocar um "*" em frente da vari�vel, pois estaremos fazendo um ponteiro para receber o endere�o. Ponteiros s�o vari�veis que apontam para endere�os de mem�ria. Vamos aprender logo sobre ponteiros.
	
	*testeRef = *testeRef / 2;
	
}






void mostrarGlobal(){
		
	printf("\nO valor da vari�vel global na fun��o �: %d\n\n", global);   // mostrando o valor da vari�vel global na fun��o.
		
}







int dobroNum(int valor){ // A fun��o ser� feita toda acima do main, e n�o ir� precisar de declara��o. Dentro dos parenteses precisamos colocar uma vari�vel para receber o que passamos por par�metro.
						 // Come�amos com int, pois retornaremos um valor inteiro. 
						 // Dentro de "valor", temos o mesmo n�mero que mandamos da vari�vel func, 5.
						 
	valor = valor * 2;						 
	
	return valor; // Aqui colocamos o retorno da fun��o, estamos retornando uma vari�vel local da fun��o.
}






void printMsg(); // O natural seria digitar a fun��o acima do main, mas como � mais "f�cil" diigtar embaixo, podemos declarar a fun��o antes do main e ela ir� funcionar. IMPORTANTE: em compiladores mais novos o programa ir� funcionar sem a declara��o, mas no Dev 4.9 por exemplo, daria ruim.







/*

 -------------------------------COMECE POR AQUI!!!!!!----------------------------------------------------------------------------------------------------------

*/







 //Come�ando o programa
 
 
int main(void){ // Chamando a fun��o principal, onde o programa come�a. Usamos o "int" e o "void" para evitar problemas ocasionais, por�m funciona apenas main(). Devemos abrir e fechar a fun��o com { no come�o e } no fim.
	
	setlocale(LC_ALL, "portuguese"); //Setando o idioma do arquivo como portugu�s, se n�o, acentos e caracteres da nossa linguagem ir�o bugar.
	
	
	
	
	
	
	//Apresenta��o do printf e scanf
	
	int inteiro =0; //Declarando uma variavel do tipo int (inteiro) e inicializando ela, �til para evitar bugs em alguns programas menores como esse, em programs maiores talvez n�o seja t�o vantajoso.
	
	char caractere; //Declarando uma variavel do tipo char.
	
	printf("O C � bonito\n\n"); // Printando algo na tela, o \n pula uma linha, para deixar tudo mais f�cil de ler..
	
	printf("Digite um n�mero para ser feliz: "); // Printando para o usuario escrever algo.
	
	scanf("%d",&inteiro); // Scaneando algo que o usuario escreveu, do tipo int pelo %d (Falamos sobre os tipos de variavel nas anota��es no fim do programa). Lembrando que se digitarmos um caractere, o programa ir� bugar totalmente. Burle isso usando um "if", aprenderemos logo.
						  // Lembrando que em um scanf nunca podemos esquecer o "&", pois isso significa que o que estamos digitando, est� indo para o endere�o de mem�ria da v�riavel escrita depois dele. 1 "&" = endere�amento.
	
	printf("\nDigite uma letra para ser feliz em dobro: ");
	
	fflush(stdin); // Limpando o buffer do teclado, sempre fazer isso antes de scanear um char, ou vai bugar e vai receber nada.
	
	scanf("%c",&caractere); // Scaneando do tipo char, %c.
	
	printf("\nEscrevi em inteiro: %d.\nEscrevi em caractere: %c.\n\n",inteiro,caractere); //Escrevendo na tela o valor das variaveis int e char, deve colocar o nome das variaveis fora das aspas.
	
	system("pause"); // Pausa o programa at� algum bot�o ser apertado.
	
	
	
	
	
	
	
	// Usando if e else
	
	system("cls"); // Fun��o para limpar a tela do programa para melhor visualiza��o.
	
	int usandoIf;
	
	printf("Digite um n�mero e veja se � par: "); 
	
	scanf("%d",&usandoIf);
	
	if(usandoIf % 2 == 0){ // No caso estamos fazendo uma condi��o. If (se) a variavel tiver o resto 0 dividindo por 2 (usando o % para obter o resto), ele escreve na tela que o n�mero � par. 
		
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
		printf("\nSeu sexo � masculino\n\n");  		// Escreve que o sexo � masculino
		break;										// break quebra o switch e passa para a pr�xima instru��o
		
	case 'M':										// Mesma coisa do de cima, mas como a linguagem � case sensitive, temos que fazer maiusculo, vamos aprender como burlar isso depois.
		printf("\nSeu sexo � masculino\n\n");
		break;
		
	case 'f':
		printf("\nSeu sexo � feminino\n\n");
		break;
		
	case 'F':
		printf("\nSeu sexo � feminino\n\n");
		break;
		
	default:																	//default � acionado caso nenhuma das condi��es serem resolvidas. � o "else" do switch.
		printf("\nO programa s� funciona com sexo masculino e feminino\n\n");	
			
		
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
	
	
	char cadeia[20]; // Criando um vetor de caracteres para poder trabalhar com String, ou cadeia de caracteres, usado por exemplo para digitar um nome. Isso � feito pois string n�o � um tipo primitivo, e n�o existe em C.
	
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
				printf("\n Voc� saiu do loop!");        //Essa � a melhor maneira de fazer um programa para cadastrar varias pessoas em seguida por exemplo.
				break;
			}
			
			printf("\nO Guigui � lindo\n");
			
			
		}
	
	system("cls");







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
											
									
	printf("\nVetor posi��o %d: %d\n", contador+1,vetorDW[contador]);

	}
	
	system("pause");
	
	system("cls");
	
	
	
	
	
	
		
	//Sub-Rotinas: Procedimentos
	
	printMsg(); // Um procedimento, � uma "fun��o sem retorno". Utilizamos para fazer algo no programa que n�o precise de retorno, como printar uma mensagem. 
	            // Do mesmo jeito que usamos uma fun��o da linguagem, usamos o nome da fun��o e os "()". O procedimento est� embaixo do main.
	
	system("pause");

	system("cls");
	
	
	
	
	
	
	
	//Sub-Rotinas: Fun��es
	
	int func; // Vamos fazer uma fun��o com retorno do dobro do n�mero, ent�o declaramos "func" como inteiro.
	
	int funcRes;  // Declaramos um int para receber o retorno da fun��o.
	
	printf("Digite um n�mero para saber seu dobro: ");
	
	scanf("%d",&func);
	
	funcRes = dobroNum(func); // Para passar um valor pra fun��o, colocamos o valor dentro dos parenteses. Com isso, estamos passando um par�metro para a fun��o. Estamos usando passagem por valor.
							  // A passagem por valor faz uma c�pia do que existe dentro da vari�vel em um novo espa�o de mem�ria. Veremos apenas esse meio por enquanto.
							  // Desta vez, a fun��o foi feita toda antes do main, veja l� em cima.
							  // funcRes recebe o retorno da fun��o dobroNum() com o par�metro func.
	
	printf("\n\nO dobro do n�mero �: %d\n\n",funcRes); // Verificando se tudo funcionou.
		
	system("pause");
	
	system("cls");
	
	
	
	
	
	
	// Vari�veis globais / locais
	
	// Instaciamos uma vari�vel int antes do "main", veja em cima.
	// Ao fazer isso, instanciamos uma vari�vel global. Vari�veis globais s�o vari�veis fora de qualquer fun��o.
	// Ao usar uma vari�vel global, o valor dela serve para todo o programa, em todas as fun��es a vari�vel � a mesma.
	// Ao criar uma vari�vel dentro de uma fun��o, seja o main ou n�o, ela s� existe dentro do escopo dessa fun��o, por isso passamos vari�veis por par�metros.]
	// Vari�veis globais podem ser �teis de vez em quando, mas n�o s�o uma pr�tica t�o boa. Para utilizar isso de outra maneira melhor, iremos aprender um pouco sobe endere�o de mem�ria um pouco a frente.
	
	printf("Digite um n�mero para a vari�vel global: ");
	
	scanf("%d", &global); // Gravamos um valor na vari�vel global.
	
	printf("\nO n�mero na fun��o principal �: %d\n", global);
	
	mostrarGlobal(); // vamos mostrar o valor na fun��o a parte (est� acima do main, apartir daqui, todas ser�o feitas assim).
	
	system("pause");
	
	system("cls");
	
	
	
	
	
	
	// Passagem por refer�ncia
	
	
	float ref;  // Instanciamos um real para saber a metade.
	
	printf("Digite um n�mero para saber sua metade: ");
	
	scanf("%f",&ref);
		
	testeRef(&ref); // Estamos chamando a fun��o (que est� no topo do programa) com um "&" na frente do nome da vari�vel, pois dessa vez, passamos o endere�o da vari�vel.
					// Fazendo isso, n�o � feita uma c�pia do valor, mas � refer�nciado o endere�o, e tudo que for mudado l� em qualquer fun��o, afetar� a mesma vari�vel. Um modo mais eficiente de "globalizar" uma vari�vel.					
	
	printf("\nA metade �: %.2f\n\n", ref); // Ao mostrar um float ou um double, podemos colocar quantas casas decimais queremos que o programa mostre. Para usar isso, usamos um numero "." outro, sendo o primeiro para a parte inteira e o segundo para partes decimais. .2f significa que ser�o mostradas apenas 2 casas decimais.
	
	system("pause");
	
	system("cls");




	
			
	puts("\n"); // A fun��o puts significa "put string", que nada mais � que printar algo na tela, por�m n�o recebe variaveis como o printf, apenas strings. 
	            // Como vamos apenas pular linhas, � mais r�pido escrever puts que printf (lembrando que a fun��o j� pula 1 linha por si s�).
	
	printf("Este foi seu primeiro programa!\n\n");
	
	
	system("pause"); // Pausando o programa para ver o que fizemos.
	
	return 0; // Fazemos isso para evitar bugs, retorno padr�o do main (A fun��o n�o ir� retornar nada).
}


void printMsg(){ // Para fazermos a fun��o, devemos primeiramente escrever o tipo de retorno. Como um procedimento � uma fun��o sem retorno, escrevemos void (nada). Lembrando que a fun��o est� declarada antes do main. Leia as anota��es da declara��o l� em cima.
		
	printf("O Guigui � legal\n");		// Digitamos o c�digo a ser executado aqui.		
		
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
	& = Endere�o
	* (antes do nome de vari�vel) = ponteiro
	Para aparecer um "%" no printf, use dois "%%"
 
	Para facilitar a vida, podemos ao inv�s de fazer a = a + b ao fazer uma opera��o, podemos fazer a += b, ou a -= b, e por ai vai. O resultado � o mesmo.



Uso de variaveis:

Ao declarar uma variavel, voc� armazena um espa�o na mem�ria para ela. Falaremos do tamanho de cada variavel abaixo.

Devemos lembrar que em computa��o, sempre estamos de uma maneira ou de outra trabalhando com bin�rios. 
Ent�o, 8 bits em bin�rio equivalem a 1 byte. Logo, em 1 byte podemos representar um n�mero em bin�rio at� 8 bits, (255, lembrando que sempre come�amos em 0).

char (character) = Guarda 1 caractere, num alcance de 256(8 bits), pesa 1 byte.
int (integer) = N�meros inteiros, pode guardar n�meros de at� 4 bytes.
float (floating) = N�meros em ponto flutuante, para representar reais. Tem 4 bytes. Fazer contas com n�meros float com v�rgula gera imprecis�o pois os n�meros s�o calculados em bin�rio, e isso gera d�zimas.
double = N�meros reais tamb�m, por�m com o dobro de alcance do float. Tem 8 bytes. Ainda tem problemas para calcular n�meros com virgula. (Esses problemas s� s�o not�veis em apps que precisam de 100% de precis�o, como bancos manipulando dinheiro)
string = Cadeia de caracteres, tem o tamanho dependendo do que o usu�rio determina.


%d / %i = inteiro
%c = caractere (podemos tamb�m colocar um valor para imprimir o equivalente a ele na tabela ASCII)
%f = float
%lf = double (long float)
%s = string
%p = endere�o de mem�ria em hexadecimal (pointer)




 !!!!!!!!!!!!!!!!!!!!!!!!!!!!! IMPORTANTE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 
 
 
  							NUNCA, EU DISSE NUNCA, use goto na sua vida. Vai ferrar tudo e quebrar e voc� vai odiar a exist�ncia e vai xigar seu vizinho.
 
 
 
 Fazer tudo isso escutando essa playlist: https://open.spotify.com/user/12166805913/playlist/3jIgrTbMtylVqtrKjhOaui?si=Fx0XhhLAToOSlWsD757asQ � MUITO BOM!!!!
 
 
 */

