#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    
typedef struct{
    char nome[50];
    int cpf;
    int senha;
    }usuario;

void cadastra(usuario *user);

int main(){
    int cpf, senha, i = 0;
    usuario contas[10];
    usuario user;

    while(1){
        printf("Digite a opção desejada= \n");
        printf("1- Entrar\n");
        printf("2- Cadastrar\n");
        printf("3- Sair\n");
        int opcao;
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite seu cpf= ");
            scanf("%d", &cpf);

            printf("Digite sua senha= ");
            scanf("%d", &senha);

            for (int j = 0; j<i; j++){
                if(cpf == contas[j].cpf && senha == contas[j].senha){
                    printf("Bem vindo %s\n", contas[j].nome);
                }
                else{
                    printf("Cpf ou senha incorretos\n");
            }
            }
            break;
        case 2:
        if(i>10){
            printf("Número máximo de contas cadastradas\n");
            break;
        }
            cadastra(&user);
            contas[i] = user;
            i++;
            break;
        case 3:
            exit(0);
            break;
        
        default:
            printf("Digite uma opção válida\n");
            break;
        }
    }
}


void cadastra(usuario *user){
    getchar();
    printf("Digite seu nome= ");
    fgets(user->nome, 50, stdin);
    user->nome[strcspn(user->nome, "\n")] = '\0';

    printf("Digite seu cpf= ");
    scanf("%d", &user->cpf);
    printf("Digite uma senha= ");
    scanf("%d", &user->senha);
}

//tirar vetores e implementar files
//implementar mais um código com as funções
