
#include "mode.h"

typedef struct arra{
//***********************************************************//
// [ Source Code ]
//
// Institution : Institut Teknologi Bandung
// Name : <Aghnia Faza>
// Dependency : stdio.h, mode.h
//
// Description:
// Please only write 64 characters maximum. If you write
// more than 64, please write it on the next line. Thanks!
//
// Status:
// 1. <Aghnia Faza> - <13217009> : Create the file
//***********************************************************//
	char Minggu[100];
	char Hari[100];
}arr;


void show_display(char*** A){
//***********************************************************//
// 					[ Source Code ]
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
printf("    /$$$$$  /$$$$$$  /$$$$$$$  /$$      /$$  /$$$$$$  /$$ 		\n");     
printf("   |__  $$ /$$__  $$| $$__  $$| $$  /$ | $$ /$$__  $$| $$      \n");
printf("      | $$| $$  \\ $$| $$  \\ $$| $$ /$$$| $$| $$  \\ $$| $$      \n");
printf("      | $$| $$$$$$$$| $$  | $$| $$/$$ $$ $$| $$$$$$$$| $$      \n");
printf(" /$$  | $$| $$__  $$| $$  | $$| $$$$_  $$$$| $$__  $$| $$      \n");
printf("| $$  | $$| $$  | $$| $$  | $$| $$$/ \\  $$$| $$  | $$| $$      \n");
printf("|  $$$$$$/| $$  | $$| $$$$$$$/| $$/   \\  $$| $$  | $$| $$$$$$$$\n");
printf(" \\______/ |__/  |__/|_______/ |__/     \\__/|__/  |__/|________/ \n");
printf("\n");printf("\n");


printf("|---------------------------------------------------------------------|\n");
printf("| Ruang Praktikum |    LAB1    |    LAB2    |    LAB3    |     LSS    |\n");
printf("|-----------------|------------|------------|------------|------------|\n");
printf("| Minggu |  Hari  |------------|------------|------------|------------|\n");
printf("|--------|--------|------------|------------|------------|------------|\n");
for (int i = 1; i<= 65; i++){
    for (int j = 1; j<= 6; j++){
        if (j == 1){
            if (i <= 35){
                printf("|   %s    |", A[i][j]);
            }
            else{
                printf("|   %s   |", A[i][j]);
            }
        }
        else if (j == 2){
            if(strcmp(A[i][j], "Senin") == 0){
                printf(" %s  |", A[i][j]);
            }
            else if (strcmp(A[i][j], "Selasa") == 0){
                 printf(" %s |",A[i][j]);
            }
            else if (strcmp(A[i][j], "Rabu") == 0){
                 printf(" %s   |",A[i][j]);
            }
            else if (strcmp(A[i][j], "Kamis") == 0){
                 printf(" %s  |",A[i][j]);
            }
            else{
                printf(" %s  |",A[i][j]);
            }
        }
        else{
            printf(" %s  |", A[i][j]);
        }
    }
    if (i % 5 == 0){
    printf("\n");
    printf("|---------------------------------------------------------------------|");
    }
    printf("\n");
}
return;}

