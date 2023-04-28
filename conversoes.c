#include <stdio.h>
#include <math.h>
#include <string.h>

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

    printf("Digite um número hexadecimal: ");
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

    printf("O número binário é: %s\n", bin);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////

int bin_to_hex(){
    char bin[65], hex[20] = "";
    int i, len, group, dec;

    printf("Digite um número binário: ");
    scanf("%s", bin);

    len = strlen(bin);

    if(len % 4 != 0) {
        group = len / 4 + 1;
        for(i = 0; i < group * 4 - len; i++) {
            strcat(hex, "0");
        }
        strcat(hex, bin);
    }
    else {
        strcpy(hex, bin);
    }

    len = strlen(hex);

    for(i = 0; i < len; i += 4) {
        dec = (hex[i] - '0') * 8 + (hex[i+1] - '0') * 4 + (hex[i+2] - '0') * 2 + (hex[i+3] - '0');
        if(dec < 10) {
            sprintf(hex + strlen(hex), "%d", dec);
        }
        else {
            sprintf(hex + strlen(hex), "%c", dec - 10 + 'A');
        }
    }

    printf("O número hexadecimal é: %s\n", hex);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////

int oct_to_bin() {
    int oct, dec = 0, bin= 0, base = 1;

    printf("Digite um número octal: ");
    scanf("%d", &oct);

    // Convertendo octal para decimal
    while (oct != 0) {
        dec += (oct % 10) * base;
        oct /= 10;
        base *= 8;
    }

    // Convertendo decimal para binário
    while (dec != 0) {
        bin += (dec% 2) * base;
        dec /= 2;
        base *= 10;
    }

    printf("O número em binário é: %d\n", bin);

    return 0;
}