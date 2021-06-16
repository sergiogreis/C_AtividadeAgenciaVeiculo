#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int contador = 0;
char modelo[15];

struct dadosVeiculo{
    char marca [15];
    char modelo [15];
    char placa [8];
    int ano;
};

struct dadosVeiculo veiculo[11];

int main(){

    printf("-------------------------------------------------\n");
    printf("------Tecnicas de Programacao - Atividade A1----- \n");
    printf("-------------------------------------------------\n\n");

    printf("-------------------------------------------------\n");
    printf("--------------------Agencia X--------------------\n");
    printf("-------------------------------------------------\n\n\n\n");

    setlocale(LC_ALL, "Portuguese");
    menu();
    getch();

    }

void limparBuffer(void){
char c;
while ((c = getchar()) != '\n' && c != EOF);
}

void menu (){

    int opcao;

    printf("Selecione uma op��o:\n\n");
    printf("1- Listar os ve�culos cadastrados:\n");
    printf("2- Inserir um novo ve�culo\n");
    printf("3- Listar o ve�culo pelo ano de fabrica��o:\n");
    printf("4- Listar ve�culos com ano de fabrica��o superior:\n");
    printf("5- Listar ve�culos por modelo:\n");

    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            listarVeiculo();
            break;

        case 2:
            cadastrarVeiculo();
            break;

        case 5:
            listarPorModelo();
            break;
    }

return 0;
}

void cadastrarVeiculo(){

    if (contador < 10){

    printf("Cadastrar novo ve�culo\n\n");
    printf("Insira os dados do ve�culo:\n");

    printf("Marca: ");
    scanf("%s", &veiculo[contador].marca);

    printf("Modelo: ");
    scanf("%s", &veiculo[contador].modelo);

    printf("Placa: ");
    scanf("%s", &veiculo[contador].placa);

    printf("Ano: ");
    scanf("%d", &veiculo[contador].ano);

    contador++;

    printf("Ve�culo cadastrado com sucesso\n\n");

    menu ();

    }

    else {

        printf("Limite de ve�culo atingidos");
    }
}

void listarVeiculo (){

  int i = 0;

    printf("%d", contador);

  for ( i = 0; i< contador; i++){

    printf("\nVeiculo %d: Marca: %s --- Modelo: %s --- Placa: %s --- Ano: %d \n", i + 1, veiculo[i].marca, veiculo[i].modelo, veiculo[i].placa, veiculo[i].ano);

  }
}

void listarPorModelo (){
   printf("\nInsira o modelo:");
   scanf("%s", &modelo);

   for (int x=0; x<contador; x++){
    if(strcmp(veiculo[x].modelo, strlwr(modelo)) == 0){
        printf("\nMarca: %s", veiculo[x].marca);
        printf("\nModelo: %s", veiculo[x].modelo);
        printf("\nAno: %d", veiculo[x].ano);
        printf("\nPlaca: %s", veiculo[x].placa);
        x++;
    }
   }


}
