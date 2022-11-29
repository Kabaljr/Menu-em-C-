#include <iostream> //biblioteca principal do c++
#include <ctime> 	// usada pra numeros aleatorios
#include <windows.h> // mudar a cor, usar cls
#include <conio.h>  //pra utilizar o getch
#include <iomanip> // biblioteca para setw
#include <stdio.h> // Biblioteca para uso do Gets
#include <locale.h> //Biblioteca para colocar caracter especial
#include <string.h> //Manipulação de String
using namespace std;

int opc, x, id=1; // variaveis globais

char cadastro(){ // função de cadastro, pesquisa e exlusão de cliente
	char nome[255][255], endereco[255][255], telefone[255][255], cpf[255][255]; //Vetor de nome tamanho 5 com limite de 255 caracter
	int  id2[255];

	
	
	if (opc == 1){ // opção pra cadastro de cliente
	system("cls"); //  limpar tela
	void logo(); // função logo
	logo();
	



	for(int i=x; i<=x; i++){ //For para colocar nome no vetor
		id2[i] = id;
		printf("					                  	Codigo: %d\n",id2[i]);
		printf("					                  	Digite o nome: ");
		fgets(nome[i],255,stdin); //uso do fgets para escrever um nome, 
		
		printf("					                  	Digite o CPF: ");
		fgets(cpf[i],255,stdin); //uso do fgets para escrever um CPF, 
		
		printf("					                  	Digite o telefone: ");
		fgets(telefone[i],255,stdin); //uso do fgets para escrever um Telefone, 
		
		printf("					                  	Digite o Logradouro: ");
		fgets(endereco[i],255,stdin); //uso do fgets para escrever um endereco, 
	
	}
	

	
	}	
	
	if (opc == 2){ // opção pra pesquisa de cliente
		int opc2; 
		char cpf2[255];
		
		
		system("cls"); //  limpar tela
		void logo();// função logo
		logo();
		printf("					                  	Como deseja pesquisar? \n");
		printf("					                  	1 - CPF\n");
		printf("					                  	2 - Lista de nome Com CPF\n");
		printf("					                  	:");scanf("%d",&opc2);
		while ((getchar()) != '\n');
		
		while((opc2 < 1) || (opc2>2)){ //while pra tatamento de erro por opção invalida
		system("cls"); //  limpar tela
		void logo();// função logo
		logo();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 04);printf("\n\n----------------------------------------------------------------------------OPÇÃO INVALIDA------------------------------------------------------------------\n\n");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("					                  	1 - CPF\n");
		printf("					                  	2 - Lista de nome Com CPF\n");
		printf("					                  	:");scanf("%d",&opc2);
		while ((getchar()) != '\n'); //limpa o buffer de entrada e permite a entrada no contêiner desejado.
		}
		
		if(opc2==1){
			printf("					                  	Digite o CPF: ");
			fgets(cpf2,255,stdin);
				for(int i = 0; i<=x-1; i++){
					if(strcmp(cpf2, cpf[i])){
					}
					else
					{

						system("cls"); //  limpar tela
						void logo();// função logo
						logo();
						printf("					                  	Codigo: %d\n",id2[i]);
						printf("					                  	nome: %s",nome[i]);
						printf("					                  	CPF: %s",cpf[i]);
						printf("					                  	Telefone: %s",telefone[i]);
						printf("					                  	Endereco: %s \n",endereco[i]);
					}
				}
		}
		if(opc2==2){
			
		system("cls"); //  limpar tela
		void logo();// função logo
		logo();
		
		for(int i=0; i<=x-1; i++){ //For para colocar nome no vetor
		printf("					                  	Codigo: %d\n",id2[i]);
		printf("					                  	nome: %s\0",nome[i]);
		printf("					                  	CPF: %s \n\n",cpf[i]);
		
		}
	
	
		}
	}
	
		if (opc == 3){ // opção pra exclusão de cliente
		
		char cpf3[255];
		int opc4,opc5,codigo;
		
		system("cls"); //  limpar tela
		void logo();// função logo
		logo();
		
		printf("					                  	Qual Opção deseja digitar pra Excluir o Cadastro: \n");
		printf("					                  	1 - Codigo: \n");
		printf("					                  	2 - CPF: \n");
		printf("					                  	: ");
		scanf("%d",&opc5);
		while ((getchar()) != '\n');
		
		
		if(opc5 == 1){
		system("cls"); //  limpar tela
						void logo();// função logo
						logo();
		
		printf("					                  	Digite o Codigo da pessoa a ser excluida do banco de dados\n");
		printf("					                  	:");scanf("%d",&codigo);

		for(int i = 0; i<=x-1; i++){
					if(codigo == id2[i])
					{
						do{
						
						system("cls"); //  limpar tela
						void logo();// função logo
						logo();
						printf("					                  	Deseja Excluir o Cadastro do(a): %s\0 ?",nome[i]);
						printf("					                  	1 - Sim\n",nome[i]);
						printf("					                  	2 - Não\n",nome[i]);
						printf("					                  	:");scanf("%d",&opc4);
						}while((opc4 <1) || (opc4 > 2));
						if(opc4 == 1){
						for(int j=i; j<=x-1; j++){
							strcpy(nome[j],nome[j+1]); //copiar o nome [j+1] pro pra posição a ser excluida
							strcpy(cpf[j],cpf[j+1]);
							strcpy(endereco[j],endereco[j+1]);
							strcpy(telefone[j],telefone[j+1]);
						}
						x--;
						
						}

					}
					
				}
						system("cls"); //  limpar tela
						void logo();// função logo
						logo();
				for(int i = 0; i<=x-1; i++){
						printf("					                  	Codigo: %d\n",id2[i]);
						printf("					                  	nome: %s",nome[i]);
						printf("					                  	CPF: %s",cpf[i]);
						printf("					                  	Telefone: %s",telefone[i]);
						printf("					                  	Endereco: %s \n",endereco[i]);
				}
			}
		
		
		if(opc5 == 2){
						system("cls"); //  limpar tela
						void logo();// função logo
						logo();
		
		printf("					                  	Digite o CPF da pessoa a ser excluida do banco de dados\n");
		printf("					                  	:");fgets(cpf3,255,stdin);

		for(int i = 0; i<=x-1; i++){
					if(strcmp(cpf3, cpf[i])){
					}
					else
					{
						do{
						
						system("cls"); //  limpar tela
						void logo();// função logo
						logo();
						printf("					                  	Deseja Excluir o Cadastro do(a): %s\0 ?",nome[i]);
						printf("					                  	1 - Sim\n",nome[i]);
						printf("					                  	2 - Não\n",nome[i]);
						printf("					                  	:");scanf("%d",&opc4);
						}while((opc4 <1) || (opc4 > 2));
						if(opc4 == 1){
						for(int j=i; j<=x-1; j++){
							strcpy(nome[j],nome[j+1]); //copiar o nome [j+1] pro pra posição a ser excluida
							strcpy(cpf[j],cpf[j+1]);
							strcpy(endereco[j],endereco[j+1]);
							strcpy(telefone[j],telefone[j+1]);
						}
						x--;
						
					}

						
					
					}
				}
						system("cls"); //  limpar tela
						void logo();// função logo
						logo();
				for(int i = 0; i<=x-1; i++){
						printf("					                  	Codigo: %d\n",id2[i]);
						printf("					                  	nome: %s",nome[i]);
						printf("					                  	CPF: %s",cpf[i]);
						printf("					                  	Telefone: %s",telefone[i]);
						printf("					                  	Endereco: %s \n",endereco[i]);
				}
			}
		
		}
	
	
	
}

	


