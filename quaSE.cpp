#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

main () {//abertura fun�ao princial
     system ("color F9");
	
	float preco[150],estoque[150], NFPreco_Produto[150],codigo[150], aux; //Vetores e vari�veis que trabalham com pre�o	 
    char nome[10];
	int troca=0, a=0,b=0,x=0, v=0, rel=0, y, i, cod_exclui, quant=0; //Declara��o de vari�veis utilizadas para leitura, grava��o, exlclus�o e ordenar vetores
	int  codigoNF[150], codigoVenda[v], NFCod_Produto[150], NFCod[150], NFEstoque_Produto[150], procura_cod, procura_est, vetor_ref; //Declara��o de Vetores diversos
	int op_Menu_Pricipal, op_Menu_Estoque, op_Menu_Venda, op_Menu_Relat, opGeral, teste, teste_est; //Variav�is de Menus e condi��es
     do {//abertura do inicial
     system ("cls"); // limpa a tela
     cout<< "BEM VINDO AO CONTROL SOFTWARE \nESCOLHA SUA OPCAO  \n[1]Cadastrar Produto \n[2] Excluir Produto\n[3] Estoque Atual \n[4] Sair";
     cin>>a;// a  escolha do que fazer 
     switch (op_Menu_Pricipal) {//abertura switch
            case 1:
                 do { 
                 system ("cls");
                    cout<< "INCLUSAO DE NOVO PRODUTO";
                    teste=0;
                    
                    cout<<"\n\nInsira o Codigo do produto:\n";
                    cin>>codigo[v];
                    				 
                    cout<<"Insira o preco do produto:\n";
                    cin>>preco[i];
                    cout<<"Insira o nome do produto:\n";
                    cin>>nome;
                    cout<<" Quantidade: \n";
                    cin>> quant;
                    cout<< " \n\n Deseja incluir um novo produto? \n\n [1] - sim \n [2] - Nao  \n\n Sua Escolha:";
                     cin>> teste;//Captura de vari�vel para repeti��o de inclusao
                    if (quant < 0)
                    {
                    cout<<" ERRO - QUANTIDADE NEGATIVA \n";
                    	 }
                      }
				 while (teste==1);//Fim de condi��o QUANTIDADE EM ESTOQUE
			  
			  system ("cls");
			  		 
			  while (teste=!2);//Fim da repeti��o para inclus�o de novo produto
			  system ("cls");
			  cout<<" CONTROL - SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\nO que deseja fazer:\n[1] - Voltar ao Gerenciador de Estoque\n[2] - Voltar ao Menu Pricipal\nSua escolha: ";
			  cin>> a; //Tomada de decis�o, voltar ao menu principal ou ao menu anterior
			  break;
           
              
                  
			 case 2:
		
            do  //Voltada a repeti��o e exclus�o
  			{
				cout<<"CONTROL SOFTWARE  \n\nEXCLUSAO DE CADASTRO\n";
			  cout<< "Informe o codigo a ser excluido: ";
			  cin>> procura_cod;
			  teste=0;
				 for (i=0; i<x; i++) //Ele procura o c�digo
				 {
			   		if (procura_cod==codigo[i])
			   		{
					cout<< "Codigo Encontrado!\nExcluido com sucesso!";
					teste=1;
	 				cod_exclui=i;
	 				i=x;
					   for (i=cod_exclui; i<x; i++) //Reordena os vetores e exclui o selecionado(executa a exclus�o)
   					   {
			 		   codigo[i]=codigo[i+1]; //Exclui o c�digo selecionado
					   preco[i]=preco[i+1]; //Exclui o pre�o referente ao c�digo selecionado
					   estoque[i]=estoque[i+1]; //Exclui a quantidade de estoque referente ao c�digo selecionado
	   				   }
					rel=rel-1; //Atualiza o vetor, j� que agora temos menos um item registrado
					x=x-1;  //Atualiza o vetor, j� que agora temos menos um item registrado
					}
				}
					  
 				 if (teste==0)
 				 {
	   			 cout<< "Codigo nao encontrado!"; 
				 }
			  cout<<"\n\nDeseja excluir outro cadastro?\n[1] - Sim\n[2] - Nao\nSua Escolha:";
			  cin>> teste;
			  system ("cls");
			  }
			  while (teste==1); //Condiciona se vai excluir outro ou n�o
			  system ("cls");
			  cout<< "CONTROL SOFTWARE \n\nO que deseja fazer:\n[1] - Voltar ao Menu Principal[2] - Sair\nSua escolha: ";
			  cin >> opGeral;
		   
             
            while(teste!=2);//fechamento switch
			system ("PAUSE");
			
      break;
			
			case 3:
                 do
                 {

			  cout<< "SIGVER - RELATORIOS\n\nRELATORIO COMPLETO DE ESTOQUE\n\n";
				 if (x==0) 
				 {
				 cout<<"Nenhum produto em estoque\n";
				 }
				 else
				 {	
                     
				 do //Metodo bolha, para ordenar os codigos
				 {	
 	 	 
   				 
                       for (i=0; i<rel; i++)
					  {
						 if (codigo[i]>codigo[i+1]){
                                                    
 			 		   
	 		 		   aux=codigo[i+1];
	 		 		   codigo[i+1]=codigo[i];
	 		 		   codigo[i]=aux;
	 		 		   
	 		 		   aux=preco[i+1];
	 		 		   preco[i+1]=preco[i];
	 		 		   preco[i]=aux;
	 		 		   	 		 		   
					   aux=estoque[i+1];
	 		 		   estoque[i+1]=estoque[i];
	 		 		   estoque[i]=aux;
					   troca=1;
	 		 		   }
	   			   }
   				 }
				 while (troca==1); //Fim do uso do metodo bolha	
					for (i=0; i<rel; i++) //Gera��o do relat�rio utilizando a pesquisa em vetores
					{
					cout<<"||Codigo: ";
                    cin>> codigo[i];
                    cout<< "|| Preco:";
                    cin>> preco[i];
                    cout<< "||Quantidade em Estoque:";
                    cin>> estoque[i];
                    i=x+1;
					   }
					   
					   
						   if (i==x)
						   {
						   cout<<"\nCodigo nao encotrado\n";
         
					
				 
              }
              }
               cout<< "\nO que deseja fazer:\n[1] - Voltar ao Menu Relatorio\n[2] - Voltar ao Menu Pricipal\nSua escolha: ";
		   cin>> opGeral;
     
		   break;        

		   	 case 4:
		cout<<"CONTROL SOFTWARE \n\nObrigado por utilizar este software\n\n"; //Mensagem final
		opGeral=0;
		system ("pause");
	 break;

	 default: 
              }
              }
           
           system("pause");  
             }
             //fechamento do inicial

// fechamento fun�ao principa

