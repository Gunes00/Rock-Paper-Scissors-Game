#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int TKM, kontrol, sayac = 0, tkm, sayac2 = 0;
srand(time(NULL));


while (sayac < 3 & sayac2 < 3)
{
        tkm = 1 + rand() % 3;

    printf("PC = %d  SEN = %d || Taş(1)  Kağıt(2)  Makas(3) ?: ", sayac, sayac2);
    scanf("%d", &TKM);
    if(TKM != 1 & TKM != 2 & TKM != 3)
    {
        printf("Hatalı giriş !!\n");
    }
    if(TKM == 1 && tkm == 2 || TKM == 2 && tkm == 3 || TKM == 3 && tkm == 1)
    {
        printf("Kaybettin.\n");
        sayac++;
    }
    if(TKM == 1 && tkm == 3 || TKM == 2 && tkm == 1 || TKM == 3 && tkm == 2)
    {
        printf("Kazandın !\n");
        sayac2++;
    }
    if(TKM == 1 && tkm == 1 || TKM == 2 && tkm == 2 || TKM == 3 && tkm == 3)
    {
        printf("Aynı.\n");
    }
        
}
if(sayac == 3)
printf("PC kazandı.\n");

if(sayac2 == 3)
printf("Sen kazandın !\n");
}