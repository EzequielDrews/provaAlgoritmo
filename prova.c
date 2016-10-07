// <---><---><---><---><---><---><---><---><---><---><---><---><---><---><---><---><---><---><--->
// PROGRAMA COM MENU INTERATIVO PARA CRIACAO DE REGISTROS
// 
// Autor(a): Alana Azevedo, Ezequiel Drews e Juliana Xavier
// Data: 30/09/2016
// <---><---><---><---><---><---><---><---><---><---><---><---><---><---><---><---><---><---><--->

#include <stdio.h>
#include <string.h>


typedef struct 
{ 
	int cod; 
	char Nome[50]; 
	int Peso;
	int Idade; 		 
} Registros; 


void main()
{

	int cod = 1;

	Registros * Dados[50];
	

	while(1)
	{

		int opcao = 0;
		

		printf("########### MENU PRINCIPAL ############\n\n");
		printf("Numero de Registros: %d\n\n", cod - 1);
		printf("Entre com um comando:\n\n");	

		printf("1 - Criar um novo registro\n2 - Busca de registros\n3 - Apagar um registro\n4 - Creditos\n5 - Sair do programa\n\nEscolha: ");
		scanf("%d",&opcao);
		fflush(stdin);
		

		switch(opcao)
		{
		
			case 1:
				{

					system("cls");
					printf("############# CADASTRAR ##############\n\n");					
	
					Dados[cod] = (struct Registros *)calloc(sizeof(Registros),1);
					
				
					printf("\nRegistro: %d\n",cod);
					Dados[cod]->cod = cod;
					printf("Entre com o nome: ");
					scanf("%s",&Dados[cod]->Nome);
					fflush(stdin);
					printf("Entre com seu peso: ");
					scanf("%d",&Dados[cod]->Peso);
					fflush(stdin);
					printf("Entre com sua idade: ");
					scanf("%d",&Dados[cod]->Idade);
					fflush(stdin);
					printf("\n\n");
					system("pause");
					system("cls");
		
					cod++;
				}                        
			break;
	
			case 2:
				{
				
					while(1)
					{
				
						system("cls");
						printf("############## Buscar ##############\n\n");
						
						int codBuscar, Temp, sair;
						
						if(sair==2) printf("Se deseja sair, digite 541\n\n");	
							
						 
							
							printf("\n\nBUSCAR POR REGISTROS\n");
						
							printf("\nEntre com o registro desejado: ");
							scanf("%d",&codBuscar);
							fflush(stdin);
						
						if(codBuscar==541)
						{
							system("cls");
							sair = 0;
							break;
						}
						
						else if(codBuscar>cod-1 || codBuscar <= 0)
						{
							printf("\n\tCodigo * %d * INVALIDO, digite um codigo que seja valido!\n\n", codBuscar);
							sair = 2;
						}
						
						else
						{
							
							printf("Registro: %d\n",Dados[codBuscar]->cod);
							printf("Nome: %s\n",Dados[codBuscar]->Nome);
							printf("Peso: %d\n",Dados[codBuscar]->Peso);
							printf("Idade: %d\n\n",Dados[codBuscar]->Idade);
							system("pause");
							system("cls");
							sair = 0;
							break;
						}
						
						system("pause");
						system("cls");
					}
				}
			break;
			
			case 3:
				{
					
					while(1)
					{	
					
						int codApagar, i, A = -1, sair;
						
						system("cls");
						printf("\t\t\t\tAPAGAR\n\n");
						
						
						if(sair==1) printf("Se deseja sair, digite 541\n\n");
							
							printf("APAGAR REGISTROS\n");
							printf("\nDigite o Codigo do registro que voce deseja apagar: ");
							scanf("%d",&codApagar);
							fflush(stdin);
						
						if(codApagar==541)
							{
								system("cls");
								sair = 0;
								break;
							}
						
						else if(codApagar>cod-1 || codApagar <= 0)
							{
								printf("\n\tCodigo > %d < INVALIDO, digite um codigo que seja valido!\n\n", codApagar);
								sair = 1;
								printf("\n\n");
								system("pause");
								system("cls");
							}
						
						else
							{
													
								free(Dados[codApagar]);
								cod--;
								printf("\n\n");
								system("pause");
								system("cls");
								break;
						}
					}
				}
			break;
			
			case 4:
				{
					
					system("cls");
					printf("\t\t\t\t\t\tCREDITOS\n\n");
					printf("Programa desenvolvido pelos alunos:\n\n");
					printf("Ezequiel Drews\n");
					printf("Alana Azevedo\n");
					printf("Juliana Xavier\n\n");
					system("pause");
					system("cls");
				}
			break;
			
			case 5:
				{
				
					system("cls");
					printf("Saindo da Agenda de Dados. Obrigado!\n\n");
					system("pause");
					
					return 5;
				}
			break;
			
			default:
				{
					
					system("cls");
					printf("\t\t\t\tErro!!\n\n");
					printf("\tOpcao Inexistente! Tente Novamente ou Digite 5 para sair!\n\n");
				}
		}
		
		
	}
}
