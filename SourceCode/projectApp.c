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


// ===============   Section Login   ===========================
typedef struct{
    char username[20];
    char password[20];
    char location[20];
}USERDATA;

//Login == Signup
void login(){
    int i, j, a=0, idCheck, passCheck;
    char userid[20], password[10], ch, rd;
    USERDATA userArr[20];


    //preparing .txt file to read
    char *userData = "user.txt";
    FILE *fp = fopen(userData, "r");

    if(fp == NULL){
        printf("\n\n\n\t\t\t\t\tError: Couldn't open file %s\n\n\n\n\n\n\n", userData);
        printf("\n\n\n\t\t\t\t\tPress enter to continue\n\t\t\t\t\t");

        return 1;
    }

    while(!feof(fp)){
        USERDATA newUser;
        fscanf(fp, "%[^#]#%[^#]", newUser.username, newUser.password);
        userArr[a] = newUser;                                                   //blom bisa klo user di txt ny 2
        a++;
    }
    fclose(fp);

    printf("\n\n\n\t\t\t\t\t=============    login    =============\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t username/email   :    ");scanf("%s", &userid);
    printf("\t\t\t\t\t password         :    ");scanf("%s", &password);

    for(j=0; j < a; j++){

        idCheck = strcmp(userArr[j].username, userid);
        passCheck = strcmp(userArr[j].password, password);

        if(idCheck == 0 && passCheck == 0){
            printf("\n\n\n\t\t\t\t\t Login sudah berhasil    ");
        } else {

            printf("\n\n\n\t\t\t\t\t Data tidak tersedia, mari Signup\n");
            printf("\n\n\n\t\t\t\t\t Press anything to continue..\n\n");


        }

    }

}

void signup(){
    char userid[20], password[20];
    printf("\n\n\n\t\t\t\t\t=============   signup   =============\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t username/email   :    ");scanf(" %s", &userid);
    printf("\t\t\t\t\t password         :    ");scanf(" %s", &password);

    //check if exist in document
    //blm jadi, coming soon
}


void menuUtama(){
  int pilihanMenu;
      while(1){

        int pMain=0;
        printf("\n\n\n\t\t\t\t\t=============   Welcome   =============\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t1. Login                      2. Signup\n");
        printf("\t\t\t\t\tPilihan: "); scanf("%d", &pMain);

        if(pMain == 1){
            system("cls");
            login();
            getch();
            system("cls");
        } else if(pMain == 2){
            system("cls");
            signup();
            getch();
            system("cls");
        } else {
            printf("\n\n\n\t\t\t\t\t==========   Invalid Input   ==========\n");
            printf("\t\t\t\t\t=====  Press Anything to Continue =====\n\n\n\n\n\n\n");
            getch();
            fflush(stdin);
            system("cls");

        }
    }
}

int main(){
 while(1){
   menuUtama();
 }



}
