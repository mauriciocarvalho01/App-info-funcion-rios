#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "colors.h"

typedef struct fluxovendas 
{
	char regiao;
	char vendedor;
	float vendas;
	float meta;
	float media;
	float dif;
	
}flux;
typedef struct funcionarios 
{
	char setor;
	char funcio;
	char sobre;
	
}func;

int main()
	{
		flux vendas[5];
		func info[3];
		int opc;
		system("color F8");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t[1] Vendas\t[2] Funcionarios\t[3] Frota\n\t\t\t\t\t\t\t");
		scanf("%d",&opc);
		system("cls");
	
	
		switch(opc)
		{

			case 1:
				vendas[0].meta = 600.00;
				vendas[1].meta = 800.00;
				vendas[2].meta = 700.00;
				printf("Regioes: Leste, Oeste, Norte\n");
				printf("Digite a primeira letra da regiao\n");
				vendas[0].regiao = getche(); // semelhante ao scanf
				system("cls");
				vendas[0].regiao = toupper(vendas[0].regiao);
				printf("\n");
				
				switch(vendas[0].regiao)
				{
					case 'L'://Região Leste//
						printf("Vendedores:\n\nJapones\nMiguel\nAnderson\nWilson\n\n");
						printf("Informe a primeira letra do vendedor\n");
						vendas[0].vendedor = getche();
						system("cls");
						vendas[0].vendedor = toupper(vendas[0].vendedor);
						printf("\n");
						
						switch(vendas[0].vendedor)
						{
							case 'J'://vendedor japones//
								printf("Digite o valor vendido:\nR$:");
								scanf("%f",&vendas[0].vendas);
								system("cls");
								printf("Meta:\nR$:%.2f\n",vendas[0].meta);
								if(vendas[0].vendas > vendas[0].meta)
								{
									vendas[0].dif = vendas[0].vendas - vendas[0].meta;
									vendas[0].media = (vendas[0].dif * 100)/ vendas[0].meta;
									printf("O vendedor ultrapassou a meta em R$:%.0f\n",vendas[0].dif);
									printf("Isso representa %.0f%% acima da meta",vendas[0].media);
								}
								if(vendas[0].vendas < vendas[0].meta)
								{
									vendas[0].dif = vendas[0].vendas - vendas[0].meta;
									printf("O vendedor nao ultrapassou a meta em R$:%.0f\n",vendas[0].dif);
									vendas[0].media = (vendas[0].dif * 100)/ vendas[0].meta;
									vendas[0].dif = (vendas[0].dif - vendas[0].meta) + vendas[0].meta;
									printf("Isso representa %.0f%% abaixo da meta",vendas[0].media);
								}
								break;//end japones
							
							case 'M'://miguel
								printf("Digite o valor vendido:\nR$:");
								scanf("%f",&vendas[0].vendas); 
								system("cls");
								printf("Meta:\nR$:%.2f\n",vendas[0].meta);
								if(vendas[0].vendas > vendas[0].meta)
								{
									vendas[0].dif = vendas[0].vendas - vendas[0].meta;
									vendas[0].media = (vendas[0].dif * 100)/ vendas[0].meta;
									printf("O vendedor ultrapassou a meta em R$:%.2f\n",vendas[0].dif);
									printf("Isso representa %.0f%% acima da meta",vendas[0].media);
								}
								if(vendas[0].vendas < vendas[0].meta)
								{
									vendas[0].dif = vendas[0].vendas - vendas[0].meta;
									printf("O vendedor nao ultrapassou a meta em R$:%.2f\n",vendas[0].dif);
									vendas[0].media = (vendas[0].dif * 100)/ vendas[0].meta;
									vendas[0].dif = (vendas[0].dif - vendas[0].meta) + vendas[0].meta;
									printf("Isso representa %.0f%% abaixo da meta",vendas[0].media);
								}
								break;//end miguel
						
							case 'A': //Anderson
								printf("Digite o valor vendido:\nR$:");
								scanf("%f",&vendas[0].vendas);
								printf("Meta:\nR$:%.2f\n",vendas[0].meta);
								if(vendas[0].vendas > vendas[0].meta)
								{
									vendas[0].dif = vendas[0].vendas - vendas[0].meta;
									vendas[0].media = (vendas[0].dif * 100)/ vendas[0].meta;
									printf("O vendedor ultrapassou a meta em R$:%.2f\n",vendas[0].dif);
									printf("Isso representa %.0f%% acima da meta",vendas[0].media);
								}
								if(vendas[0].vendas < vendas[0].meta)
								{
									vendas[0].dif = vendas[0].vendas - vendas[0].meta;
									printf("O vendedor nao ultrapassou a meta em R$:%.2f\n",vendas[0].dif);
									vendas[0].media = (vendas[0].dif * 100)/ vendas[0].meta;
									vendas[0].dif = (vendas[0].dif - vendas[0].meta) + vendas[0].meta;
									printf("Isso representa %.0f%% abaixo da meta",vendas[0].media);
								}
								break;//end Anderson
						
							case 'W'://Wilson
								printf("Digite o valor vendido:\nR$:");
								scanf("%f",&vendas[0].vendas);
								printf("Meta:\nR$:%.2f\n",vendas[0].meta);
								if(vendas[0].vendas > vendas[0].meta)
								{
									vendas[0].dif = vendas[0].vendas - vendas[0].meta;
									vendas[0].media = (vendas[0].dif * 100)/ vendas[0].meta;
									printf("O vendedor ultrapassou a meta em R$:%.2f\n",vendas[0].dif);
									printf("Isso representa %.0f%% acima da meta",vendas[0].media);
								}
								if(vendas[0].vendas < vendas[0].meta)
								{
									vendas[0].dif = vendas[0].vendas - vendas[0].meta;
									printf("O vendedor nao ultrapassou a meta em R$:%.2f\n",vendas[0].dif);
									vendas[0].media = (vendas[0].dif * 100)/ vendas[0].meta;
									vendas[0].dif = (vendas[0].dif - vendas[0].meta) + vendas[0].meta;
									printf("Isso representa %.0f%% abaixo da meta",vendas[0].media);
								}
								else{
									printf("O vendedor vendeu exatamente a meta proposta: R$: %.2f",vendas[0].meta);
								}
								break;//end Wilson
						
						default:
							printf("Vendedor nao encontrado");
						} // end swicth 2.1
						break;
						
					case 'O'://regiao oeste
						printf("Vendedores:\n\nWelington\nJorge\nAndre\nEmerson\n");
						printf("Informe a primeira letra da do vendedor\n");
						vendas[1].vendedor = getche();
						vendas[1].vendedor = toupper(vendas[1].vendedor);
						printf("\n");
						
						switch(vendas[1].vendedor)
						{
							case 'W'://Welington
								printf("Digite o valor vendido:\nR$:");
								scanf("%f",&vendas[1].vendas);
								printf("Meta:\nR$:%.2f\n",vendas[1].meta);
								if(vendas[1].vendas > vendas[1].meta)
								{
									vendas[1].dif = vendas[1].vendas - vendas[1].meta;
									vendas[1].media = (vendas[1].dif * 100)/ vendas[0].meta;
									printf("O vendedor ultrapassou a meta em R$:%.2f\n",vendas[1].dif);
									printf("Isso representa %.0f%% acima da meta",vendas[0].media);
								}
								if(vendas[1].vendas < vendas[1].meta)
								{
									vendas[1].dif = vendas[1].vendas - vendas[1].meta;
									printf("O vendedor nao ultrapassou a meta em R$:%.2f\n",vendas[1].dif);
									vendas[1].media = (vendas[1].dif * 100)/ vendas[1].meta;
									vendas[1].dif = (vendas[0].dif - vendas[1].meta) + vendas[1].meta;
									printf("Isso representa %.0f%% abaixo da meta",vendas[1].media);
								}
								else{
									printf("O vendedor vendeu exatamente a meta proposta: R$: %.2f",vendas[0].meta);
								}
								break;//end Welington
						
							case 'J'://Jorge
								printf("Digite o valor vendido:\nR$:");
								scanf("%f",&vendas[1].vendas);
								printf("Meta:\nR$:%.2f\n",vendas[1].meta);
								if(vendas[1].vendas > vendas[1].meta)
								{
									vendas[1].dif = vendas[1].vendas - vendas[1].meta;
									vendas[1].media = (vendas[1].dif * 100)/ vendas[1].meta;
									printf("O vendedor ultrapassou a meta em R$:%.2f\n",vendas[1].dif);
									printf("Isso representa %.0f%% acima da meta",vendas[1].media);
								}
								if(vendas[1].vendas < vendas[1].meta)
								{
									vendas[1].dif = vendas[0].vendas - vendas[1].meta;
									printf("O vendedor nao ultrapassou a meta em R$:%.2f\n",vendas[1].dif);
									vendas[1].media = (vendas[1].dif * 100)/ vendas[1].meta;
									vendas[1].dif = (vendas[0].dif - vendas[1].meta) + vendas[1].meta;
									printf("Isso representa %.0f%% abaixo da meta",vendas[1].media);
								}
								else{
									printf("O vendedor vendeu exatamente a meta proposta: R$: %.2f",vendas[0].meta);
								}
								break;//end Jorge
							
							case 'A'://Andre
								printf("Digite o valor vendido:\nR$:");
								scanf("%f",&vendas[1].vendas);
								printf("Meta:\nR$:%.2f\n",vendas[1].meta);
								if(vendas[1].vendas > vendas[1].meta)
								{
									vendas[1].dif = vendas[1].vendas - vendas[1].meta;
									vendas[1].media = (vendas[1].dif * 100)/ vendas[1].meta;
									printf("O vendedor ultrapassou a meta em R$:%.2f\n",vendas[1].dif);
									printf("Isso representa %.0f%% acima da meta",vendas[1].media);
								}
								if(vendas[1].vendas < vendas[1].meta)
								{
									vendas[1].dif = vendas[1].vendas - vendas[1].meta;
									printf("O vendedor nao ultrapassou a meta em R$:%.2f\n",vendas[1].dif);
									vendas[1].media = (vendas[1].dif * 100)/ vendas[1].meta;
									vendas[1].dif = (vendas[1].dif - vendas[1].meta) + vendas[1].meta;
									printf("Isso representa %.0f%% abaixo da meta",vendas[1].media);
								}
								else{
									printf("O vendedor vendeu exatamente a meta proposta: R$: %.2f",vendas[0].meta);
								}
								break;//end Andre
						
							case 'E'://Emerson
								printf("Digite o valor vendido:\nR$:");
								scanf("%f",&vendas[1].vendas);
								printf("Meta:\nR$:%.2f\n",vendas[1].meta);
								if(vendas[1].vendas > vendas[1].meta)
								{
									vendas[1].dif = vendas[1].vendas - vendas[1].meta;
									vendas[1].media = (vendas[1].dif * 100)/ vendas[1].meta;
									printf("O vendedor ultrapassou a meta em R$:%.2f\n",vendas[1].dif);
									printf("Isso representa %.0f%% acima da meta",vendas[1].media);
								}
								if(vendas[1].vendas < vendas[1].meta)
								{
									vendas[1].dif = vendas[1].vendas - vendas[1].meta;
									printf("O vendedor nao ultrapassou a meta em R$:%.2f\n",vendas[1].dif);
									vendas[1].media = (vendas[1].dif * 100)/ vendas[1].meta;
									vendas[1].dif = (vendas[1].dif - vendas[1].meta) + vendas[1].meta;
									printf("Isso representa %.0f%% abaixo da meta",vendas[1].media);
								}
								else{
									printf("O vendedor vendeu exatamente a meta proposta: R$: %.2f",vendas[0].meta);
								}
								break;//end Emerson
					
						default:
								printf("Vendedor nao encontrado");
						} //end switch 2.2
						break;	
					case 'N'://regiao norte
						printf("Vendedores:\n\nPedro\nCarlos\nMarcio\nAbner\n");
						printf("Informe a primeira letra da do vendedor\n");
						vendas[2].vendedor = getche();
						vendas[2].vendedor = toupper(vendas[2].vendedor);
						printf("\n");
						
						switch(vendas[2].vendedor)
						{
							case 'P'://Pedro
								printf("Digite o valor vendido:\nR$:");
								scanf("%f",&vendas[2].vendas);
								printf("Meta:\nR$:%.0f\n",vendas[2].meta);
							if(vendas[2].vendas > vendas[2].meta)
								{
									vendas[2].dif = vendas[2].vendas - vendas[2].meta;
									vendas[2].media = (vendas[2].dif * 100)/ vendas[2].meta;
									printf("O vendedor ultrapassou a meta em R$:%.2f\n",vendas[2].dif);
									printf("Isso representa %.0f%% acima da meta",vendas[2].media);
								}
								if(vendas[2].vendas < vendas[2].meta)
								{
									vendas[2].dif = vendas[0].vendas - vendas[2].meta;
									printf("O vendedor nao ultrapassou a meta em R$:%.2f\n",vendas[2].dif);
									vendas[2].media = (vendas[2].dif * 100)/ vendas[2].meta;
									vendas[2].dif = (vendas[2].dif - vendas[2].meta) + vendas[2].meta;
									printf("Isso representa %.0f%% abaixo da meta",vendas[2].media);
								}
								else{
									printf("O vendedor vendeu exatamente a meta proposta: R$: %.2f",vendas[0].meta);
								}
								break;//end Pedro
				
							case 'C'://Carlos
								printf("Digite o valor vendido:\nR$:");
								scanf("%f",&vendas[2].vendas);
								printf("Meta:\nR$:%.0f\n",vendas[2].meta);
							if(vendas[2].vendas > vendas[2].meta)
								{
									vendas[2].dif = vendas[2].vendas - vendas[2].meta;
									vendas[2].media = (vendas[2].dif * 100)/ vendas[2].meta;
									printf("O vendedor ultrapassou a meta em R$:%.2f\n",vendas[2].dif);
									printf("Isso representa %.0f%% acima da meta",vendas[2].media);
								}
								if(vendas[2].vendas < vendas[2].meta)
								{
									vendas[2].dif = vendas[2].vendas - vendas[2].meta;
									printf("O vendedor nao ultrapassou a meta em R$:%.2f\n",vendas[2].dif);
									vendas[2].media = (vendas[2].dif * 100)/ vendas[2].meta;
									vendas[2].dif = (vendas[2].dif - vendas[2].meta) + vendas[2].meta;
									printf("Isso representa %.0f%% abaixo da meta",vendas[2].media);
								}
								else{
									printf("O vendedor vendeu exatamente a meta proposta: R$: %.2f",vendas[0].meta);
								}
								break;//end Carlos
						
							case 'M'://Marcio
								printf("Digite o valor vendido:\nR$:");
								scanf("%f",&vendas[2].vendas);
								printf("Meta:\nR$:%.2f\n",vendas[2].meta);
								if(vendas[2].vendas > vendas[2].meta)
								{
									vendas[2].dif = vendas[2].vendas - vendas[2].meta;
									vendas[2].media = (vendas[2].dif * 100)/ vendas[2].meta;
									printf("O vendedor ultrapassou a meta em R$:%.2f\n",vendas[2].dif);
									printf("Isso representa %.0f%% acima da meta",vendas[2].media);
								}
								if(vendas[2].vendas < vendas[2].meta)
								{
									vendas[2].dif = vendas[2].vendas - vendas[2].meta;
									printf("O vendedor nao ultrapassou a meta em R$:%.2f\n",vendas[2].dif);
									vendas[2].media = (vendas[2].dif * 100)/ vendas[2].meta;
									vendas[2].dif = (vendas[2].dif - vendas[2].meta) + vendas[2].meta;
									printf("Isso representa %.0f%% abaixo da meta",vendas[2].media);
								}
								else{
									printf("O vendedor vendeu exatamente a meta proposta: R$: %.2f",vendas[0].meta);
								}
								break;//end Marcio
						
							case 'A'://Abner
								printf("Digite o valor vendido:\nR$:");
								scanf("%f",&vendas[2].vendas);
								printf("Meta:\nR$:%.2f\n",vendas[2].meta);
								if(vendas[2].vendas > vendas[2].meta)
								{
									vendas[2].dif = vendas[2].vendas - vendas[2].meta;
									vendas[2].media = (vendas[2].dif * 100)/ vendas[2].meta;
									printf("O vendedor ultrapassou a meta em R$:%.2f\n",vendas[2].dif);
									printf("Isso representa %.0f%% acima da meta",vendas[2].media);
								}
								if(vendas[2].vendas < vendas[2].meta)
								{
									vendas[2].dif = vendas[2].vendas - vendas[2].meta;
									printf("O vendedor nao ultrapassou a meta em R$:%.2f\n",vendas[2].dif);
									vendas[2].media = (vendas[2].dif * 100)/ vendas[2].meta;
									vendas[2].dif = (vendas[2].dif - vendas[2].meta) + vendas[2].meta;
									printf("Isso representa %.0f%% abaixo da meta",vendas[2].media);
								}
								else{
									printf("O vendedor vendeu exatamente a meta proposta: R$: %.2f",vendas[0].meta);
								}
								break;//end Abner
						
						default:
						 	printf("Vendedor nao encontrado");
							
						}//end switch 2.3
					break;
					default:
						printf("Regiao nao encontrada");
						
		      	}
			break;//end swicth1
			case 2:
				system("color F8");
				foreground(YELLOW);
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tLocalizar por setores:\t\tAdministrativo\t\tProducao\t\tManutencao\n");
				printf("\n\t\tDigite a primeira letra do setor\n\t\t");
				scanf("%s",&info[0].setor);
				system("cls");
				info[0].setor = toupper(info[0].setor);
				printf("\n");
				
				switch(info[0].setor)
				{
					case 'A'://setor administrativo//
						printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tInforme a primeira letra do funcionario\n\t\t\t\t\t");
						scanf("%s",&info[0].funcio);
						system("cls");
						info[0].funcio = toupper(info[0].funcio);
						printf("\n");
						
						switch(info[0].funcio)
						{
								case 'A':
									printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionarios:\n\n\t\t\t\t\t-Andreia Luiza\n\t\t\t\t\t-Arantes Miguel\n\t\t\t\t\t-Anderson Nicaragua\n\t\t\t\t\t-Antunes Wilson\n\t\t\t\t\t-Agnaldo Rayol\n\n\n");
									printf("\t\t\t\t\tInforme a primeira  letra do sobrenome\n\t\t\t\t\t");
									scanf("%s",&info[0].sobre);
									system("cls");
									info[0].sobre = toupper(info[0].sobre);
									 switch(info[0].sobre)
									 {
									 	case 'L':
									 		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario: Andreia Luiza\n");
									 		printf("\t\t\t\t\t\t\tCargo: Gerente\n");
									 		printf("\t\t\t\t\t\t\tSalario: %.2f\n",15000.00);
									 		printf("\t\t\t\t\t\t\tTrabalha ha %d anos na empresa",12);
									 		break; // end l
										case 'M':
									 		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario: Arantes Miguel\n");
									 		printf("\t\t\t\t\t\t\tCargo: Auxiliar\n");
									 		printf("\t\t\t\t\t\t\tSalario: %.2f\n",2500.00);
									 		printf("\t\t\t\t\t\t\tTrabalha ha %d anos na empresa",6);
									 		break; // end M
										case 'N':
									 		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario: Anderson Nicaragua\n");
									 		printf("\t\t\t\t\t\t\tCargo: Assistente\n");
									 		printf("\t\t\t\t\t\t\tSalario: %.2f\n",2000.00);
									 		printf("\t\t\t\t\t\t\tTrabalha ha %d anos na empresa",7);
									 		break; // end N
										case 'W':
									 		printf("\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario: Antunes Wilson\n");
									 		printf("\t\t\t\t\t\t\tCargo: Assistente\n");
									 		printf("\t\t\t\t\t\t\tSalario: %.2f\n",3000.00);
									 		printf("\t\t\t\t\t\t\tTrabalha ha %d anos na empresa",10);
									 		break; // end W
									 	case 'R':
									 		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario: Agnaldo Rayol\n");
									 		printf("\t\t\t\t\t\t\tCargo: Estagiario\n");
									 		printf("\t\t\t\t\t\t\tSalario: %.2f\n",10.00);
									 		printf("\t\t\t\t\t\t\tTrabalha ha %d anos na empresa",1);
									 		break; // end R
									 		
									 	default:
									 		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario nao encontrado");
									 }
									 break;
								case 'B':
									printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionarios:\n\n\t\t\t\t\tBruno Inacio\n\t\t\t\t\tBernardina Alex\n\t\t\t\t\tBruna Oliva\n\n\n");
									printf("\t\t\t\t\tInInforme a primeira  letra do sobrenome\n\t\t\t\t\t");
									scanf("%s",&info[0].sobre);
									system("cls");
									info[0].sobre = toupper(info[0].sobre);
									 switch(info[0].sobre)
									 {
									 	case 'I':
									 		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario: Bruno Inacio\n");
									 		printf("\t\t\t\t\t\t\tCargo: Primeiro Gerente\n");
									 		printf("\t\t\t\t\t\t\tSalario: %.2f\n",18000.00);
									 		printf("\t\t\t\t\t\t\tTrabalha ha %d anos na empresa",20);
									 		break; // end I
										case 'A':
									 		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario: Bernardina Alex\n");
									 		printf("\t\t\t\t\t\t\tCargo: Auxiliar Senior\n");
									 		printf("\t\t\t\t\t\t\tSalario: %.2f\n",4000.00);
									 		printf("\t\t\t\t\t\t\tTrabalha ha %d anos na empresa",8);
									 		break; // end A
										case 'O':
									 		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario: Bruna Oliva\n");
									 		printf("\t\t\t\t\t\t\tCargo: Assistente Junior\n");
									 		printf("\t\t\t\t\t\t\tSalario: %.2f\n",1700.00);
									 		printf("\t\t\t\t\t\t\tTrabalha ha %d anos na empresa",2);
									 		break; // end O
									 		
									 	default:
									 		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario nao encontrado");
									}
									break;
									
								case 'C':
									printf("Funcionarios:\n\nCarlos Augusto\nCiro Mar\nCleidiomar Nunes\n\n\n");
									printf("Informe a primeira  letra do sobrenome\n");
									scanf("%s",&info[0].sobre);
									system("cls");
									info[0].sobre = toupper(info[0].sobre);
									 switch(info[0].sobre)
									 {
									 	case 'A':
									 		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario: Carlos Augusto\n");
									 		printf("\t\t\t\t\t\t\tCargo: Secretario\n");
									 		printf("\t\t\t\t\t\t\tSalario: %.2f\n",5000.00);
									 		printf("\t\t\t\t\t\t\tTrabalha ha %d anos na empresa",20);
									 		break; // end A
										case 'M':
									 		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario: Ciro Mar\n");
									 		printf("\t\t\t\t\t\t\tCargo: Auxiliar Senior\n");
									 		printf("\t\t\t\t\t\t\tSalario: %.2f\n",4500.00);
									 		printf("\t\t\t\t\t\t\tTrabalha ha %d anos na empresa",8);
									 		break; // end M
										case 'N':
									 		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario: Cleidiomar Nunes\n");
									 		printf("\t\t\t\t\t\t\tCargo: Assistente Junior\n");
									 		printf("\t\t\t\t\t\t\tSalario: %.2f\n",1100.00);
									 		printf("\t\t\t\t\t\t\tTrabalha ha %d anos na empresa",5);
									}break; 		break; // end N
							default:
							printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tFuncionario nao encontrado");
						}break;	
			default:
			 printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSetor nao encontrado!");	
		}break;// end switch2
		
		default:
			printf("Opcao invalida");
			}
	}//end main
	
