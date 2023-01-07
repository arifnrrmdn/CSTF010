#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
//deklarasi fungsi
void input_data(void);
void hasil_tabungan(void);
//deklarasi variabel
int nabung,bulan;
float hasil_nabung;

main()
{
    system("cls");
    input_data();
    hasil_tabungan();
    printf("hasil tabungan adalah = %.2f",hasil_nabung);
    getch();
    return 0;
}

//definisi fungsi
void input_data(void){
    printf("jumlah uang yang akan ditabung = "); scanf("%d",&nabung);
    printf("Bulan                          = "); scanf("%d",&bulan);
}

void hasil_tabungan(void){
    while(nabung<1500000){
        double bunga = nabung*0.02;
        hasil_nabung = (float) nabung + bunga;
        bulan++;
    }
}