void schedule_manual (char*** A){
//***********************************************************//
// 					[ Source Code ]
//
// Institution : Institut Teknologi Bandung
// Name : <Meinanto>
// File Name : problem1.c
// Dependency : stdio.h, load_project.h , mode.h
//
// Description:membuat program untuk me-load project 
// Please only write 64 characters maximum. If you write
// more than 64, please write it on the next line. Thanks!
//
// Status:
// 1. <Meinanto tri yuriawan> - <13217021> : Create the file
//***********************************************************//
	char schedule[17][5][4][11];
	char kode[15], rombongan[2], hari[7], ruang[5],room[3][5], isi[10], buffer[3];
	int j,k, minggu, ihari, iruang, iroom[3],x =1;
	printf("isi q atau Q untuk kembali ke menu\n");
		for (int x=1; x<=16; x++){
			for (int y=1; y<=5; y++){
				for (int z=1; z<=4; z++){
					strcpy (schedule[x][y][z] , "         ");
				}
			}
		}
	while (x!=999){
		printf("Pilih Kode Praktikum (EL2205, EL2208, EB2200): ");
		scanf("%s", &kode);
		if (strcmp (kode ,"EL2208") == 0){
			strcpy(isi, kode);
			printf("Rombongan (A1, A2, A3, B1, B2, B3, atau C): ");
			scanf("%s", &rombongan);
			if ((strcmp (rombongan ,"A1")== 0)||(strcmp (rombongan ,"A2")== 0)||(strcmp (rombongan ,"A3")== 0)
				||(strcmp (rombongan ,"B1")== 0)||(strcmp (rombongan ,"B2")== 0)||(strcmp (rombongan ,"B3")== 0)
				||(strcmp (rombongan ,"C")== 0))
				{
				strcat(isi,"-");
				strcat(isi, rombongan);
				printf("Minggu ke: ");
				scanf("%d", &minggu);
				while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
					&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
					printf("masukan salah\n");
					printf("Minggu ke: ");
					scanf("%d", &minggu);
				}
				printf("Hari: ");
				scanf("%s", &hari);
				while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
					&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
					printf("masukan salah\n");
					printf("Hari: ");
					scanf("%s", &hari);
				}
				if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
				if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
				if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
				if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
				if ((strcmp (hari , "Jumat"))==0) {ihari = 5;}
				printf("Ruangan: ");
				scanf("%s", &ruang);
				while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
					printf("masukan salah\n");
					printf("Ruangan: ");
					scanf("%s", &ruang);
				}
				if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
				if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
				if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
				if ((strcmp (ruang , "LSS"))==0) {iruang=4;}
				strcpy (schedule[minggu][ihari][iruang] ,isi);
			} else if ((strcmp (rombongan , "A")==0)||(strcmp(rombongan , "B")==0)) {
				strcat(isi,"-");
				strcat(isi, rombongan);
				printf("Minggu ke: ");
				scanf("%d", &minggu);
				while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
					&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
					printf("masukan salah\n");
					printf("Minggu ke: ");
					scanf("%d", &minggu);
				}
				printf("Hari: ");
				scanf("%s", &hari);
				while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
					&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
					printf("masukan salah");
					printf("Hari: ");
					scanf("%s", &hari);
				}
				if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
				if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
				if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
				if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
				if ((strcmp (hari , "Jumat"))==0) {ihari = 5;}

				for (k=0;k<3;k++) {
					printf("Ruangan %d: ", k+1);
					scanf("%s", &room[k]);
					while((strcmp (room[k] , "LAB1")!=0)&&(strcmp (room[k] , "LAB2")!=0)&&(strcmp (room[k] , "LAB3")!=0)&&(strcmp (room[k] , "LSS")!=0)){
						printf("masukan salah");
						printf("Ruangan: ");
						scanf("%s", &room[k]);
					}
				if ((strcmp (room[k] , "LAB1"))==0) {iroom[k]=1;}else
				if ((strcmp (room[k] , "LAB2"))==0) {iroom[k]=2;}else
				if ((strcmp (room[k] , "LAB3"))==0) {iroom[k]=3;}else
				if ((strcmp (room[k] , "LSS"))==0) {iroom[k]=4;}
				strcat(isi,(itoa((k+1),buffer,10)));
				strcpy(schedule[minggu][ihari][iroom[k]],isi);
				strcpy(isi,kode);
				strcat(isi,"-");
				strcat(isi, rombongan);
				}
			}
		} else if (strcmp (kode ,"EL2205") == 0){
			strcpy(isi, kode);
			printf("Rombongan (A1,A2,B1,B2,C1, atau C2): ");
			scanf("%s", &rombongan);
			if ((strcmp (rombongan ,"A1")== 0)||(strcmp (rombongan ,"A2")== 0)||(strcmp (rombongan ,"B1")== 0)
				||(strcmp (rombongan ,"B2")== 0)||(strcmp (rombongan ,"C1")== 0)||(strcmp (rombongan ,"C2")== 0))
				{
				strcat(isi,"-");
				strcat(isi, rombongan);
				printf("Minggu ke: ");
				scanf("%d", &minggu);
				while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
					&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
					printf("masukan salah\n");
					printf("Minggu ke: ");
					scanf("%d", &minggu);
				}
				printf("Hari: ");
				scanf("%s", &hari);
				while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
					&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
					printf("masukan salah\n");
					printf("Hari: ");
					scanf("%s", &hari);
				}
				if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
				if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
				if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
				if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
				if ((strcmp (hari , "Jumat"))==0) {ihari = 5;}
				printf("Ruangan: ");
				scanf("%s", &ruang);
				while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
					printf("masukan salah\n");
					printf("Ruangan: ");
					scanf("%s", &ruang);
				}
				if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
				if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
				if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
				if ((strcmp (ruang , "LSS"))==0) {iruang=4;}
				strcpy (schedule[minggu][ihari][iruang] ,isi);
			} else if ((strcmp (rombongan , "A")==0)||(strcmp(rombongan , "B")==0)||(strcmp(rombongan, "C"))) {
				strcat(isi,"-");
				strcat(isi, rombongan);
				printf("Minggu ke: ");
				scanf("%d", &minggu);
				while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
					&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
					printf("masukan salah\n");
					printf("Minggu ke: ");
					scanf("%d", &minggu);
				}
				printf("Hari: ");
				scanf("%s", &hari);
				while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
					&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
					printf("masukan salah");
					printf("Hari: ");
					scanf("%s", &hari);
				}
				if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
				if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
				if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
				if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
				if ((strcmp (hari , "Jumat"))==0) {ihari = 5;}

				for (k=0;k<2;k++) {
					printf("Ruangan %d: ", k+1);
					scanf("%s", &room[k]);
					while((strcmp (room[k] , "LAB1")!=0)&&(strcmp (room[k] , "LAB2")!=0)&&(strcmp (room[k] , "LAB3")!=0)&&(strcmp (room[k] , "LSS")!=0)){
						printf("masukan salah");
						printf("Ruangan: ");
						scanf("%s", &room[k]);
					}
				if ((strcmp (room[k] , "LAB1"))==0) {iroom[k]=1;}else
				if ((strcmp (room[k] , "LAB2"))==0) {iroom[k]=2;}else
				if ((strcmp (room[k] , "LAB3"))==0) {iroom[k]=3;}else
				if ((strcmp (room[k] , "LSS"))==0) {iroom[k]=4;}
				strcat(isi,(itoa((k+1),buffer,10)));
				strcpy(schedule[minggu][ihari][iroom[k]],isi);
				strcpy(isi,kode);
				strcat(isi,"-");
				strcat(isi, rombongan);
				}
			}
		} else if (strcmp (kode ,"EB2200") == 0){
			strcpy(isi, kode);
			printf("Rombongan (A atau B): ");
			scanf("%s", &rombongan);
			if ((strcmp (rombongan ,"A")== 0)||(strcmp (rombongan ,"B")== 0))
				{
				strcat(isi,"-");
				strcat(isi, rombongan);
				strcat(isi, " ");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
				while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
					&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
					printf("masukan salah\n");
					printf("Minggu ke: ");
					scanf("%d", &minggu);
				}
				printf("Hari: ");
				scanf("%s", &hari);
				while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
					&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
					printf("masukan salah\n");
					printf("Hari: ");
					scanf("%s", &hari);
				}
				if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
				if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
				if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
				if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
				if ((strcmp (hari , "Jumat"))==0) {ihari = 5;}
				printf("Ruangan: ");
				scanf("%s", &ruang);
				while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
					printf("masukan salah\n");
					printf("Ruangan: ");
					scanf("%s", &ruang);
				}
				if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
				if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
				if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
				if ((strcmp (ruang , "LSS"))==0) {iruang=4;}
				strcpy (schedule[minggu][ihari][iruang] ,isi);
			}
		} else if ((strcmp (kode , "q")==0)||(strcmp(kode , "Q")==0)){

		for (int a=1; a<5; a++){for (j = 3; j<= 6; j++){strcpy (A[a][j] , schedule[3][a][j-2]);}}
		for (int b=6; b<10; b++){for (j = 3; j<= 6; j++){strcpy (A[b][j] , schedule[4][b-5][j-2]);}}
		for (int c=11; c<15; c++){for (j = 3; j<= 6; j++){strcpy (A[c][j] , schedule[5][c-10][j-2]);}}
		for (int d=16; d<20; d++){for (j = 3; j<= 6; j++){strcpy (A[d][j] , schedule[6][d-15][j-2]);}}
		for (int e=21; e<25; e++){for (j = 3; j<= 6; j++){strcpy (A[e][j] , schedule[7][e-20][j-2]);}}
		for (int f=26; f<30; f++){for (j = 3; j<= 6; j++){strcpy (A[f][j] , schedule[8][f-25][j-2]);}}
		for (int g=31; g<35; g++){for (j = 3; j<= 6; j++){strcpy (A[g][j] , schedule[9][g-30][j-2]);}}
		for (int h=36; h<40; h++){for (j = 3; j<= 6; j++){strcpy (A[h][j] , schedule[10][h-35][j-2]);}}
		for (int i=41; i<45; i++){for (j = 3; j<= 6; j++){strcpy (A[i][j] , schedule[11][i-40][j-2]);}}
		for (int k=46; k<50; k++){for (j = 3; j<= 6; j++){strcpy (A[k][j] , schedule[12][k-45][j-2]);}}
		for (int l=51; l<55; l++){for (j = 3; j<= 6; j++){strcpy (A[l][j] , schedule[13][l-50][j-2]);}}
		for (int m=56; m<60; m++){for (j = 3; j<= 6; j++){strcpy (A[m][j] , schedule[14][m-55][j-2]);}}
		for (int n=61; n<65; n++){for (j = 3; j<= 6; j++){strcpy (A[n][j] , schedule[15][n-60][j-2]);}}
		x=999; return ;
		}
	}

}



