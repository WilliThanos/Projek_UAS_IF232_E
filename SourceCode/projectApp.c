// Hansen -- 00000060325
// Irredeano -- 000000033616
// Liusianto -- 00000061560 
// Wlliam Rayhan Harsono – 00000061964
// Marselino Lengyu Pantouw -- 00000061909

#include <stdio.h>
#include <conio.h>
// test
typedef struct Stasiun
{
    int idStasiun;
    char namaStasiun[10];
    int Jarak;
};

typedef struct Kereta
{
    int idKereta;
    char namaKereta[10];
};

typedef struct Tiket
{
    int idTiket;
    Kereta orderKereta;
    Stasiun stasiunAwal;
    Stasiun stasiunTujuan;
    Waktu;
    Type;
    Harga;
};

struct Order
{
    int idOrder;
    char namaPenumpang[50];
    Tiket tiketBaru;
    Stasiun tujuanTiket[50];
    Waktu;
    Type;
    Status;
};

struct Edit
{
    Data sebelumnya;
    Data berikutnya;
    Konfirmasi pemesanan tiket;
    Edit isi data;
    Hapus data ticket;
};

struct User
{
    char username[20];
    char password[20];
    char location[30];
};

printf ("\n");
printf ("------PROGRAM STUDI INFORMATIKA------\n");
printf ("------FAKULTAS TEKNIK DAN INFORMATIKA------\n")
printf ("--------PROGRAM PEMESANAN TIKET KERETA--------\n");
printf ("------------------------------------------\n");
printf ("\n");
printf ("------------------------------------------\n");

printf ("KERETA YANG TERSEDIA!\n");
printf ("1. A\n");
printf ("2. B\n");
printf ("3. C\n");
printf ("4. D\n");
printf ("Silahkan pilih kereta yang anda inginkan: \n");
scanf ("%i", &idkereta);
printf ("Tekan enter untuk melanjutkan...\n");

printf ("TYPE YANG TERSEDIA!\n");
printf ("1. Eksekutif\n");
printf ("2. Bisnis\n");
printf ("Ekonimi\n");
printf ("Silahkan pilih type kereta yang anda inginkan: \n");
scanf ("%i", &Type);
printf ("Tekan enter untuk melanjutkan...\n");

if (idKereta == 1){
    strcpy (Kereta)
}
