#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char cinsiyet;
    printf("L�tfen cinsiyetinizi giriniz... (E/K)\n");
    scanf(" %c",&cinsiyet);

    if (cinsiyet == 'E' || cinsiyet == 'e') {
        printf("Siz erkeksiniz...\n");
    }
    else if (cinsiyet == 'K' || cinsiyet == 'k') {
        printf("Siz kad�ns�n�z...\n");
    }
    else {
        printf("L�tfen E yada K de�erini giriniz...\n");
    }


    return 0;
}