void assign_manual (char*** B){
//***********************************************************//
// 					[ Source Code ]
//
// Institution : Institut Teknologi Bandung
// Name : <Meinanto>
// File Name : problem1.c
// Dependency : stdio.h, load_project.h , mode.h
//
// Description:membuat program untuk me-load project 
// Please only write 64 characters maximum. If you write
// more than 64, please write it on the next line. Thanks!
//
// Status:
// 1. <Meinanto tri yuriawan> - <13217021> : Create the file
//***********************************************************//
	char assign[17][5][4][11];
	char asisten[2], hari[7], ruang[5], isi[10];
	int j,k, minggu, ihari, iruang, x=1;
	printf("isi q atau Q untuk kembali ke menu\n");
		for (int x=1; x<=16; x++){
			for (int y=1; y<=5; y++){
				for (int z=1; z<=4; z++){
					strcpy (assign[x][y][z] , "         ");
				}		
			}
		}
	while(x!=999){
		printf("Pilih Asisten (A-N): ");
		scanf("%s", &asisten);

		
		if (strcmp (asisten ,"A") == 0){
			strcpy(isi, "Amir");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 

			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",A      ");
			}else {strcpy(assign[minggu][ihari][iruang],"A");}
		} else if (strcmp (asisten ,"B") == 0){
			strcpy(isi, "Budi");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 

			if ((strcmp (assign[minggu][ihari][iruang], "A")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",B      ");
			}else {strcpy(assign[minggu][ihari][iruang],"B");}
		} else if (strcmp (asisten ,"C") == 0){
			strcpy(isi, "Cici");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 
			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "A")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",C      ");
			}else {strcpy(assign[minggu][ihari][iruang],"C");}
		} else if (strcmp (asisten ,"D") == 0){
			strcpy(isi, "Doni");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 

			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "A")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",D      ");
			}else {strcpy(assign[minggu][ihari][iruang],"D");}
		} else if (strcmp (asisten ,"E") == 0){
			strcpy(isi, "Endang");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 
			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "A")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",E      ");
			}else {strcpy(assign[minggu][ihari][iruang],"E");}
		} else if (strcmp (asisten ,"F") == 0){
			strcpy(isi, "Fadel");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 

			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "A")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",F      ");
			}else {strcpy(assign[minggu][ihari][iruang],"F");}
		} else if (strcmp (asisten ,"G") == 0){
			strcpy(isi, "Gilang");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 
			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "A")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",G      ");
			}else {strcpy(assign[minggu][ihari][iruang],"G");}
		} else if (strcmp (asisten ,"H") == 0){
			strcpy(isi, "Hero");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 
			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "A")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",H      ");
			}else {strcpy(assign[minggu][ihari][iruang],"H");}
		} else if (strcmp (asisten ,"I") == 0){
			strcpy(isi, "Intan");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 
			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "A")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",I      ");
			}else {strcpy(assign[minggu][ihari][iruang],"I");}
		} else if (strcmp (asisten ,"J") == 0){
			strcpy(isi, "Joko");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 
			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "A")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",J      ");
			}else {strcpy(assign[minggu][ihari][iruang],"J");}
		} else if (strcmp (asisten ,"K") == 0){
			strcpy(isi, "Kiki");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 
			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "A")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",K      ");
			}else {strcpy(assign[minggu][ihari][iruang],"K");}
		} else if (strcmp (asisten ,"L") == 0){
			strcpy(isi, "Luis");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 
			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "A")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",L      ");
			}else {strcpy(assign[minggu][ihari][iruang],"L");}
		} else if (strcmp (asisten ,"M") == 0){
			strcpy(isi, "Mini");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 
			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "A")==0)
				||(strcmp (assign[minggu][ihari][iruang], "N")==0)){
				strcat(assign[minggu][ihari][iruang],",M      ");
			}else {strcpy(assign[minggu][ihari][iruang],"M");}
		} else if (strcmp (asisten ,"N") == 0){
			strcpy(isi, "Nina");
			printf("Minggu ke: ");
			scanf("%d", &minggu);
			while((minggu != 3)&&(minggu != 4)&&(minggu != 5)&&(minggu != 6)&&(minggu != 7)
				&&(minggu != 8)&&(minggu != 9)&&(minggu != 10)&&(minggu != 11)&&(minggu != 12)&&(minggu != 13)&&(minggu != 14)&&(minggu != 15)){
				printf("masukan salah\n");
				printf("Minggu ke: ");
				scanf("%d", &minggu);
			}
			printf("Hari: ");
			scanf("%s", &hari);
			while((strcmp (hari , "Senin")!=0)&&(strcmp (hari , "Selasa")!=0)&&(strcmp (hari , "Rabu")!=0)
				&&(strcmp (hari , "Kamis")!=0)&&(strcmp (hari , "Jumat")!= 0)){
				printf("masukan salah\n");
				printf("Hari: ");
				scanf("%s", &hari);
			}
			if ((strcmp (hari , "Senin"))==0) {ihari = 1;} else
			if ((strcmp (hari , "Selasa"))==0) {ihari = 2;} else
			if ((strcmp (hari , "Rabu"))==0) {ihari = 3;} else
			if ((strcmp (hari , "Kamis"))==0) {ihari = 4;} else
			if ((strcmp (hari , "Jumat"))==0) {ihari = 5;} 
			printf("Ruangan: ");
			scanf("%s", &ruang);
			while((strcmp (ruang , "LAB1")!=0)&&(strcmp (ruang , "LAB2")!=0)&&(strcmp (ruang , "LAB3")!=0)&&(strcmp (ruang , "LSS")!=0)){
				printf("masukan salah\n");
				printf("Ruangan: ");
				scanf("%s", &ruang);
				}
			if ((strcmp (ruang , "LAB1"))==0) {iruang=1;} else
			if ((strcmp (ruang , "LAB2"))==0) {iruang=2;} else
			if ((strcmp (ruang , "LAB3"))==0) {iruang=3;} else
			if ((strcmp (ruang , "LSS"))==0) {iruang=4;} 
			if ((strcmp (assign[minggu][ihari][iruang], "B")==0)||(strcmp (assign[minggu][ihari][iruang], "C")==0)||(strcmp (assign[minggu][ihari][iruang], "D")==0)
				||(strcmp (assign[minggu][ihari][iruang], "E")==0)||(strcmp (assign[minggu][ihari][iruang], "F")==0)||(strcmp (assign[minggu][ihari][iruang], "G")==0)
				||(strcmp (assign[minggu][ihari][iruang], "H")==0)||(strcmp (assign[minggu][ihari][iruang], "I")==0)||(strcmp (assign[minggu][ihari][iruang], "J")==0)
				||(strcmp (assign[minggu][ihari][iruang], "K")==0)||(strcmp (assign[minggu][ihari][iruang], "L")==0)||(strcmp (assign[minggu][ihari][iruang], "M")==0)
				||(strcmp (assign[minggu][ihari][iruang], "A")==0)){
				strcat(assign[minggu][ihari][iruang],",N      ");
			}else {strcpy(assign[minggu][ihari][iruang],"N");}
		} else if ((strcmp (asisten , "q")==0)||(strcmp(asisten , "Q")==0)){
		for (int a=1; a<5; a++){for (j = 3; j<= 6; j++){strcpy (B[a][j] , assign[3][a][j-2]);}}
		for (int b=6; b<10; b++){for (j = 3; j<= 6; j++){strcpy (B[b][j] , assign[4][b-5][j-2]);}}
		for (int c=11; c<15; c++){for (j = 3; j<= 6; j++){strcpy (B[c][j] , assign[5][c-10][j-2]);}}
		for (int d=16; d<20; d++){for (j = 3; j<= 6; j++){strcpy (B[d][j] , assign[6][d-15][j-2]);}}
		for (int e=21; e<25; e++){for (j = 3; j<= 6; j++){strcpy (B[e][j] , assign[7][e-20][j-2]);}}
		for (int f=26; f<30; f++){for (j = 3; j<= 6; j++){strcpy (B[f][j] , assign[8][f-25][j-2]);}}
		for (int g=31; g<35; g++){for (j = 3; j<= 6; j++){strcpy (B[g][j] , assign[9][g-30][j-2]);}}
		for (int h=36; h<40; h++){for (j = 3; j<= 6; j++){strcpy (B[h][j] , assign[10][h-35][j-2]);}}
		for (int i=41; i<45; i++){for (j = 3; j<= 6; j++){strcpy (B[i][j] , assign[11][i-40][j-2]);}}
		for (int k=46; k<50; k++){for (j = 3; j<= 6; j++){strcpy (B[k][j] , assign[12][k-45][j-2]);}}
		for (int l=51; l<55; l++){for (j = 3; j<= 6; j++){strcpy (B[l][j] , assign[13][l-50][j-2]);}}
		for (int m=56; m<60; m++){for (j = 3; j<= 6; j++){strcpy (B[m][j] , assign[14][m-55][j-2]);}}
		for (int n=61; n<65; n++){for (j = 3; j<= 6; j++){strcpy (B[n][j] , assign[15][n-60][j-2]);}}
		x=999; return ;

	}

}

}


