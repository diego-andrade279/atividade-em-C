#include <stdio.h>
#include <stdlib.h>


int main(void){
  
  double u,quant,v,w,t,y,cp,z; 
  int n,a,r,o,q,cep,l,x;
  char b,c,g,i,end;
system("clear");

/////MICROEMPREENDEDOR////

printf("\t\t\t\tBem Vindo ao Food\n\n");

printf("USUARIO:");scanf("%s",&b);
printf("SENHA:");scanf("%d",&n);
printf("\n\n");
z=50;
a=1234;

if (a == n ){
    printf("\t\t BEM VINDO \n\n"); 
  }else{
    printf("\t\t SENHA INCORRETA \n\n");
   return 0;
   }
   printf("\t\t\n\nMENU\n\n");
    printf("Cadastrar Empresa: ");scanf("%s",&c);
      printf("\nEmpresa Cadastrada: %s\n",&c);
        printf("Cadastro de Produtos:");scanf("%s",&g);
          printf("\nProduto  Cadastrado:%s\n",&g);
             printf("Valor de custo:");scanf("%lf",&t);
               printf("\nQuantidade do Produtos:");scanf("%d",&r);
                    quant = t*r;
                   printf("\nValor de Custo total produto:R$:%.2f\n",quant);
               w = ((quant*2)/r);
             printf("valor para revenda:%.2lf\n",w);
           
             
         printf("Valor Final:%.2f\n",w);
         ///////fim//////

         ///////USUARIO CLIENTE////
         system("cls");
printf("\t\t\tMENU PARA COMPRAS\n\n\n");

 
    printf("\tX-burgue 1\n");  printf("\t SUCO 13\n");
     printf("\tX-burgue 2\n");  printf("\t COCA 14\n");
      printf("\tX-burgue 3\n");  printf("\t AGUA 15\n");
       printf("\tX-burgue 4\n");  printf("\t PEPSI 16\n");
        printf("\tX-burgue 5\n");  printf("\t DOLLY 17\n");
         printf("\tX-burgue 6\n");  printf("\t SPRINT 19\n");
          printf("\tX-burgue 7\n");  printf("\t TANG 20\n");
           printf("\tX-burgue 8\n");  printf("\t MIDI 11\n");
            printf("\tX-burgue 9\n");  printf("\t SEM BEBIDA 10\n\n");
                
                  
                   
                   
                    
                    
                   


  printf("\ndigite um numero para escolher um lanche:");scanf("%d %d",&l,&x);
    if(1 == l && 13 == x){
      printf("Voce escolheu a opicao:%d %d\n",l,x);
    
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    } else if(1 == l && 14 == x){
        printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(1 == l && 15 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(1 == l && 16 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(1 == l && 17 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(1 == l && 18 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:%d\n",x);
         printf("bebida:R$:5.00\n");
          printf("Total:R$:%.2f\n",cp);

    }else if(1 == l && 19 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
        printf("Total:R$:%.2f\n",cp);

    }else if(1 == l && 20 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(1 == l && 10 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(1 == l && 11 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(2 == l && 10 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
        printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(2 == l && 11 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(2 == l && 12 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(2 == l && 13 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(2 == l && 14 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(2 == l && 15 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
        printf("Total:R$:%.2f\n",cp);

    }else if(2 == l && 16 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(2 == l && 17 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(2 == l && 18 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(2 == l && 19 == x){
       printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(2 == l && 20 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(3 == l && 10 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(3 == l && 11 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(3 == l && 12 == x){
       printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
        printf("Total:R$:%.2f\n",cp);

    }else if(3 == l && 13 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(3 == l && 14 == x){
       printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(3 == l && 15 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(3 == l && 16 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(3 == l && 17 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(3 == l && 18 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(3 == l && 19 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(3 == l && 20 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(4 == l && 10 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);
          
    }else if(4 == l && 11 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(4 == l && 12 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(4 == l && 13 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(4 == l && 14 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(4 == l && 15 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(4 == l && 16 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(4 == l && 17 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(4 == l && 18 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(4 == l && 19 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(4 == l && 20 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(5 == l && 10 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(5 == l && 11 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(5 == l && 12 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(5 == l && 13 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(5 == l && 14 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(5 == l && 15 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(5 == l && 16 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(5 == l && 17 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(5 == l && 18 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(5 == l && 19 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    } else if(5 == l && 20 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 10 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 11 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 12 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
        printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 13 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 14 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
        printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 15 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 16 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 17 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 18 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
        printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 19 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 20 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);
          
    }else if(7 == l && 10 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 11 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 12 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
        printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 13 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 14 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 15 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
        printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 16 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
        printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 17 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 18 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 19 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
        printf("Total:R$:%.2f\n",cp);

    }else if(6 == l && 20 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(7 == l && 10 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(7 == l && 11 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(7 == l && 12 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
        printf("Total:R$:%.2f\n",cp);

    }else if(7 == l && 13 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(7 == l && 14 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(7 == l && 15 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
        printf("Total:R$:%.2f\n",cp);

    }else if(7 == l && 16 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(7 == l && 17 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(7 == l && 18 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(7 == l && 19 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(7 == l && 20 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(8 == l && 10 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(8 == l && 11 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(8 == l && 12 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(8 == l && 13 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(8 == l && 14 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
       printf("Total:R$:%.2f\n",cp);

    }else if(8 == l && 15 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
    printf("Total:R$:%.2f\n",cp);

    }else if(8 == l && 16 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(8 == l && 17 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(8 == l && 18 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(8 == l && 19 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(8 == l && 20 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(9 == l && 10 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(9 == l && 11 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(9 == l && 12 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(9 == l && 13 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(9 == l && 14 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(9 == l && 15 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(9 == l && 16 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(9 == l && 17 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }else if(9 == l && 18 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(9 == l && 19 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
         printf("Total:R$:%.2f\n",cp);

    }else if(9 == l && 20 == x){
      printf("Voce escolheu:%d\n",l);
        printf("Valor do Lanche:R$:12.50\n");
         printf("bebida:R$:5.00\n");
         cp = 12.50 + 5.00;
          printf("Total:R$:%.2f\n",cp);

    }
/////delivery////
  printf("\t\t\tENTREGAS\n\n");
    printf("Digite seu Endereço:");scanf("%s",&end);
       printf("Endereço localizado:%s_\n",&end);
         printf("Taxa de Entrega fixa:R$:7.80");

  return 0;
}

