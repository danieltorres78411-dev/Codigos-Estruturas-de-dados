#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 50
#define MAX_INT 100

struct Territorio{
    char nome [MAX_CHAR];
    char cor [MAX_CHAR];
    int tropas [MAX_INT];
};

void  LimparEntrada(){
    int c;
    while ((c = getchar())  ! = '\n' && c != EOF);
    
}

int main(){
    struct Territorio Continentes[MAX_CHAR];
    int total = 0;
    int opcao;


  do{
    printf("==================\n");
    printf("     CONTINENTE 1 \n");
    printf("==================\n");
    printf("1 - Cadastrar Novo Continente\n");
    printf("2 - Listar Continentes\n");
    printf("0 - Sair\n");
    printf("------------------\n");
    printf("Escolha UMA DAS OPCOES\n");

    scanf("%d",&opcao);

    LimparEntrada();
    
    switch (opcao){
        case 1:
            printf("---- Cadastrar Novo Continente\n\n");
            if(total < [MAX_CHAR]){
                printf("Digite nome do continente: ");
                fgets(Territorio[total].nome, MAX_CHAR , stdin);
                printf("Digite nome da cor: ");
                fgets(Territorio[total].cor, MAX_CHAR , stdin);
                printf("Digite num de tropas: ");
                fgets(Territorio[total].tropas, MAX_INT , stdin);

            }

    }
  } 
}

}