void rule_checker(char***A){

	int i,j;
	char nama[30];
	arr baca [100];
	int baris,count;


	FILE *fout;
	printf ("Masukkan File DRC (dalam format .txt):");
	scanf ("%s" ,nama);
	fout = fopen ((strcat(nama, ".txt")) , "r");

	i=1;


	while (!feof(fout)){
		fscanf(fout, "%s" , baca[i].Minggu);
		fscanf (fout, "%s", baca[i].Hari);
		i++;

}
baris = i-1;
i=1;
j=1;

count = 0;
	while (i<=66){
        if(strcmp (A[i][1], baca[j].Minggu) == 0){
            if(strcmp(A[i][2], baca[j].Hari) == 0){
               if((strcmp(A[i][3], "         ") == 0) && (strcmp(A[i][4], "         ") == 0) && (strcmp(A[i][5], "         ") == 0) && (strcmp(A[i][6], "         ")) == 0){
                  count++;
                  }
            j++;
        	}
        }
        i++;
	}
	printf ("%d / %d Rule is checked\n" , count, baris);
	fclose(fout);
}

void assign_automatic(char ***B){
//***********************************************************//
// [ Source Code ]
//
// Institution : Institut Teknologi Bandung
// Name : <Ferdinan Yapin>
// Dependency : stdio.h, mode.h
//
// Description:
// Please only write 64 characters maximum. If you write
// more than 64, please write it on the next line. Thanks!
//
// Status:
// 1. <Ferdinan Yapin> - <13217002> : Create the file
//***********************************************************//
	char assign[17][5][4][11];
    int i,j,k;
		for (int x=1; x<=16; x++){
			for (int y=1; y<=5; y++){
				for (int z=1; z<=4; z++){
					strcpy (assign[x][y][z] , "         ");
				}		
			}
		}    
    j=3;
    while (j<=15){
            
        if (j<=7){
            strcpy(assign[j][1][1],"A,I      ");
            strcpy(assign[j][1][2],"C,E      ");
            strcpy(assign[j][2][1],"A,D      ");
            strcpy(assign[j][2][2],"B,E      ");
            strcpy(assign[j][3][1],"F,G      ");
            strcpy(assign[j][3][2],"B,E      ");
        } else
        if ((j>7)&&(j<9)){
            strcpy(assign [j][2][3],"G,I      ");
            strcpy(assign [j][2][3],"K,N      ");
        }else
        if (j>=9){
            strcpy(assign[j][4][1],"J,L      ");
            strcpy(assign[j][4][2],"E,I      ");
            strcpy(assign[j][1][4],"L,M      ");
            strcpy(assign[j][5][1],"L,M      ");
            strcpy(assign[j][5][2],"H,N      ");
            strcpy(assign[j][5][4],"E,I      ");
            strcpy(assign[j][3][4],"H,K      ");
        }
        j++;
    }
		for (int a=1; a<5; a++){for (j = 3; j<= 6; j++){strcpy (B[a][j] , assign[3][a][j-2]);}}
		for (int b=6; b<10; b++){for (j = 3; j<= 6; j++){strcpy (B[b][j] , assign[4][b-5][j-2]);}}
		for (int c=11; c<15; c++){for (j = 3; j<= 6; j++){strcpy (B[c][j] , assign[5][c-10][j-2]);}}
		for (int d=16; d<20; d++){for (j = 3; j<= 6; j++){strcpy (B[d][j] , assign[6][d-15][j-2]);}}
		for (int e=21; e<25; e++){for (j = 3; j<= 6; j++){strcpy (B[e][j] , assign[7][e-20][j-2]);}}
		for (int f=26; f<30; f++){for (j = 3; j<= 6; j++){strcpy (B[f][j] , assign[8][f-25][j-2]);}}
		for (int g=31; g<35; g++){for (j = 3; j<= 6; j++){strcpy (B[g][j] , assign[9][g-30][j-2]);}}
		for (int h=36; h<40; h++){for (j = 3; j<= 6; j++){strcpy (B[h][j] , assign[10][h-35][j-2]);}}
		for (int i=41; i<45; i++){for (j = 3; j<= 6; j++){strcpy (B[i][j] , assign[11][i-40][j-2]);}}
		for (int k=46; k<50; k++){for (j = 3; j<= 6; j++){strcpy (B[k][j] , assign[12][k-45][j-2]);}}
		for (int l=51; l<55; l++){for (j = 3; j<= 6; j++){strcpy (B[l][j] , assign[13][l-50][j-2]);}}
		for (int m=56; m<60; m++){for (j = 3; j<= 6; j++){strcpy (B[m][j] , assign[14][m-55][j-2]);}}
		for (int n=61; n<65; n++){for (j = 3; j<= 6; j++){strcpy (B[n][j] , assign[15][n-60][j-2]);}}
		return;


}

