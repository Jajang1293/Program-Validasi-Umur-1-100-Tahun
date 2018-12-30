#include<stdio.h>

void main()
{
    char Nama_Anda;
    int Tahun_Lahir, Tahun_Sekarang, usia;
    printf("Program Validasi Umur 1-100 Tahun\n");
    printf("======================================\n");
    printf("Nama Anda : ");scanf("%s", &Nama_Anda);
    printf("Tahun Lahir : ");scanf("%d", &Tahun_Lahir);
    printf("Tahun Sekarang : ");scanf("%d", &Tahun_Sekarang);
    usia=Tahun_Sekarang-Tahun_Lahir;
    printf("Usia Anda Sekarang adalah : %d", usia);printf(" Tahun");
    if (usia>=1 && usia <=100)
    {
        printf("\nSelamat usia anda Valid ! \n");
    }
    else{
        printf("\nMaaf usia anda tidak Valid ! \n");
    }

}
