#include <stdio.h>
#include <math.h>

void ExibeMenu(){       //FUNÇAO QUE EXIBE AS OPÇÕES DO MENU
	
	printf("\n-----------------------MENU-----------------------\n");
	printf("1 - Calcular fatorial: \n");
	printf("2 - Verificar numero primo: \n");
	printf("3 - Verificar mais de um numero primo: \n");
	printf("4 - Calcular potencia de um numero: \n");
	printf("5 - Calcular raiz de um numero: \n");
	printf("6 - Verificar ano bissexto: \n");
	printf("7 - Calcular media de 2 notas: \n");
	printf("8 - Media ponderada de 3 notas: \n");
	printf("9 - Exibir nome e matricula em hexadecimal: \n");
	printf("--------------------------------------------------\n");
	
}

int Fatorial(){         //FUNÇÃO PARA CALCULO DE FATORIAL

	int i, num, result;
	
	printf("Informe um numero inteiro positivo: ");
	scanf("%d", &num);
	result = num;
	
	if(num>0){
		for(i=num-1; i>1; i--){
			result = result * i;
		}
		printf("O fatorial de %d = %d \n\n", num, result);	
	}
	else{
		printf("Informe um numero valido !!! \n");
	}
	
	return 0;
}

int Primo(){			//FUNÇÃO PARA VERIFICAÇÃO DE NUMERO PRIMO
	int num, i=0, primo=0;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);
	
	for(i=num/2; i>=2; i--){
		if(num%i==0){
			primo ++;
		}
		//printf("num=%d  i=%d primo=%d \n", num, i, primo);              //DEBUG
	}
	
	if(primo>0){
		printf("O numero %d nao e primo!!! \n", num);
	}
	else{
		printf("O numero %d e primo!!! \n" , num);
	}
}

void NPrimo(){			//FUNÇÃO PARA VERIFICAÇÃO DE VÁRIOS NUMEROS PRIMOS
	int num, i=0, primo;
	
	do{
		primo=0;
		printf("Informe um numero inteiro: (Digite 0 para sair!!!)\n");
		scanf("%d", &num);
		
		if(num==0){
			break;
		}
	
		for(i=num/2; i>=2; i--){
			if(num%i==0){
				primo ++;
			}
		}
		//printf("num=%d  i=%d primo=%d \n", num, i, primo);              //DEBUG
	
		if(primo>0){
			printf("O numero %d nao e primo!!! \n", num);
		}
		else{
			printf("O numero %d e primo!!! \n" , num);
		}
	}while(num!=0);
}

void Potencia(){		//FUNÇÃO PARA CALCULAR POTENCIA DE UM NUMERO A ELEVADO A B
	float a, potencia;
	int i,b;
	
	printf("Informe o ponto flutuante: \n");
	scanf("%f", &a);
	printf("Informe a potencia: \n");
	scanf("%d", &b);
	
	potencia =(float) pow(a,b);
	printf("Valor de %.1f elevado a %d = %.1e \n",a,b,potencia);
}

void Raiz(){			//FUNÇÃO PARA CALCULAR A RAIZ DE UM NUMERO A NA BASE B
	float a, raiz;
	int i,b;
	
	printf("Informe o ponto flutuante: \n");
	scanf("%f", &a);
	printf("Informe a base: \n");
	scanf("%d", &b);
	
	raiz =(float) pow(a,1.0/b);
	printf("Raiz de %.1f na base %d = %.1e \n",a,b,raiz);
}

void Bissexto(){		//FUNÇÃO PARA VERIFICAR ANO BISSEXTO
	int ano;
	
	printf("Informe o ano a ser verificado: \n");
	scanf("%d", &ano);
	
	if (ano % 4 == 0){
    	printf("O ano %d E bissexto !!!\n",ano);
  	}
	else{
  		printf("O ano %d NAO E bissexto !!!\n",ano);
	}
}

void Media2(){			//FUNÇÃO PARA CALCULAR MEDIA ARITMETICA DE DUAS NOTAS
	float nota1, nota2, media;
	
	printf("Informe a primeira nota: \n");
	scanf("%f", &nota1);
	printf("Informe a segunda nota: \n");
	scanf("%f", &nota2);
	media =(float) (nota1+nota2)/2.0;
	
	if(media >=0 && media <=10){
		printf("Media = %.1f \n",media);
	}
	else{
		printf("Valor das notas invalido !!!\n");
	}
}

void MediaP(){			//FUNCAO PARA CALCULAR MEDIA PONDERADA DE TRES NOTAS
	float nota1,nota2,nota3,media;
	
	printf("Informe a primeira nota: \n");
	scanf("%f", &nota1);
	printf("Informe a segunda nota: \n");
	scanf("%f", &nota2);
	printf("Informe a terceira nota: \n");
	scanf("%f", &nota3);
	media =(float) ((nota1*1)+(nota2*1)+(nota3*2)) /4.0;
	
	if(media >= 6.0){
		printf("Voce foi aprovado!!! Media = %.1f \n",media);
	}
	else{
		printf("Voce foi reprovado!!! Media = %.1f \n",media);
	}
}

void ExibeMatricula(){	//FUNÇÃO PARA EXIBIR O NOME E DEPOIS A MATRICULA EM HEXADECIMAL
	char nome[40];
	int matricula;
	
	printf("Informe sua matricula: \n");
	scanf("%d", &matricula);
	
	fflush(stdin);
	printf("Informe seu nome: \n");
	fgets(nome,sizeof(nome),stdin);
	
	printf("\n -----INFORMACOES DO ALUNO(A):-----\n"
		   "Nome: %s \n"
		   "Matricula: %x \n",nome,matricula);
}

int main(){
	int op;
	
	do{
		ExibeMenu();
		printf("Escolha uma opcao: \n");
		scanf("%d",&op);
		switch(op){
			case 0:
				printf("Finalizando Programa !!! \n");
				break;
			case 1:
				printf("-----Calcular fatorial----- \n");
				Fatorial();
				break;
			case 2:
				printf("-----Verificar numero primo----- \n");
				Primo();
				break;
			case 3:
				printf("-----Verificar mais de um numero primo----- \n");
				NPrimo();
				break;
			case 4:
				printf("-----Calcular potencia de um numero----- \n");
				Potencia();
				break;
			case 5:
				printf("-----Calcular raiz de um numero----- \n");
				Raiz();
				break;
			case 6:
				printf("-----Verificar ano bissexto----- \n");
				Bissexto();
				break;
			case 7:
				printf("-----Calcular media de 2 notas----- \n");
				Media2();
				break;
			case 8:
				printf("-----Media ponderada de 3 notas----- \n");
				MediaP();
				break;
			case 9:
				printf("-----Exibir nome e matricula----- \n");
				ExibeMatricula();
				break;
			default:
				printf("Opcao Invalida !!! \n");
				break;
		}	
	}while(op!=0);
	
	return 0;
}
