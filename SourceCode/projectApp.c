// Hansen -- 00000060325
// Irredeano -- 000000033616
// Liusianto -- 00000061560
// Wlliam Rayhan Harsono – 00000061964
// Marselino Lengyu Pantouw -- 00000061909

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// test
typedef struct
{
    int idStasiun;
    char namaStasiun[10];
    int Jarak;
}Stasiun;

typedef struct
{
    int idKereta;
    char namaKereta[10];
}Kereta;

typedef struct
{
    int idTiket;
    Kereta orderKereta;
    Stasiun stasiunAwal;
    Stasiun stasiunTujuan;
    // Waktu;
    // Type;
    // Harga;
}Tiket;

typedef struct
{
    int idOrder;
    char namaPenumpang[50];
    Tiket tiketBaru;
    Stasiun tujuanTiket[50];
    //Waktu;
    //Type;
    //Status;
}Order;

// struct Edit
// {
//     Data sebelumnya;
//     Data berikutnya;
//     // Konfirmasi pemesanan tiket;
//     // // Edit isi data;
//     // Hapus data ticket;
// };

typedef struct
{
    char username[20];
    char password[20];
    char location[30];
}User;

void TiketKeretaUser(){
  printf("Menu Tiket Kereta User\n");
  //printf("Pilih menu: "); scanf("%d");
  printf("Berhasil masuk ke menu tiket user\nTekan apapun untuk lanjut...\n");

  getchar();
  system("cls");

}

void pesanTiket(){
  printf("Berhasil masuk ke menu pesan tiket\nTekan apapun untuk lanjut...\n");
  getchar();
  system("cls");


    // printf ("KERETA YANG TERSEDIA!\n");
    // printf ("1. A\n2. B\n3. C\n4. D\n\n");
    // printf ("Silahkan pilih kereta yang anda inginkan: \n");
    // scanf ("%d", &idkereta);
    // printf ("Tekan enter untuk melanjutkan...\n");
    //
    // printf ("TYPE YANG TERSEDIA!\n");
    // printf ("1. Eksekutif\n");
    // printf ("2. Bisnis\n");
    // printf ("Ekonimi\n");
    // printf ("Silahkan pilih type kereta yang anda inginkan: \n");
    // //scanf ("%i", &Type);
    // printf ("Tekan enter untuk melanjutkan...\n");
}


void menuUtama(){
  int pilihanMenu;
  printf ("----------     PROGRAM STUDI INFORMATIKA   ----------\n");
  printf ("---------- FAKULTAS TEKNIK DAN INFORMATIKA ----------\n");
  printf ("----------  PROGRAM PEMESANAN TIKET KERETA ----------\n");
  printf ("-----------------------------------------------------\n");
  printf ("\n");
  printf("1. Pesan Tiket Kereta\n"); //fungsi buat pesen kereta
  printf("2. Tiket Kereta Saya\n"); //bisa liat tiket kereta, sort per waktu/daerah tujuan
  printf("3. Exit\n"); //diganti logout nanti klo dah bisa bikin akun?

  printf("\n\nPilih Menu: "); scanf("%d", &pilihanMenu);
  switch(pilihanMenu){
    case 1:
      pesanTiket();
      break;

    case 2:
      TiketKeretaUser();
      break;

    case 3:
      exit(0);
  }

}

int main(){
 while(1){
   menuUtama();
 }



}