void schedule_automatic(char ***A){
//***********************************************************//
// [ Source Code ]
//
// Institution : Institut Teknologi Bandung
// Name : <Ferdinan Yapin>
// Dependency : stdio.h, mode.h
//
// Description:
// Please only write 64 characters maximum. If you write
// more than 64, please write it on the next line. Thanks!
//
// Status:
// 1. <Ferdinan Yapin> - <13217002> : Create the file
//***********************************************************//
	char schedule[17][5][4][11];
	int i,j,k;
	for (int x=1; x<=16; x++){
		for (int y=1; y<=5; y++){
			for (int z=1; z<=4; z++){
				strcpy (schedule[x][y][z] , "         ");
			}
		}
	}
	j =3;
	while (j<=15){
        if (j<=7){
            strcpy(schedule[j][1][1],"EL2205-A1");
            strcpy(schedule[j][1][2],"EL2205-A2");
            strcpy(schedule[j][2][1],"EL2205-B1");
            strcpy(schedule[j][2][2],"EL2205-B2");
            strcpy(schedule[j][3][1],"EL2205-C1");
            strcpy(schedule[j][3][2],"EL2205-C2");
            strcpy(schedule [j][2][3],"EB2200-A ");
            strcpy(schedule [j][2][3],"EB2200-B ");
        } else
        if ((j>7)&&(j<9)){
            strcpy(schedule [j][2][3],"EB2200-A ");
            strcpy(schedule [j][2][3],"EB2200-B ");
        } else
        if (j>=9){
            strcpy(schedule[j][4][1],"EL2208-A1");
            strcpy(schedule[j][4][2],"EL2208-A2");
            strcpy(schedule[j][1][4],"EL2208-A3");
            strcpy(schedule[j][5][1],"EL2208-B1");
            strcpy(schedule[j][5][2],"EL2208-B2");
            strcpy(schedule[j][5][4],"EL2208-B3");
            strcpy(schedule[j][3][4],"EL2208-C ");
        }
		j++;
	}
 		for (int a=1; a<5; a++){for (j = 3; j<= 6; j++){strcpy (A[a][j] , schedule[3][a][j-2]);}}
		for (int b=6; b<10; b++){for (j = 3; j<= 6; j++){strcpy (A[b][j] , schedule[4][b-5][j-2]);}}
		for (int c=11; c<15; c++){for (j = 3; j<= 6; j++){strcpy (A[c][j] , schedule[5][c-10][j-2]);}}
		for (int d=16; d<20; d++){for (j = 3; j<= 6; j++){strcpy (A[d][j] , schedule[6][d-15][j-2]);}}
		for (int e=21; e<25; e++){for (j = 3; j<= 6; j++){strcpy (A[e][j] , schedule[7][e-20][j-2]);}}
		for (int f=26; f<30; f++){for (j = 3; j<= 6; j++){strcpy (A[f][j] , schedule[8][f-25][j-2]);}}
		for (int g=31; g<35; g++){for (j = 3; j<= 6; j++){strcpy (A[g][j] , schedule[9][g-30][j-2]);}}
		for (int h=36; h<40; h++){for (j = 3; j<= 6; j++){strcpy (A[h][j] , schedule[10][h-35][j-2]);}}
		for (int i=41; i<45; i++){for (j = 3; j<= 6; j++){strcpy (A[i][j] , schedule[11][i-40][j-2]);}}
		for (int k=46; k<50; k++){for (j = 3; j<= 6; j++){strcpy (A[k][j] , schedule[12][k-45][j-2]);}}
		for (int l=51; l<55; l++){for (j = 3; j<= 6; j++){strcpy (A[l][j] , schedule[13][l-50][j-2]);}}
		for (int m=56; m<60; m++){for (j = 3; j<= 6; j++){strcpy (A[m][j] , schedule[14][m-55][j-2]);}}
		for (int n=61; n<65; n++){for (j = 3; j<= 6; j++){strcpy (A[n][j] , schedule[15][n-60][j-2]);}}
			return;
}