int main(void)
{
	setlocale(LC_ALL, "");                                                                                                                        
                                                                                                                        
	int y;
	char nome1[255][255];
	
	
	do{
		system("cls"); //  limpar tela
	
		void logo();// função logo
		logo();
		
		printf("					                  	Bem vindo a empresa FortTechnology\n");
		printf("					                  	      Digite a opção desejada \n\n");
		printf("					                   	1 - Cadastrar Cliente\n\n");
		printf("					                   	2 - Pesquisar Cliente\n\n");
		printf("					                   	3 - Excluir Cliente\n\n");
		printf("					                   	4 - Sair\n\n");
		printf("					                 	: ");
		scanf("%d",&opc);
		
		
		while ((getchar()) != '\n'); //limpa o buffer de entrada e permite a entrada no contêiner desejado.
		if(opc == 1){
			void cadastro();
			cadastro();
			x++;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("\n\n--------------------------------------------------------------Cliente cadastrado com sucesso!!--------------------------------------------------------------\n\n");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			id++;
			system("pause");
			
		} else if(opc == 2){
			void cadastro();
			cadastro();
			system("pause");
		}
		else if(opc == 3){
			void cadastro();
			cadastro();
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("\n\n--------------------------------------------------------------Cliente excluido com sucesso!!--------------------------------------------------------------\n\n");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			system("pause");
		}
	}while(opc!=4);
	
	
}



































