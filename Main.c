#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
*
* ESTRUTURA DE DADOS & ALGORITMOS
* Nome do Projecto: CONVERSOR DE MOEDAS
* Dev name: Santos USSENE
* Release version: 1.0 BETA - 27/05/2022
*
*/

int main(){

    float montante;
    float metical_mzn, dollar_usd, euro, rand, real_brl;
    int escolha, global;

    system("clear");
    printf("---------------------------------------\n");
    printf("========= CONVERSOR DE MOEDAS =========");
    printf("\n---------------------------------------\n\n");
    printf("|=========== MENU PRINCIPAL ===========|\n");
    printf("\n1 - Metical (MZN)");
    printf("\n2 - Dollar Americano (USD)");
    printf("\n3 - Euro (EUR)");
    printf("\n4 - Rand Sul-Africano (ZAR)");
    printf("\n5 - Real Brasileiro (BRL)");
    printf("\n\n---------------------------------------");
    printf("\nEscolher conversão: ");
    scanf("%d", &escolha);
    printf("\nMontante a converter: ");
    scanf("%f", &montante);
    printf("\n---------------------------------------");

    switch (escolha){
        case 1: // Conversão da Moeda Metical
            system("clear");
            printf("\n---------------------------------------");
            printf("\nConversão da Moeda Metical (MZN)\n");
            printf("---------------------------------------\n");

            dollar_usd = montante / 63.83;
            printf("%.2f MZN =  %.2f USD", montante, dollar_usd);
            euro = montante / 68.67;
            printf("\n%.2f MZN =  %.2f EURO", montante, euro);
            rand = montante / 4.07;
            printf("\n%.2f MZN =  %.2f ZAR", montante, rand);
            real_brl = montante / 13.38;
            printf("\n%.2f MZN =  %.2f BRL", montante, real_brl);

            printf("\n---------------------------------------");
            printf("\n\n1 - Voltar ao menu.");
            printf("\n\n0 - Sair.");
            printf("\n\nOpção: ");
            scanf("%d", &global);
            printf("\n---------------------------------------");
            if(global == 1){
                main();
            }else if(global == 0){
                exit;
            }
        break;
        case 2: // Conversão do Dollar USD
            system("clear");
            printf("\n---------------------------------------");
            printf("\nConversão da Moeda Dollar (USD)\n");
            printf("---------------------------------------\n");

            metical_mzn = montante * 63.83;
            printf("%.2f USD =  %.2f MZN", montante, metical_mzn);
            euro = montante * 0.93;
            printf("\n%.2f USD =  %.2f EURO", montante, euro);
            rand = montante * 15.66;
            printf("\n%.2f USD =  %.2f RAND", montante, rand);
            real_brl = montante * 4.76;
            printf("\n%.2f USD =  %.2f BRL", montante, real_brl);

            printf("\n\n---------------------------------------");
            printf("\n\n1 - Voltar ao menu.");
            printf("\n\n0 - Sair.");
            printf("\n\nOpção: ");
            scanf("%d", &global);
            printf("\n---------------------------------------");
            if(global == 1){
                main();
            }else if(global == 0){
                exit;
            }
        break;
        case 3: // Conversão do EURO
            system("clear");
            printf("\n---------------------------------------");
            printf("\nConversão da Moeda Euro (EURO)\n");
            printf("---------------------------------------\n");

            metical_mzn = montante * 68.66;
            printf("%.2f EURO =  %.2f MZN", montante, metical_mzn);
            dollar_usd = montante * 1.07;
            printf("\n%.2f EURO =  %.2f USD", montante, dollar_usd);
            rand = montante * 16.84;
            printf("\n%.2f EURO =  %.2f RAND", montante, rand);
            real_brl = montante * 5.12;
            printf("\n%.2f EURO =  %.2f BRL", montante, real_brl);

            printf("\n\n---------------------------------------");
            printf("\n\n1 - Voltar ao menu.");
            printf("\n\n0 - Sair.");
            printf("\n\nOpção: ");
            scanf("%d", &global);
            printf("\n---------------------------------------");
            if(global == 1){
                main();
            }else if(global == 0){
                exit;
            }
        break;
        case 4: // Conversão do Rand (ZAR)
            system("clear");
            printf("\n---------------------------------------");
            printf("\nConversão da Moeda Rand (ZAR)\n");
            printf("---------------------------------------\n");

            metical_mzn = montante * 4.07;
            printf("%.2f ZAR =  %.2f MZN", montante, metical_mzn);
            dollar_usd = montante * 0.06;
            printf("\n%.2f ZAR =  %.2f USD", montante, dollar_usd);
            euro = montante * 0.05;
            printf("\n%.2f ZAR =  %.2f EURO", montante, euro);
            real_brl = montante * 0.30;
            printf("\n%.2f ZAR =  %.2f BRL", montante, real_brl);

            printf("\n\n---------------------------------------");
            printf("\n\n1 - Voltar ao menu.");
            printf("\n\n0 - Sair.");
            printf("\n\nOpção: ");
            scanf("%d", &global);
            printf("\n---------------------------------------");
            if(global == 1){
                main();
            }else if(global == 0){
                exit;
            }
        break;
        case 5: // Conversão do Real (BRL)
            system("clear");
            printf("\n---------------------------------------");
            printf("\nConversão da Moeda Real (BRL)\n");
            printf("---------------------------------------\n");

            metical_mzn = montante * 13.38;
            printf("\n%.2f BRL =  %.2f MZN", montante, metical_mzn);
            dollar_usd = montante * 0.20;
            printf("\n%.2f BRL =  %.2f USD", montante, dollar_usd);
            euro = montante * 0.19;
            printf("\n%.2f BRL =  %.2f EURO", montante, euro);
            rand = montante * 3.28;
            printf("\n%.2f BRL =  %.2f RAND", montante, rand);

            printf("\n\n---------------------------------------");
            printf("\n\n1 - Voltar ao menu.");
            printf("\n\n0 - Sair.");
            printf("\n\nOpção: ");
            scanf("%d", &global);
            printf("\n---------------------------------------");
            if(global == 1){
                main();
            }else if(global == 0){
                exit;
            }
        break;
        default: //OPção inválida
            system("clear");
            printf("\nOpção Inválida!");
            printf("\n---------------------------------------\n");
    }
    return 0;
}
