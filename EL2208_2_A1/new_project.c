#include "new_project.h"
#include "mode.h"

void new_project(){
//***********************************************************//
//                  [ Source Code ]
//
// Institution : Institut Teknologi Bandung
// Name : <Rafif D>
// File Name : problem1.c
// Dependency : stdio.h, load_project.h , mode.h
//
// Description:membuat program untuk me-load project 
// Please only write 64 characters maximum. If you write
// more than 64, please write it on the next line. Thanks!
//
// Status:
// 1. <Rafif Darmawan> - <13217015> : Create the file
//***********************************************************//
char s1[30],s2[30],namaproyek[30], nama1[30], nama2[30];
char*** A;
char*** B;
int a;

A = create_matrix();
B = create_matrix();

printf("====== Membuat Proyek Baru ======\n");
printf("Masukan nama proyek : ");
scanf("%s", &namaproyek);
strcpy(nama1, namaproyek);
strcpy(nama2, namaproyek);
strcpy(s1,strcat(nama1, "_jadwal.csv"));
strcpy(s2,strcat(nama2, "_asisten.csv"));

matrix_to_csv(s1, A);
matrix_to_csv(s2, B);
do {
    printf("[Menu Utama]\n");
    printf("Pilih Mode:\n");
    printf("1. Tampilkan Schedule\n");
    printf("2. Schedule Manual\n");
    printf("3. Tampilkan Status Assignment Asisten\n");
    printf("4. Assign Asisten Manual\n");
    printf("5. Schedule Otomatis\n");
    printf("6. Assign Otomatis\n");
    printf("7. Rule Checker\n");
    printf("8. Simpan Proyek dan Keluar\n");

printf("Pilih mode :");

scanf("%d", &a);

    while  ((a != 1) && (a != 2)  && (a != 3) && (a != 4) && (a != 5)  && (a != 6) && (a != 7) && (a != 8)){
        printf("Input salah! Ulangi input :\n");
        scanf("%d", &a);
    }
        switch (a){
        case 1 : show_display(A); break;
        case 2 : schedule_manual(A); break;
        case 3 : show_display(B); break;
        case 4 : assign_manual(B); break;
        case 5 : schedule_automatic(A); break;
        case 6 : assign_automatic(B); break;
        case 7 : rule_checker(A); break;
        case 8 : {matrix_to_csv(s1, A);
                  matrix_to_csv(s2, B);
                  printf("File berhasil disimpan\n");}break;
        default : printf("mode salah");
    }

}while(a!=8);
 }
//Realisasi Fungsi
char*** create_matrix(){
char*** A;
int hari = 1;
char sno[30];

A = (char***)malloc(66*sizeof(char**));
for(int i = 0; i<= 66; i++){
    A[i] = malloc(7*sizeof(char*));
        for (int j = 0; j<= 7; j++){
            A[i][j] = malloc(sizeof(char));
        }
}


int no = 3;
    for (int i = 1; i<= 65; i++){
        for (int j = 1; j<= 6; j++){
            if (j == 1){
                sprintf(sno,"%d",no);
                strcpy(A[i][j],sno);
                if ((i % 5) == 0){
                    no += 1;
                }
            }
            else if (j == 2){
                switch(hari){
                    case 1 : strcpy(A[i][j],"Senin"); break;
                    case 2 : strcpy(A[i][j],"Selasa"); break;
                    case 3 : strcpy(A[i][j],"Rabu"); break;
                    case 4 : strcpy(A[i][j],"Kamis"); break;
                    case 5 : strcpy(A[i][j],"Jumat"); hari = 0; break;
                }
                hari++;
            }
            else{
                strcpy(A[i][j],"         ");
            }
        }
    }
return A;}



void matrix_to_csv(char s[50], char*** A){;
FILE *inf = fopen(s,"w");
    fprintf(inf, "Ruang Praktikum||LAB1|LAB2|LAB3|LSS|\n");
    fprintf(inf, "Minggu|Hari||||\n");
    for(int i=1;i<= 65; i++){
        for(int j = 1; j<= 6; j++){
            fprintf(inf,"%s|", A[i][j]);
        }
        fprintf(inf,"\n");
    }
fclose(inf);
}
