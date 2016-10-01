#include <stdio.h>
#include <stdlib.h>

//Estrutura que sera usada para realizar cadastro
struct cadastro
{
	int cod;
    char nome[30];
  	int idade;
    int peso;
    int vazio;

} registros[100];
//registros *codaux;

int vetor;

//Começo do programa principal
int main( void )
{
    int  opcao = 0, posicao, codaux, retorno, num = 100;
	
	vetor = funcaoVetorInteiros(num);		
	
    while ( opcao != 5 )
    {
        printf("MENU\n\n1 - Criar novo registro\n2 - Buscar Registro\n3 - Apagar Registro\n4- Creditos \n5 - Sair do programa\n\nOpcao: ");
        scanf("%d",&opcao);
        
        system("cls");
        switch ( opcao )
        {
            case 1: // CADASTRAR
            {
				posicao=verifica_pos();				
							
                cadastrar(posicao, vetor);                 

                
                break;

            }
            case 2: // CONSULTAR
            {
                consultar();
                break;
            }
            case 3: //EXCLUIR
            {
                excluir();
                break;
            }
            case 4: //CREDITOS
            {
                system("cls");
                printf("Programa desenvolvido pelos alunos:");
                printf("\nAlana Azevedo \nJuliana Xavier \nEzequiel Drews");
                
                break;
        	}
            case 5: //SAIR
            {
                 printf("\n Saindo!! Aperte qualquer tecla");
                 getchar();
                 break;
            }
            default :
                printf("Opcao Invalida");
                break;
        }
    }

    getchar();

    return 0;

}//Final da Main

int *funcaoVetorInteiros(int num)
{
	int *p;
	p = (int*)malloc(sizeof(int)*num);
	
	return p;
}


// FUNÇAO CADASTRAR
void cadastrar( int cod, int *p )
{
	
//   	registros[*p].cod = cod;

	printf("Registro: %d", *p);

    printf("\nEntre com o Nome:\n");
    gets(registros[*p].nome);

    printf("Entre com o peso:\n");
    gets(registros[*p].peso);

    printf("Entre com a idade:");
    gets(registros[*p].idade);        
  	
  	p++;
  	
    system("cls");

} //Final da Função Cadastrar

//FUNÇÃO CONSULTAR
void consultar( void )
{
    int cont = 0, cod;

    printf("\nEntre com o codigo\n");
    scanf("%d",&cod);

    system("cls");

    while ( cont <= 100 )
    {

//        if (registros[cont].cod==cod)
//        {
//            if (registros[cont].vazio==1)
//            {

                printf("\nNome: \n%s\n",registros[cont].nome);
                printf("\nPeso: \n%s\n",registros[cont].peso);
                printf("\nIdade: \n%s\n",registros[cont].idade);
                printf("\n");

                system ("pause");

                system("cls");

                break;
//
//            }
//        }

        cont++;

        if ( cont > 100 )
            printf("\nCodigo nao encontrado\n");

    }
}

////FUNÇÃO VERIFICA POSIÇÃO
int verifica_pos( void )
{
    int cont = 0;

    while ( cont <= 100 )
    {

        if ( registros[cont].vazio == 0 )
            return(cont);

        cont++;

    }

    return(-1);
}


//FUNÇÃO EXCLUIR
void excluir( void )
{
    int cod, cont = 0;
    char resp;

    printf("\nEntre com o codigo do registro que deseja excluir\n");
    scanf("%d", &cod );

    while ( cont <= 100 )
    {

//        if ( registros[cont].cod == cod )
//        { // FALTOU
//
//            if ( registros[cont].vazio == 1 )
//            {

                printf("\nNome: \n%s\n", registros[cont].nome );
                printf("\nPeso: \n%s\n", registros[cont].peso );
                printf("\nIdade: \n%s\n", registros[cont].idade );
                getchar();
//
//                printf("\nDeseja realmente exlucir? S/N:");
//                scanf("%c",&resp);
//
//                if ( ( resp == 'S' ) || ( resp == 's' ) )
//                {
//                    registros[cont].vazio=0;
//                    printf("\nExclusao feita com sucesso\n");
//                    break;
//                }
//                else
//                {
//                    if ( ( resp == 'N' ) || ( resp == 'n' ) )
//                    {
//                        printf("Exclusao cancelada!\n");
//                        break;
//                    }
//                }
//
//            }
//
//        }

        cont++;

        if ( cont > 100 )
            printf("\nCodigo nao encontrado\n");

    }

    system("pause");
    system("cls");

}
