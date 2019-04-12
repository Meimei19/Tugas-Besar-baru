#include <stdlib.h>
#include "new_project.h"
#include "load_project.h"
#include "mode.h"


int main(){
//Deklarasi Variabel


int a;
printf("LLLLLLLLLLL             DDDDDDDDDDDDD       TTTTTTTTTTTTTTTTTTTTTTTEEEEEEEEEEEEEEEEEEEEEE     IIIIIIIIIITTTTTTTTTTTTTTTTTTTTTTTBBBBBBBBBBBBBBBBB\n");
printf("L:::::::::L             D::::::::::::DDD    T:::::::::::::::::::::TE::::::::::::::::::::E     I::::::::IT:::::::::::::::::::::TB::::::::::::::::B  \n");
printf("L:::::::::L             D:::::::::::::::DD  T:::::::::::::::::::::TE::::::::::::::::::::E     I::::::::IT:::::::::::::::::::::TB::::::BBBBBB:::::B \n");
printf("LL:::::::LL             DDD:::::DDDDD:::::D T:::::TT:::::::TT:::::TEE::::::EEEEEEEEE::::E     II::::::IIT:::::TT:::::::TT:::::TBB:::::B     B:::::B\n");
printf("  L:::::L                 D:::::D    D:::::DTTTTTT  T:::::T  TTTTTT  E:::::E       EEEEEE       I::::I  TTTTTT  T:::::T  TTTTTT  B::::B     B:::::B\n");
printf("  L:::::L                 D:::::D     D:::::D       T:::::T          E:::::E                    I::::I          T:::::T          B::::B     B:::::B\n");
printf("  L:::::L                 D:::::D     D:::::D       T:::::T          E::::::EEEEEEEEEE          I::::I          T:::::T          B::::BBBBBB:::::B \n");
printf("  L:::::L                 D:::::D     D:::::D       T:::::T          E:::::::::::::::E          I::::I          T:::::T          B:::::::::::::BB  \n");
printf("  L:::::L                 D:::::D     D:::::D       T:::::T          E:::::::::::::::E          I::::I          T:::::T          B::::BBBBBB:::::B \n");
printf("  L:::::L                 D:::::D     D:::::D       T:::::T          E::::::EEEEEEEEEE          I::::I          T:::::T          B::::B     B:::::B\n");
printf("  L:::::L                 D:::::D     D:::::D       T:::::T          E:::::E                    I::::I          T:::::T          B::::B     B:::::B\n");
printf("  L:::::L         LLLLLL  D:::::D    D:::::D        T:::::T          E:::::E       EEEEEE       I::::I          T:::::T          B::::B     B:::::B\n");
printf("LL:::::::LLLLLLLLL:::::LDDD:::::DDDDD:::::D       TT:::::::TT      EE::::::EEEEEEEE:::::E     II::::::II      TT:::::::TT      BB:::::BBBBBB::::::B\n");
printf("L::::::::::::::::::::::LD:::::::::::::::DD        T:::::::::T      E::::::::::::::::::::E     I::::::::I      T:::::::::T      B:::::::::::::::::B \n");
printf("L::::::::::::::::::::::LD::::::::::::DDD          T:::::::::T      E::::::::::::::::::::E     I::::::::I      T:::::::::T      B::::::::::::::::B  \n");
printf("LLLLLLLLLLLLLLLLLLLLLLLLDDDDDDDDDDDDD             TTTTTTTTTTT      EEEEEEEEEEEEEEEEEEEEEE     IIIIIIIIII      TTTTTTTTTTT      BBBBBBBBBBBBBBBBB  \n");
printf("\n");printf("\n");
//***********************************************************//
// [ Source Code ]
//
// Institution : Institut Teknologi Bandung
// Name : < Naufal Nashirul M>
// File Name : problem1.c
// Dependency : stdio.h, math.h, dst...
//
// Description:
// Please only write 64 characters maximum. If you write
// more than 64, please write it on the next line. Thanks!
//
// Status:
// 1. <Nama Praktikan> - <NIM> : Create the file
// 2. <Nama Praktikan> - <NIM> : Fix the bug where number 2
//***********************************************************//
printf("Menu :\n");
printf("1. Buat proyek Baru\n");
printf("2. Muat proyek dari Berkas\n");
printf("3. Keluar\n");

printf("Masukan :");
scanf("%d", &a);
while  ((a != 1) && (a != 2)  && (a != 3)){
    printf("Input salah! Ulangi input :\n");
    scanf("%d", &a);
}

switch (a){
case 1 : new_project(); break;
case 2 : load_project(); break;
case 3 : return 0; break;

}
return 0;}


