#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char cinsiyet;
    printf("Lütfen cinsiyetinizi giriniz... (E/K)\n");
    scanf(" %c",&cinsiyet);

    if (cinsiyet == 'E' || cinsiyet == 'e') {
        printf("Siz erkeksiniz...\n");
    }
    else if (cinsiyet == 'K' || cinsiyet == 'k') {
        printf("Siz kadýnsýnýz...\n");
    }
    else {
        printf("Lütfen E yada K deðerini giriniz...\n");
    }


    return 0;
}
