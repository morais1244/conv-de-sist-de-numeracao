#include <stdio.h>
#include "conversoes.h"
#include <math.h>
#include <string.h>

int main(){
    int i, d;
    int bin, dec, oct;
    printf("Escolha sua entrada do sistema númerico entre: \n1.Binário\n2.Decimal\n3.Octal\n4.Hexadecimal\n");
    printf("Digite o número do sistema: ");
    scanf("%d", &i);
    printf("Digite o número para qual sistema númerico você quer trasnferir: ");
    scanf("%d", &d);
    if(i== d){
        printf("Os números são iguais");
    }else{
        if (i == 1 && d == 2){
            printf("Digite um número em binário: ");
            scanf("%d",&bin);
            dec = bin_to_dec(bin);
            printf("O número em decimal é: %d.",dec);
            printf("\n");
        }
        else if (i==1 && d == 3){
            printf("Digite um número em binário: ");
            scanf("%d",&bin);
            dec = bin_to_dec(bin);
            oct = dec_to_oct(dec);
            printf("O número em octal é: %d.",oct);
            printf("\n");
        }
        else if(i==1 && d == 4){
            bin_to_hex();
        }
        
        else if(i==2 && d == 1){
            printf("Digite um número em decimal: ");
            scanf("%d",&dec);
            bin = dec_to_bin(dec);
            printf("O número em binário é: %d.",bin);
            printf("\n");
        }
        else if(i==2 && d == 3){
            printf("Digite um número em decimal: ");
            scanf("%d",&dec);
            oct = dec_to_oct(dec);
            printf("O número em octal é: %d",oct);
            printf("\n");
        }
        else if(i==2 && d == 4){
            dec_to_hex();

        }
        else if(i==3 && d == 1){
            oct_to_bin();

        }
        else if(i==3 && d == 2){
            oct_to_dec();

        }
        else if(i==3 && d == 4){
            oct_to_hex();

        }
        else if(i==4 && d == 1){
            hex_to_bin();
        }
        else if(i==4 && d == 2){
            hex_to_dec();

        }
        else if(i==4 && d == 3){
            hex_to_oct();

        }
    }
    return 0;
}