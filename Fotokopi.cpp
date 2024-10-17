#include <iostream>
using namespace std;

int main()
{

    int welcome;
    cout << "===============================================" << endl;
    cout << "Selamat datang di fotokopi kopikopi !!" << endl;
    cout << "===============================================" << endl
         << endl;
    cout << "Apakah anda ingin memesan? " << endl;
    cout << "1.Iya saya ingin memesan" << endl;
    cout << "2.Tidak saya tidak ingin memesan" << endl;
    cout << "Masukan pilihan anda : ";
    cin >> welcome;
    cout << endl;

    if (welcome == 1)
    {
        cout << "Silahkan lanjutkan pemesanan" << endl;
    }
    else if (welcome == 2)
    {
        cout << "===============================================" << endl;
        cout << "Terimakasih sudah mampir!!!!" << endl;
        cout << "===============================================" << endl;

        return 0;
    }
    else
    {
        cout << "Input salah, silahkan coba lagi!!" << endl;

        return 0;
    }

    int jumlah;
    cout << "Berapa jumlah yang ingin anda fotokopi : " << endl;
    cout << "1. < 100 " << endl;
    cout << "2. >= 100 " << endl;
    cout << "Masukan pilihan anda : ";
    cin >> jumlah;
    cout << endl;

    if (jumlah == 1)
    {
        cout << "Anda terkena biaya Rp.150/lembar" << endl
             << endl;
    }
    else if (jumlah == 2)
    {
        cout << "Anda terkena biaya Rp.100/lembar" << endl
             << endl;
    }
    else
    {
        cout << "Input salah, silahkan coba lagi!" << endl;

        return 0;
    }

    int lanjut;
    cout << "Apakah anda ingin melanjutkan? " << endl;
    cout << "1. Iya" << endl;
    cout << "2. Tidak" << endl;
    cout << "Masukan pilihan anda : ";
    cin >> lanjut;
    cout << endl;

    if (lanjut == 1)
    {
        cout << "Berapa jumlah yang ingin anda fotokopi : ";
        cin >> lanjut;
        cout << endl;
    }
    else if (lanjut == 2)
    {
        cout << "Terimakasih sudah memesan" << endl;

        return 0;
    }
    else
    {
        cout << "Input salah, silahkan coba lagi!" << endl;

        return 0;
    }

    int x = 100;
    int y = 150;
    int kembalian1(lanjut * y);
    int kembalian2(lanjut * x);

    if (lanjut < 100)
    {
        cout << "Jumlah yang harus anda bayar : Rp."
             << kembalian1
             << endl
             << endl;
    }
    else if (lanjut >= 100)
    {
        cout << "Jumlah yang harus anda bayar : Rp."
             << kembalian2
             << endl
             << endl;
    }
    else
    {
        cout << "Input salah";
    }

    int inputduit;

    cout << "Masukan duit anda : Rp.";
    cin >> inputduit;
    cout << endl;

    int struk;

    cout << "===================================================" << endl;
    cout << "Struk pembayaran anda" << endl
         << endl;
    cout << "Lembar yang anda pesan : " << lanjut << " Lembar" << endl;
    if (lanjut < 100)
    {
        cout << "Total harga : Rp."
             << kembalian1
             << endl;
    }
    else if (lanjut >= 100)
    {
        cout << "Total harga : Rp."
             << kembalian2
             << endl;
    }

    cout << "Uang anda sebesar : Rp" << inputduit << endl;

    int totalkembalian(inputduit - kembalian1);
    int totalkembalian1(inputduit - kembalian2);

    if (lanjut < 100)
    {
        cout << "Total kembalian anda sebesar : Rp." << totalkembalian << endl;
    }

    else if (lanjut >= 100)
    {
        cout << "Total kembalian anda sebesar : Rp." << totalkembalian1 << endl;
    }

    cout << "===================================================" << endl;
    cout << "TERIMAKASIH SUDAH MEMESAN !!!" << endl;
    cout << "===================================================" << endl;
}
