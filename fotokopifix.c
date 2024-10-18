#include <stdio.h>

int main()
{
    int jumlah_lembar, uang_dibayar, kembalian, harga;

    printf("===============================================================\n");
    printf("\tSelamat datang di fotokopi kopikopi!!\n");
    printf("===============================================================\n\n");

    int mesan;

    printf("Apakah anda ingin memesan?\n");
    printf("1.iya\n");
    printf("2.Tidak\n");
    printf("Masukan pilihan anda : ");
    scanf("%d", &mesan);
    printf("\n");

    if (mesan == 1)
    {
        printf("Berapa jumlah yang ingin anda fotokopi?\n");
    }
    else if (mesan == 2)
    {
        printf("Terimakasih sudah mampir!!!");
        return 0;
    }
    else
    {
        printf("Input salah, silahkan coba lagi!");
        return 0;
    }

    printf("Masukan jumlah lembar : ");
    scanf("%d", &jumlah_lembar);

    if (jumlah_lembar < 100)
    {
        printf("Anda terkena biaya Rp.150/lembar\n\n");
        harga = jumlah_lembar * 150;
    }
    else if (jumlah_lembar >= 100)
    {
        printf("Anda terkena biaya Rp.100/lembar\n\n");
        harga = jumlah_lembar * 100;
    }

    printf("Total harga : Rp.%d\n", harga);

    printf("Masukan uang anda : Rp.");
    scanf("%d", &uang_dibayar);
    printf("\n\n");

    kembalian = uang_dibayar - harga;

    int struk;
    printf("===============================================================\n");
    printf("Struk pembayaran anda\n\n");
    printf("Jumlah lembar yang anda pesan : %d", jumlah_lembar);
    printf(" Lembar\n");
    printf("Total harga : Rp.%d\n", harga);
    printf("Uang anda sebesar : Rp.%d\n", uang_dibayar);
    if (uang_dibayar >= harga)
    {
        printf("Total kembalian : Rp.%d\n", kembalian);
    }
    else if (uang_dibayar < harga)
    {
        printf("Utang anda sebesar : Rp.%d\n", kembalian);
    }
    printf("===============================================================\n");
    printf("\tTerimakasih sudah pesan!\n");
    printf("===============================================================\n");
    return 0;
}
