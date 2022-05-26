// Hansen -- 00000060325
// Irredeano -- 000000033616
// Liusianto -- 00000061560
// Wlliam Rayhan Harsono – 00000061964
// Marselino Lengyu Pantouw -- 00000061909

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//test
//Progress Bar
// Function to creating loading bar
void loadingBar()
{
    // 0 - black background,
    // A - Green Foreground
    //system("color 0A");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t Loading...\n\n");
    printf("\t\t\t\t\t\t");

    // Print initial loading bar
    for (int i = 0; i < 24; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    printf("\r");
   printf("\t\t\t\t\t\t");

    // Print loading bar progress
    for (int i = 0; i < 12; i++) {
        printf("%c%c", b, b);

        // Sleep for 1 second
        Sleep(50);
    }
}

void tryingSoHardLoadingBar()
{
    // 0 - black background,
    // A - Green Foreground
    //system("color 0A");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t Loading...\n\n");
    printf("\t\t\t\t\t\t");

    // Print initial loading bar
    for (int i = 0; i < 24; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    printf("\r");
   printf("\t\t\t\t\t\t");

    // Print loading bar progress
    for (int i = 0; i < 12; i++) {
        printf("%c%c", b, b);

        // Sleep for 1 second
        Sleep(100);
    }
}


/*
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
*/

// ===============   Section Login   ===========================
typedef struct{
    char username[20];
    char password[20];
    char location[20];
}USERDATA;

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
        fscanf(fp, "%[^#]#%[^#]#\n", newUser.username, newUser.password);
        userArr[a] = newUser;
        a++;
    }
    fclose(fp);
    printf("\n\n\n\t\t\t\t\t=============    login    =============\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t username/email   :    ");scanf("%s", &userid);//printf("%s", userid);
    printf("\t\t\t\t\t password         :    ");scanf("%s", &password);//printf("%s", password);

    loadingBar();
    system("cls");
    for(j=0; j < a; j++){
        idCheck = strcmp(userArr[j].username, userid);
        passCheck = strcmp(userArr[j].password, password);
        if(idCheck == 0 && passCheck == 0){
            printf("\n\n\n\n\n\n\n\t\t\t\t\t         Login sudah berhasil");
            Sleep(500);
            printf("\n\t\t\t\t\t            Selamat datang!     ");
            Sleep(500);
            loginMenu(userid, password);
            break;
        } else if(idCheck, passCheck == 1 || idCheck, passCheck == -1){
            continue;
        } else {
            //log the error
        }

    }
        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        tryingSoHardLoadingBar();
        system("cls");
        printf("\n\n\n\t\t\t\t\t Data tidak tersedia, mari Signup\n");
        printf("\n\t\t\t\t\t Press anything to continue..\n\n");
}


void signup(){
    char newuserid[20], newpassword[20];
    printf("\n\n\n\t\t\t\t\t=============   signup   =============\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t username/email   :    ");scanf(" %s", &newuserid);
    printf("\t\t\t\t\t password         :    ");scanf(" %s", &newpassword);

     //preparing .txt file to read
    char *userData = "user.txt";
    FILE *fp = fopen(userData, "a+w");
    if(fp == NULL){
        printf("\n\n\n\t\t\t\t\tError: Couldn't open file %s\n\n\n\n\n\n\n", userData);
        printf("\n\n\n\t\t\t\t\tPress enter to continue\n\t\t\t\t\t");

        return 1;
    }
    fprintf(fp, "\n%s#%s#", newuserid, newpassword);
    fclose(fp);
    printf("\n\n\n\t\t\t\t\t        Signup is succesful      \n");
    printf("\n\n\n\t\t\t\t\t       Thanks for joining us!    \n");

        //check if exist in document
}

void loginMenu(char *userid, char *password){
    int pilihanMenu;
    char namaStasiun[10];
    system("cls");
    while(1){
        printf("\n\n\n\t\t\t\t\t=============  Welcome   ============= \n");
        printf("\t\t\t\t        %s!                    \n", userid);
        printf("\n\n\n\t\t\t\t\t1. Beli tiket                          \n");
        printf("\t\t\t\t        2. Tiket saya                         \n");
        printf("\t\t\t\t        3. Batalkan Tiket                     \n");
        printf("\t\t\t\t        4. Logout                             \n");
        printf("\t\t\t\t        Pilih: "); scanf("%d", &pilihanMenu);
        if(pilihanMenu == 1){
            system("cls");
            printf("\n\n\n\t\t\t\t\t=============  Beli Tiket   ============= \n");
            printf("\t\t\t\t        0. Kembali           1.Tambah Stasiun    \n");
            printf("\t\t\t\t        Pilih: "); scanf("%d", &pilihanMenu);
            if(pilihanMenu == 0){
                system("cls");
                continue;
            } else if(pilihanMenu == 1){
               //kosong
               system("cls");
               continue;

            }

        } else if(pilihanMenu == 2){
            system("cls");
            printf("\n\n\n\t\t\t\t\t=============  Tiket Saya     ============= \n");
            printf("\t\t\t\t        0. Kembali                            \n");
            printf("\t\t\t\t        Pilih: "); scanf("%d", &pilihanMenu);
            if(pilihanMenu == 0){
                system("cls");
                continue;
            } else {
                printf("\n\n\n\t\t\t\t\t==========   Invalid Input   ==========\n");
                printf("\t\t\t\t\t=====  Press Anything to Continue =====\n\n\n\n\n\n\n");
                getch();
                fflush(stdin);
                system("cls");
            }
        } else if(pilihanMenu == 3){
            system("cls");
            printf("\n\n\n\t\t\t\t\t=============  Batalkan Tiket      ============= \n");
            printf("\t\t\t\t        0. Kembali                            \n");
            printf("\t\t\t\t        Pilih: "); scanf("%d", &pilihanMenu);
            if(pilihanMenu == 0){
                system("cls");
                continue;
            } else {
                printf("\n\n\n\t\t\t\t\t==========   Invalid Input   ==========\n");
                printf("\t\t\t\t\t=====  Press Anything to Continue =====\n\n\n\n\n\n\n");
                getch();
                fflush(stdin);
                system("cls");
            }
        } else if(pilihanMenu == 4){
            system("cls");
            main();
        } else{
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