void logo(){
printf("                       .#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#.  \n");
printf("                     .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
printf("                     #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#\n");
printf("                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("                     @@@@@@@@#::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::#@@@@@@@@\n");
printf("                     @@@@@@@@!                                                                                                      !@@@@@@@@\n");
printf("                     @@@@@@@@!                                                                                                      !@@@@@@@@\n");
printf("                     @@@@@@@!                                                                                                       !@@@@@@@@\n");
printf("                     @@@@@@@@!                                                                                                      !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                                                      #@@@@@                                ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                                                     #@@@@@@!                               ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                                                    .@@@@@@@.                               ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                                                    @@@@@@@!                                ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                                                   !@@@@@@@                                 ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                                  .#@@@@#         .@@@@@@@.  #@@@@#.                        ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                              !#@@@@@@@@@#        @@@@@@@!  #@@@@@@@@@#!                    ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                         .!@@@@@@@@@@@@@@:       !@@@@@@@   :@@@@@@@@@@@@@@!.               ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                     .#@@@@@@@@@@@@@@@#.        .@@@@@@@:     .#@@@@@@@@@@@@@@@#.           ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                 .@@@@@@@@@@@@@@@@!             #@@@@@@!          .!@@@@@@@@@@@@@@@@.       ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                :@@@@@@@@@@@@#:                :@@@@@@@                :#@@@@@@@@@@@@:      ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                :@@@@@@@@@@@@@:.              .@@@@@@@:               .:@@@@@@@@@@@@@:      ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                 .@@@@@@@@@@@@@@@@!.          #@@@@@@#            .!@@@@@@@@@@@@@@@@        ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                     .!@@@@@@@@@@@@@@@@.     :@@@@@@@.        .#@@@@@@@@@@@@@@@#.           ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                          :@@@@@@@@@@@@@@!   @@@@@@@:       !@@@@@@@@@@@@@@!.               ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                              :#@@@@@@@@@#  #@@@@@@@        #@@@@@@@@@#:                    ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                                  .#@@@@#  .@@@@@@@          #@@@@#.                        ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                                           @@@@@@@!                                         ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                                          !@@@@@@#                                          ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                                         .@@@@@@@.                                          ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                                         :@@@@@@!                                           ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);printf("                                          !@@@@!                                            ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);printf("          !@@@@@@@@\n");
printf("                     @@@@@@@@!                                                                                                      !@@@@@@@@\n");
printf("                     @@@@@@@@!                                                                                                      !@@@@@@@@\n");
printf("                     @@@@@@@@!                                                                                                      !@@@@@@@@\n");
printf("                     @@@@@@@@!                                                                                                      !@@@@@@@@\n");
printf("                     @@@@@@@@#::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::#@@@@@@@@\n");
printf("                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("                     #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#\n");
printf("                     .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
  printf("                     .#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#.  \n");
printf("                                                                   #@@@@@@@@@@@@@@@@@@@@@@@@@@#                                              \n");
printf("                                                                   #@@@@@@@@@@@@@@@@@@@@@@@@@@#                                              \n");
printf("                                                                   #@@@@@@@@@@@@@@@@@@@@@@@@@@#                                              \n");
printf("                                                                   #@@@@@@@@@@@@@@@@@@@@@@@@@@#                                              \n");
printf("                                                                   #@@@@@@@@@@@@@@@@@@@@@@@@@@#                                              \n");
printf("                                                                   #@@@@@@@@@@@@@@@@@@@@@@@@@@#                                              \n");
printf("                                                  .::::::::::::::::#@@@@@@@@@@@@@@@@@@@@@@@@@@#::::::::::::::::.                             \n");
printf("                                               !@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@!                          \n");
printf("                                              !@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@!                         \n");
printf("                                              #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#                         \n");
printf("                                              .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.                         \n");
printf("                                                .#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#.                           \n");
printf("                                                                                                                       \n");
printf("					                     																		                      \n");
}
