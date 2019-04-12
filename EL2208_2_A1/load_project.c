#include "load_project.h"
#include "mode.h"
void load_project(){
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

int a;

char s1[30],s2[30],namaproyek[30], nama1[30], nama2[30];
char*** A;
char*** B;

printf("Masukan nama proyek yang telah disimpan :");
scanf("%s", &namaproyek);
strcpy(nama1, namaproyek);
strcpy(nama2, namaproyek);
strcpy(s1,strcat(nama1, "_jadwal.csv"));
strcpy(s2,strcat(nama2, "_asisten.csv"));
printf("====== Memuat Proyek ======\n");

A = csv_to_matrix(s1);
B = csv_to_matrix(s2);

do{
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
        case 8 : {save(s1, A);
                  save(s2,B);
                  printf("File berhasil disimpan\n");}break;
        default : printf("mode salah");

    }


}while(a!=8);
}

//Realisasi Fungsi
char*** csv_to_matrix(char s[30]){

//***********************************************************//
//                  [ Source Code ]
//
// Institution : Institut Teknologi Bandung
// Name : <Aghnia Faza>
// File Name : problem1.c
// Dependency : stdio.h, load_project.h , mode.h
//
// Description:membuat program untuk me-load project 
// Please only write 64 characters maximum. If you write
// more than 64, please write it on the next line. Thanks!
//
// Status:
// 1. <Aghnia Faza> - <13217009> : Create the file
//***********************************************************//
char*** A;
int k = 0; //panjang string
int i = 1;
int j = 1;
char a[50], b[50], c, d[50];

A = (char***)malloc(66*sizeof(char**));
for(int i = 0; i<= 66; i++){
    A[i] = malloc(7*sizeof(char*));
        for (int j = 0; j<= 7; j++){
            A[i][j] = malloc(sizeof(char));
        }
}
FILE *outf = fopen(s, "r");
strcpy(a,fgets(a,sizeof(a),outf)); //baris 1
strcpy(b,fgets(b,sizeof(b),outf)); //baris 2
c = fgetc(outf);
    while((i<=65)&&(j<=6)){
        while(c != '|'){
            if(c!='\n'){
                d[k] = c; //c jadi huruf ke k kata d
                k++;
            }
            c = fgetc(outf);
        }
        strcpy(A[i][j],d); //Masukin setiap kata ke matriks
        memset(d,0,strlen(d)); //reset d
        k = 0;
        if (j<6){
            j++;
        }
        c = fgetc(outf);
        if(c=='\n'){
            i++;
            j = 1;
            k = 0;
        }
    }
fclose(outf);
strcpy(A[1][2],"Senin");
return A;}

void save(char s[50], char*** A){;
    //***********************************************************//
//                  [ Source Code ]
//
// Institution : Institut Teknologi Bandung
// Name : <Aghnia Faza>
// File Name : problem1.c
// Dependency : stdio.h, load_project.h , mode.h
//
// Description:membuat program untuk me-load project 
// Please only write 64 characters maximum. If you write
// more than 64, please write it on the next line. Thanks!
//
// Status:
// 1. <Aghnia Faza> - <13217009> : Create the file
//***********************************************************//
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
