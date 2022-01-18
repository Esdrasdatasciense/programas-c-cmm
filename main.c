#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,x;
    char continuar;
    char nome[40];
    char remover[40];
    char remo[] = "NENHUM, POIS FORAM REMOVIDOS";
    printf("INCLUIR PESSOAS - 1\nLISTAR PESSOAS - 2\nREMOVER PESSOAS - 3\n");

    for (i = 0; i < 1;) {
    printf("digite o número: ");
    scanf("%d",&x);

    if (x==1) {
        printf("Digite o nome: ");
        scanf("%s", nome);
        printf("\nQuer continuar? 's/n' ");
        scanf("%s", &continuar);
        { if (continuar == 's') {
            i = 0;

        } else {
            i = 1;
        }
        }

    } else if (x==2) {
        printf("Os nomes digitados sao: ");
        puts(nome);
        printf("\nQuer continuar? 's/n' ");
        scanf("%s", &continuar);
         { if (continuar == 's') {
            i = 0;

        } else {
            i = 1;
        }
        }

    } else if (x==3) {
        printf("Digite o nome para remover: ");
        scanf("%s", remover);
            { if (strcmp(remover, nome )== 0) {
                printf("\nO nome foi removido");
                strcpy(nome, remo);
                } else {
                    printf("O nome não consta nos cadastrados");
                }
            } printf("\nQuer continuar? 's/n' ");
        scanf("%s", &continuar);
         { if (continuar == 's') {
            i = 0;

        } else {
            i = 1;
        }
        }
    }
    }











    return 0;
}
