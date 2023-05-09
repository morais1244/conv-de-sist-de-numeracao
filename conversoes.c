#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////

int bin_to_dec(int bin) {
    int dec = 0, i = 0, digito;
    while (bin!= 0) {
        digito = bin % 10;
        dec += digito * pow(2, i);
        ++i;
        bin /= 10;
    }
    return dec;
}

///////////////////////////////////////////////////////////////////////////////////////////

int dec_to_oct(int dec){
    int potencia = 1, oct = 0, digito;
    while (dec != 0) {
        digito = dec % 8;
        oct += digito * potencia;
        potencia *= 10;
        dec /= 8;
    }
    return oct;
}

////////////////////////////////////////////////////////////////////////////////////////

int dec_to_bin(int dec){
    int resto, i = 1, bin = 0;
    while (dec != 0) {
        resto = dec % 2;
        dec /= 2;
        bin += resto * i;
        i *= 10;
    }
    return bin;
}

//////////////////////////////////////////////////////////////////////////////////////////

int hex_to_bin() {
    char hex[20] , bin[65] = "";
    int i, len;

    printf("Digite um número em hexadecimal: ");
    scanf("%s", hex);

    len = strlen(hex);

    for(i = 0; i < len; i++) {
        switch(hex[i]) {
            case '0':
                strcat(bin, "0000");
                break;
            case '1':
                strcat(bin, "0001");
                break;
            case '2':
                strcat(bin, "0010");
                break;
            case '3':
                strcat(bin, "0011");
                break;
            case '4':
                strcat(bin, "0100");
                break;
            case '5':
                strcat(bin, "0101");
                break;
            case '6':
                strcat(bin, "0110");
                break;
            case '7':
                strcat(bin, "0111");
                break;
            case '8':
                strcat(bin, "1000");
                break;
            case '9':
                strcat(bin, "1001");
                break;
            case 'A':
            case 'a':
                strcat(bin, "1010");
                break;
            case 'B':
            case 'b':
                strcat(bin, "1011");
                break;
            case 'C': case 'c':
                strcat(bin, "1100");
                break;
            case 'D':case 'd':
                strcat(bin, "1101");
                break;
            case 'E':case 'e':
                strcat(bin, "1110");
                break;
            case 'F':case 'f':
                strcat(bin, "1111");
                break;
            default:
                printf("Número hexadecimal inválido.\n");
                return 0;
        }
    }

    printf("O número em binário é: %s.\n", bin);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////

int bin_to_hex(){
    int dec = 0, i = 0, digito, bin;
    printf("Digite um número em binário: ");
    scanf("%d",&bin);

    while (bin!= 0) {
        digito = bin % 10;
        dec += digito * pow(2, i);
        ++i;
        bin /= 10;
    }
    
    char hex[20];

    sprintf(hex, "%X", dec);

    printf("O número em hexadecimal é: %s.\n",hex);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////

int oct_to_bin() {
    char oct[20] , bin[65] = "";
    int i, len;

    printf("Digite um número em octal: ");
    scanf("%s", oct);

    len = strlen(oct);

    for(i = 0; i < len; i++) {
        switch(oct[i]) {
            case '0':
                strcat(bin, "000");
                break;
            case '1':
                strcat(bin, "001");
                break;
            case '2':
                strcat(bin, "010");
                break;
            case '3':
                strcat(bin, "011");
                break;
            case '4':
                strcat(bin, "100");
                break;
            case '5':
                strcat(bin, "101");
                break;
            case '6':
                strcat(bin, "110");
                break;
            case '7':
                strcat(bin, "111");
                break;
            default:
                printf("Número octal inválido.\n");
                return 0;
        }
    }

    printf("O número em binário é: %s.\n", bin);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////

int dec_to_hex(){
    int dec ;
    printf("Digite um número em decimal: ");
    scanf("%d", &dec);

    
    char hex[20];

    sprintf(hex, "%X", dec);

    printf("O número em hexadecimal é: %s.\n",hex);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////

int oct_to_dec(){
    int dec, oct,i;
    printf("Digite um número octal: ");
    scanf("%d", &oct);
    dec = 0;
    i = 0;

    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }

    printf("O número em decimal é: %d.\n", dec);

    return 0;
}

////////////////////////////////////////////////////////////////////////

int oct_to_hex(){
    int oct,i=0,dec=0;
    printf("Digite um número em octal: ");
    scanf("%d", &oct);
    char hex[20];

    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }

    sprintf(hex, "%X", dec);

    printf("O número em hexadecimal é: %s.\n",hex);

    return 0;
}

///////////////////////////////////////////////////////////////

int hex_to_dec(){
    char hex[100];
    long dec;
    char* end_ptr;

    printf("Digite um número em hexadecimal: ");
    scanf("%s", hex);

    dec = strtol(hex, &end_ptr, 16);

    if (end_ptr == hex) {
        printf("Erro na conversão.\n");
    } else {
        printf("O número em decimal é: %ld.\n",dec);
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////

int hex_to_oct(){
    char hex[100];
    long dec;
    char* end_ptr;

    printf("Digite um número em hexadecimal: ");
    scanf("%s", hex);

    dec = strtol(hex, &end_ptr, 16);

    int potencia = 1, oct = 0, digito;
    while (dec != 0) {
        digito = dec % 8;
        oct += digito * potencia;
        potencia *= 10;
        dec /= 8;
    }
    printf("O número em octal é: %d.\n",oct);    

    return 0;
}