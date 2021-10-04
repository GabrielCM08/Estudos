#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

struct cada_carro{
    char nome[30],marca[20],placa[8],op[30],ob[30];
    int ano,km;
     }cada_carro;
int incluir_carro(struct cada_carro info[100],int x) {
    int i;
    char resp,op_;
    for (i = x;i < 100;i++)
    {
      printf("digite o nome do carro:\n");
      gets(info[i].nome);
      printf("digite a marca do carro:\n");
      gets(info[i].marca);
      printf("digite a placa do carro:\n");
      gets(info[i].placa);
      printf("digite as opcoes do carro:\n");
      gets(info[i].op);
      printf("digite as observacoes do carro:\n");
      gets(info[i].ob);
      printf("digite o ano do carro:\n");
      scanf("%i",&info[i].ano);
      printf("digite a quilometragem:\n");
      scanf("%i",&info[i].km);
      printf("deseja incluir outro automovel (S/N)");
      scanf ("%c",&op_);
      fflush(stdin);
        if ( strchr("nN",op_))
           break;
             return (i);             
              } 
}
int consultar_carro_por_placa(struct cada_carro  info[100],int x)
     {
      int i;
      char pla[8];  
         for (i=0;i < x;i++)
         {
            printf("informe a placa:\n");
            scanf("%c",&pla);
            if ( pla == info[i].placa )
               printf("%s",info[i].nome);
               printf("%s",info[i].marca);
               printf("%s",info[i].op);
               printf("%s",info[i].ob);
               printf("%i",info[i].ano);
               printf("%i",info[i].km);    
         } 
      }             
int exibe_carro_por_ano (struct cada_carro info[100],int x)
   {
     int i,a;
     
        for (i=0;i<x;i++)
        {    
           printf("informe o ano do carro");
           scanf("%c",&a);
           if (a >= info[i].ano)
              printf("%s",info[i].nome);
              printf("%s",info[i].marca);
              printf("%s",info[i].op);
              printf("%s",info[i].ob);
              printf("%s",info[i].placa);
              printf("%i",info[i].km);
          }
     }     
                             
int listar_carro (struct cada_carro info[100],int x){

     int i;
     
          for (i=0; i<x; i++)
             {                         
               printf("%s",info[i].nome);
               printf("%s",info[i].marca);
               printf("%s",info[i].op);
               printf("%s",info[i].ob);
               printf("%s",info[i].placa);
               printf("%i",&info[i].ano);
               printf("%i",&info[i].km);
             }
          }
int main()
 {
    struct cada_carro(); 
    int incluir_carro(x),consultar_carro_por_placa(pla),exibe_carro_por_ano(a),excluir_carro(pla),listar_carro(x);
    int opc_;
    char placa;
  {
    do 
      printf("1-Incluir carro:\n");
      printf("2-Consultar carro por placa:\n");
      printf("3-Exibir carros por ano:\n");
      printf("4-Listar todos carros:\n");
      printf("5-excluir carro:\n");
      printf("6-sair:\n");
      scanf("%i",&opc);
      fflush(stdin);
      switch { 
      case  (opc_ == 1);
          incluir_carro(x);
          break;
      case (opc_ == 2);
           consultar_carro_por_placa(pla);
           break;            
      case (opc_ == 3); 
           exibe_carro_ por_ano(a);
           break;
      case (opc_ == 4);
           listar_carro (x);
      case (opc_ == 5);
           printf("digite a placa do carro a ser excluido:\n");
           gets (placa);
           excluir_carro(placa);  
           break;
           }
        printf("escolha outra opcao:\n");               
   }while (opc_ != 6); 
   getche();
}
