#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>





/*
 Author: Hadi (erozx)









================================================================================================================================================================================================================
.																				Void GotoXY

-> Berfungsi untuk mengatur/mengubah posisi/kordinat suatu teks pada tampilan output (fitur yg terdapat pada windows.h)	*/

void gotoxy(int x, int y){
	COORD xy;
	xy.X=x;
	xy.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),xy);
}
	
//================================================================================================================================================================================================================

void hline(int length){
	for(int r=0; r < length; r++){
	printf("%c", 196);
	}
}

//================================================================================================================================================================================================================





/*
================================================================================================================================================================================================================
.																				Void Color

->Berfungsi untuk mengubah warna teks beserta background pada tampilan output (fitur yg terdapat pada windows.h)	*/

void color(int color)
{	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color); 
}

//================================================================================================================================================================================================================





/*
================================================================================================================================================================================================================
.																				Void

-> Kumpulan Void yg ada dibawah Int main pada program	*/

void title1();
void title2();

void game1();
void game2();

//================================================================================================================================================================================================================





/*
================================================================================================================================================================================================================
.																				Int Main
*/

int main(void)
{
	title1();
	
//=============== MENU ===================//

//Type Data dan Variabel yg berfungsi untuk menjalankan sistem menu pada program

	int set[] = {8,8,8}; //Untuk memberikan ID warna pada teks yg sudah di tandai [{8,8,8,8} ID warna untuk 4 pilihan menu yg berbeda -> default color (grey)]
	int counter = 0; //Untuk menghitung/menetukan pilihan yg dipilih
	char p_select; //Untuk memilih menu menggunakan inputan dari user (keyboard) dengan menggunakan _getch()
	
	char h=179;
	
//Perulangan yg berfungsi untuk terus mengulang menu sampai menu tersebut dipilih [jika menu belum dipilih (select) maka akan terus mengulang tanpa batas/infinity]
	for(;;)
		{
			
//Tampilan pada menu
		if(counter == 0)
			{
				system("cls");
				title2();
				set[10] = 10;
				set[0] = 12;
				
				color(set[10]);
				gotoxy(28,13); printf("%c",218); hline(22); printf("%c",191); 
				gotoxy(28,14); printf("%c",h); gotoxy(51,14); printf("%c",h);
				gotoxy(28,15); printf("%c",195); hline(22); printf("%c",180);
				gotoxy(28,16); printf("%c",h); gotoxy(51,16); printf("%c",h);
				gotoxy(28,17); printf("%c",h); gotoxy(51,17); printf("%c",h);
				gotoxy(28,18); printf("%c",h); gotoxy(51,18); printf("%c",h);
				gotoxy(28,19); printf("%c",192); hline(22); printf("%c",217); 
				
				color(14);
				gotoxy(38,14); printf("MENU");
				gotoxy(32,16);
				printf("%c",175);
				
				color(set[0]);
				gotoxy(34,16);
	    		printf("Find The Number");
	    		
	    		color(set[1]);
	    		gotoxy(33,17);
	    		printf("Arrow & Coin");
	    		
	    		color(set[2]);
	    		gotoxy(33,18);
	    		printf("Exit");
			}
			
		if(counter == 1)
			{
				system("cls");
				title2();
				set[10] = 10;
				set[1] = 12;
				
				color(set[10]);
				gotoxy(28,13); printf("%c",218); hline(22); printf("%c",191); 
				gotoxy(28,14); printf("%c",h); gotoxy(51,14); printf("%c",h);
				gotoxy(28,15); printf("%c",195); hline(22); printf("%c",180);
				gotoxy(28,16); printf("%c",h); gotoxy(51,16); printf("%c",h);
				gotoxy(28,17); printf("%c",h); gotoxy(51,17); printf("%c",h);
				gotoxy(28,18); printf("%c",h); gotoxy(51,18); printf("%c",h);
				gotoxy(28,19); printf("%c",192); hline(22); printf("%c",217); 
				
				color(14);
				gotoxy(38,14); printf("MENU");
				gotoxy(32,17);
				printf("%c",175);
				
				color(set[0]);
				gotoxy(33,16);
	    		printf("Find The Number");
	    		
	    		color(set[1]);
	    		gotoxy(34,17);
	    		printf("Arrow & Coin");
	    		
	    		color(set[2]);
	    		gotoxy(33,18);
	    		printf("Exit");
			}
			
		if(counter == 2)
			{
				system("cls");
				title2();
				set[10] = 10;
				set[2] = 12;
				
				color(set[10]);
				gotoxy(28,13); printf("%c",218); hline(22); printf("%c",191); 
				gotoxy(28,14); printf("%c",h); gotoxy(51,14); printf("%c",h);
				gotoxy(28,15); printf("%c",195); hline(22); printf("%c",180);
				gotoxy(28,16); printf("%c",h); gotoxy(51,16); printf("%c",h);
				gotoxy(28,17); printf("%c",h); gotoxy(51,17); printf("%c",h);
				gotoxy(28,18); printf("%c",h); gotoxy(51,18); printf("%c",h);
				gotoxy(28,19); printf("%c",192); hline(22); printf("%c",217); 
				
				color(14);
				gotoxy(38,14); printf("MENU");
				gotoxy(32,18);
				printf("%c",175);
				
				color(set[0]);
				gotoxy(33,16);
	    		printf("Find The Number");
	    		
	    		
	    		color(set[1]);
	    		gotoxy(33,17);
	    		printf("Arrow & Coin");
	    		
	    		color(set[2]);
	    		gotoxy(34,18);
	    		printf("Exit");
			}
			
			
//p_select = _getch() berfungsi sebagai pemilih menu
	p_select = _getch();
	        
		if(p_select == 72 && (counter >= 1 && counter <= 2))	//Nomer berjumlah 72 adalah nomer untuk arrow atas pada keyboard
	       	{
	        	counter--;
			}
		
		if(p_select == 80 && (counter >= 0 && counter <= 1))	//Nomer berjumlah 80 adalah nomer untuk arrow bawah pada keyboard
	       	{
	        	counter++;
			}
		
		if(p_select == '\r')	//char [\r] adalah return/enter pada keyboard
			{
				
//Jika counter = 0 (datanya tergantung dari menu apa yg dipilih) terus menekan enter maka program yg ada pada menu yg dipilih tersebut akan terbuka
			if(counter == 0)
				{
					game1();
				}
					
			if(counter == 1)
				{
					game2();
				}
					
			if(counter == 2)
				{
					system("cls");
					title2();
					color(7);
					gotoxy(30,14);
					printf("Thanks For Playing ^_^");
					color(0);
					gotoxy(0,15);
					printf(" ");
					exit(0);
				}
			}
	set[0] = 8;
	set[1] = 8;
	set[2] = 8;
	}
return 0;
}

//================================================================================================================================================================================================================





/*
================================================================================================================================================================================================================
.																				Void Title

-> Void yg berfungsi untuk mempercantik tampilan output yg berupa judul program	*/

void title1()
{

		color(9);
		gotoxy(30,1);  printf(" _______________");
		gotoxy(30,2);  printf("/   _________   | ");
		gotoxy(30,3);  printf("|  /   ___   |  |");
		gotoxy(30,4);  printf("|  |  /   |__|  |");
		gotoxy(30,5);  printf("|  |  |         |");
		gotoxy(30,6);  printf("|  |  |         |");
		gotoxy(30,7);  printf("|  |  |    __   |");
		gotoxy(30,8);  printf("|  |  |___/  |  |");
		gotoxy(30,9);  printf("|  |________/   | ");
		gotoxy(30,10); printf("|_______________/");
		
		color(11);
		gotoxy(18,12);  printf(" ______   ______   _______   _____   ____");
		gotoxy(18,13);  printf("/  ____/ /  __  | /       | /  ___/ /  __|");
		gotoxy(18,14);  printf("| |  __  | |__| | | | | | | | |___  | |__");
		gotoxy(18,15);  printf("| | |_ | |  __  | | |_|_| | |  ___/ |__  |");
		gotoxy(18,16);  printf("| |__/ | | |  | | | |   | | | |___   __| |");
		gotoxy(18,17);  printf("|______/ |_|  |_/ |_|   |_/ |_____/ |____/");
		
		color(8);
		gotoxy(28,20); printf("Press Any Key To Play!"); _getch();
		system("cls");
}


void title2()
{
		color(9);
		gotoxy(10,1);  printf(" _______________");
		gotoxy(10,2);  printf("/   _________   | ");
		gotoxy(10,3);  printf("|  /   ___   |  |");
		gotoxy(10,4);  printf("|  |  /   |__|  |");
		gotoxy(10,5);  printf("|  |  |         |");
		gotoxy(10,6);  printf("|  |  |         |");
		gotoxy(10,7);  printf("|  |  |    __   |");
		gotoxy(10,8);  printf("|  |  |___/  |  |");
		gotoxy(10,9);  printf("|  |________/   |");
		gotoxy(10,10); printf("|_______________/");
		
		color(11);
		gotoxy(29,3);  printf(" ______   ______   _______   _____   ____");
		gotoxy(29,4);  printf("/  ____/ /  __  | /       | /  ___/ /  __|");
		gotoxy(29,5);  printf("| |  __  | |__| | | | | | | | |___  | |__");
		gotoxy(29,6);  printf("| | |_ | |  __  | | |_|_| | |  ___/ |__  |");
		gotoxy(29,7);  printf("| |__/ | | |  | | | |   | | | |___   __| |");
		gotoxy(29,8);  printf("|______/ |_|  |_/ |_|   |_/ |_____/ |____/");
}

//================================================================================================================================================================================================================





/*
================================================================================================================================================================================================================
.																				Data Game 1

-> Tempat untuk menyimpan DATA berupa Type Data dan Variabel dari Game 1*/

//typedef struct name & answer
typedef struct{
	
	char plyr_nm[50]; //berfungsi sebagai penampung nama pemain/player
	char plyr_ans[10]; //berfungsi sebagai penampung jawaban pemain berupa Type Data STRING yg nanti di convert ke Type Data INTEGER (plyr_a)
	int plyr_a;
		
}data_game1;

//================================================================================================================================================================================================================





/*
=================================================================================================================================================================================================================
.																				Game 1
-> Program Game ke 1 [Find The Number]	*/

void game1()
{
	system("cls");
	
	char try_again;
	int menu;
	
	int num, no1, no2, no3, no4, no5, no6, no7, no8, no9;		
	int lwr = 1, uppr = 6;
	
	int gm1, gm1_sum, nline = 4, sline;
	
	data_game1 data[50];
		
		
	//srand Berfungsi untuk membuat data nomer secara acak
	srand(time(NULL));
	num = (rand() % ( uppr - lwr + 1)) + lwr;
	
	no1 = (rand() % ( uppr - lwr + 1)) + lwr;
	no2 = (rand() % ( uppr - lwr + 1)) + lwr;
	no3 = (rand() % ( uppr - lwr + 1)) + lwr;
	no4 = (rand() % ( uppr - lwr + 1)) + lwr;
	no5 = (rand() % ( uppr - lwr + 1)) + lwr;
	no6 = (rand() % ( uppr - lwr + 1)) + lwr;
	no7 = (rand() % ( uppr - lwr + 1)) + lwr;
	no8 = (rand() % ( uppr - lwr + 1)) + lwr;
	no9 = (rand() % ( uppr - lwr + 1)) + lwr; 
	//==============================================		
				
		player_game1:
		color(10);
		system("cls");
		gotoxy(4, 1); printf("%c", 218); hline(69); printf("%c", 191);
		gotoxy(74,2); printf("%c", 179);
		gotoxy(4,3); printf("%c",195); hline(69); printf("%c",180);
		gotoxy(4,23); printf("%c",192); hline(69); printf("%c",217);
		
	for(sline = 4; sline <= 22; sline++)
		{
			gotoxy(4,sline); printf("%c",179);
			gotoxy(74,sline); printf("%c",179);
		}
		
			color(14);
			gotoxy(4,2); printf("%c", 179); gotoxy(25,2); printf("Jumlah Player ["); color(12); printf("88 Back"); color(14); printf("]: "); 
			color(12);
			scanf("%d", &gm1_sum);
		
	if(gm1_sum == 88)
		{
			return;
		}
	
	if(gm1_sum > 10)
		{
			color(14);
			gotoxy(5,5); printf("Max Player Adalah ["); color(12); printf("10 Orang"); color(14); printf("]");
			getch();
			goto player_game1;
		}
		
			getchar();
		
	//Perulangan untuk menginput data nama pemain
	for(gm1 = 1; gm1 <= gm1_sum; gm1++)
		{
			color(14);
			gotoxy(5,nline); printf("Player "); color(12); printf("%d", gm1); color(14); printf(": ");
			nline = nline + 2;
			color(12);
			fgets(data[gm1].plyr_nm, 50, stdin);
		}
	//===========================================
	
		system("cls");
		color(10);
		
		gotoxy(4,1); printf("%c", 218); hline(69); printf("%c", 191);
		gotoxy(4,2); printf("%c", 179); gotoxy(74,2); printf("%c", 179);
		gotoxy(4,3); printf("%c",195); hline(69); printf("%c",180);
		gotoxy(4,23); printf("%c",192); hline(69); printf("%c",217);
		gotoxy(5,12); hline(69); gotoxy(65,12); printf("%c", 194);
		gotoxy(65,23); printf("%c", 193);
		
	for(sline = 4; sline <= 22; sline++)
		{
			gotoxy(4,sline); printf("%c",179);
			gotoxy(74,sline); printf("%c",179);
			
		if(sline == 12)
			{
				gotoxy(74,sline); printf("%c",180);
			}
		if(sline == 12)
			{
				gotoxy(4,sline); printf("%c",195);
			}
		if(sline > 12)
			{
				gotoxy(65,sline); printf("%c",179);
			}
		}
			
		color(14);
		gotoxy(10,2);
		printf("Cari nomor di kotak di bawah ini sesuai dengan nomor berikut");
		color(12);
		gotoxy(35,5);
		printf("[ -> %d <- ]", num);
		color(15);
		gotoxy(35,7);
		printf("1    2    3");
		gotoxy(35,8);
		printf("4    5    6");
		gotoxy(35,9);
		printf("7    8    9");
		
		_getch();
		
		color(15);
		gotoxy(35,7);
		printf("#    #    #");
		gotoxy(35,8);
		printf("#    #    #");
		gotoxy(35,9);
		printf("#    #    #");
			
		color(14);
		gotoxy(15,11); printf("Pilih kolom no 1 - 9 dari kolom yg ada di atas!\n\n");
		
	//Perulangan untuk menginput jawaban dari pemain
	for(gm1 = 1; gm1 <= gm1_sum; gm1++)
		{
			color(12);
			gotoxy(6,gm1+12);
			printf("%s", data[gm1].plyr_nm);
			gotoxy(69,gm1+12); fgets(data[gm1].plyr_ans, 10, stdin);
		}
	//===============================================
	
		system("cls");
		color(10);
		
		gotoxy(4,1); printf("%c", 218); hline(69); printf("%c", 191);
		gotoxy(4,2); printf("%c", 179); gotoxy(74,2); printf("%c", 179);
		gotoxy(4,3); printf("%c",195); hline(69); printf("%c",180);
		gotoxy(4,23); printf("%c",192); hline(69); printf("%c",217);
		gotoxy(5,12); hline(69); gotoxy(65,12); printf("%c", 194);
		gotoxy(65,23); printf("%c", 193);
		
	for(sline = 4; sline <= 22; sline++)
		{
			gotoxy(4,sline); printf("%c",179);
			gotoxy(74,sline); printf("%c",179);
			
			if(sline == 12)
				{
					gotoxy(74,sline); printf("%c",180);
				}
				
			if(sline == 12)
				{
					gotoxy(4,sline); printf("%c",195);
				}
				
			if(sline > 12)
				{
					gotoxy(65,sline); printf("%c",179);
				}
		}
		
		color(14);
		gotoxy(10,2);
		printf("Cari nomor di kotak di bawah ini sesuai dengan nomor berikut");
		color(12);
		gotoxy(35,5);
		printf("[ -> %d <- ]", num);
		color(15);
		gotoxy(35,7);
		printf("%d    %d    %d",no1,no2,no3);
		gotoxy(35,8);
		printf("%d    %d    %d",no4,no5,no6);
		gotoxy(35,9);
		printf("%d    %d    %d",no7,no8,no9);
		
	for(gm1 = 1; gm1 <= gm1_sum; gm1++)
		{
		data[gm1].plyr_a = atoi(data[gm1].plyr_ans); //data jawaban berupa string yg sudah di masukkan tadi kemudian di convert ke integer menggunakan (atoi) agar bisa terbaca oleh SWITCH CASE
		
			switch(data[gm1].plyr_a){
				case 1:
					if(no1 == num){
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(11);
						gotoxy(68,gm1+12); printf("Win!");
					}else{
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(12);
						gotoxy(68,gm1+12); printf("Lose!");
					}break;
				
				case 2:
					if(no2 == num){
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(11);
						gotoxy(68,gm1+12); printf("Win!");
					}else{
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(12);
						gotoxy(68,gm1+12); printf("Lose!");
					}break;
					
				case 3:
					if(no3 == num){
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(11);
						gotoxy(68,gm1+12); printf("Win!");
					}else{
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(12);
						gotoxy(68,gm1+12); printf("Lose!");
					}break;
					
				case 4:
					if(no4 == num){
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(11);
						gotoxy(68,gm1+12); printf("Win!");
					}else{
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(12);
						gotoxy(68,gm1+12); printf("Lose!");
					}break;
				
				case 5:
					if(no5 == num){
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(11);
						gotoxy(68,gm1+12); printf("Win!");
					}else{
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(12);
						gotoxy(68,gm1+12); printf("Lose!");
					}break;
				
				case 6:
					if(no6 == num){
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(11);
						gotoxy(68,gm1+12); printf("Win!");
					}else{
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(12);
						gotoxy(68,gm1+12); printf("Lose!");
					}break;
				
				case 7:
					if(no7 == num){
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(11);
						gotoxy(68,gm1+12); printf("Win!");
					}else{
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(12);
						gotoxy(68,gm1+12); printf("Lose!");
					}break;
				
				case 8:
					if(no8 == num){
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(11);
						gotoxy(68,gm1+12); printf("Win!");
					}else{
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(12);
						gotoxy(68,gm1+12); printf("Lose!");
					}break;
				
				case 9:
					if(no9 == num){
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(11);
						gotoxy(68,gm1+12); printf("Win!");
					}else{
						color(14);
						gotoxy(6,gm1+12);
						printf("%s", data[gm1].plyr_nm);
						color(15);
						gotoxy(52,gm1+12); printf("[Kolom No %d]",data[gm1].plyr_a);
						color(12);
						gotoxy(68,gm1+12); printf("Lose!");
					}break;
			}
		}
	
		_getch();
		system("cls");
		color(10);
		gotoxy(28,10); printf("%c",218); hline(22); printf("%c",191); 
		gotoxy(28,11); printf("%c",179); gotoxy(51,11); printf("%c",179);
		gotoxy(28,12); printf("%c",195); hline(22); printf("%c",180);
		gotoxy(28,13); printf("%c",179); gotoxy(51,13); printf("%c",179);
		gotoxy(28,14); printf("%c",192); hline(22); printf("%c",217); 
		
		color(14); gotoxy(33,11); printf("Try Again? y/n"); 
		gotoxy(40,13); 
		scanf("%c", &try_again);
		
	if(try_again == 'y'){
		nline = 4;
		goto player_game1;
	}else{
		return;
	}
}
//================================================================================================================================================================================================================





/*
=================================================================================================================================================================================================================
.																				Game 2

-> Program Game ke 2 [Arrow & Coin]	*/

void game2(){
	
//Type Data & Variabel
	char map[20][75]; //Variabel untuk mencetak map/tempat gamenya
		
	char name[50];
	char end_bug;
	
	char player = (char)16;
	char coin = '0';
	char enemy1 = 'x', enemy2 = 'x', enemy3 = 'x', enemy4 = 'x', enemy5 = 'x';
	
	char move, dash = 3; //Variabel yg berfungsi untuk menggerakan player
	
	//Variabel untuk mengatur posisi player, coin, musuh dsb
	int xcoin, ycoin;
	int en1x, en2x, en3x, en4x, en5x, en1y, en2y, en3y, en4y, en5y;	
	int yp = 7, xp = 10;
	int hm = 17, wm = 75; //max X = 75
	int y, x, dltd, dltu;
		
	int score = 0, times = 500, lives = 3, counter = 0; //Variabel yg berfungsi untuk mengatur data dalam game seperti waktu, score dsb

	//Berfungsi untuk membuat data berupa nomer acak untuk mengatur posisi dari coin dan musuh agar berada di tempat acak
		xcoin = (rand() % ( 70 - 5 + 1)) + 5;
		ycoin = (rand() % ( 15 - 3 + 1)) + 3;
			
		en1x = (rand() % ( 70 - 5 + 1)) + 5;
		en1y = (rand() % ( 15 -  + 3 + 1)) + 3;
		en2x = (rand() % ( 70 - 5 + 1)) + 5;
		en2y = (rand() % ( 15 - 31)) + 3;
		en3x = (rand() % ( 70 - 5 + 1)) + 5;
		en3y = (rand() % ( 15 - 3 + 1)) + 3;
		en4x = (rand() % ( 70 - 5 + 1)) + 5;
		en4y = (rand() % ( 15 - 3 + 1)) + 3;
		en5x = (rand() % ( 70 - 5 + 1)) + 5;
		en5y = (rand() % ( 15 - 3 + 1)) + 3;	
	//===================================================================================================================
		
			system("cls");
			color(10);
			gotoxy(28,10); printf("%c",218); hline(22); printf("%c",191); 
			gotoxy(28,11); printf("%c",179); gotoxy(51,11); printf("%c",179);
			gotoxy(28,12); printf("%c",195); hline(22); printf("%c",180);
			gotoxy(28,13); printf("%c",179); gotoxy(51,13); printf("%c",179);
			gotoxy(28,14); printf("%c",192); hline(22); printf("%c",217);
			
			getchar();
			
			color(14); 
			gotoxy(29,11); printf("Name : ");
			gotoxy(29,13); printf("Times: ");
			color(12); 
			gotoxy(36,11); fgets(name, 50, stdin); 
			gotoxy(36,13); scanf("%d", &times); 	
			
	//if yg berfungsi untuk mengatur batas waktu pada program
	if(times > 500){
		times = 500;
	}
	//========================================================
	
do{
			color(10);
			system("cls");

	for(y=0; y < hm; y++){
		for(x=0; x < wm; x++){
			if(y ==  2 || y == hm-1){
				map[y][x] = (char)196;
			}else if(x == 4 || x == wm-1){
				map[y][x] = (char)179;
			}else {
				map[y][x] = ' ';
			}}
		
			map[2][4] = (char)218;
			map[2][wm-1] = (char)191;
			map[hm-1][4] = (char)192;
			map[hm-1][wm-1] = (char)217;
		
	for(dltu=0; dltu < 2; dltu++){
		for(int dltup=0; dltup < wm; dltup++){
				map[dltu][dltup] = ' ';
			}}
			
	for(dltd=0; dltd < 4; dltd++){
			map[2][dltd] = ' ';
			map[hm-1][dltd] = ' ';
			}}
			
			map[yp][xp] = player;
			map[ycoin][xcoin] = coin;
			
			map[en1y][en1x] = enemy1;
			map[en2y][en2x] = enemy2;
			map[en3y][en3x] = enemy3;
			map[en4y][en4x] = enemy4;
			map[en5y][en5x] = enemy5;


	for(y=0; y < hm; y++){
		for(x=0; x < wm; x++){
			printf("%c", map[y][x]);
			}
			printf("\n");
			}
		
		//=========================================================================
			gotoxy(4, hm + 1); printf("%c", 218); hline(69); printf("%c", 191);	
			gotoxy(4, hm + 3); printf("%c", 195); hline(69); printf("%c", 180);
			gotoxy(4, hm + 5); printf("%c", 192); hline(69); printf("%c", 217);
			gotoxy(4,hm + 2); printf("%c",179);
			gotoxy(4,hm + 4); printf("%c",179);
			gotoxy(74,hm + 2); printf("%c",179);
			gotoxy(74,hm + 4); printf("%c",179);
				
			color(14);
			gotoxy(10, hm + 2); printf("Times: %d", times);
			gotoxy(35, hm + 2); printf("Lives: %d", lives);
			gotoxy(60, hm + 2); printf("Scores: %d", score);
			gotoxy(10, hm + 4); printf("Player: %c",map[yp][xp] = player);	
			gotoxy(35, hm + 4); printf("Coin: 0");
			gotoxy(60, hm + 4); printf("Enemy: x");
			color(10);		
		
		//if yg berfungsi jika player sudah bergerak sebanyak 3 kali, maka musuh akan di tempatkan ulang secara acak
		if(counter==3){
			counter = 0;
			en1x = (rand() % ( 70 - 5 + 1)) + 5;
			en1y = (rand() % ( 15 - 3 + 1)) + 3;
			en2x = (rand() % ( 70 - 5 + 1)) + 5;
			en2y = (rand() % ( 15 - 3 + 1)) + 3;
			en3x = (rand() % ( 70 - 5 + 1)) + 5;
			en3y = (rand() % ( 15 - 3 + 1)) + 3;
			en4x = (rand() % ( 70 - 5 + 1)) + 5;
			en4y = (rand() % ( 15 - 3 + 1)) + 3;
			en5x = (rand() % ( 70 - 5 + 1)) + 5;
			en5y = (rand() % ( 15 - 3 + 1)) + 3;
			}
		//==========================================================================================================
		
		if(lives == 0){
			goto gameover;
			}
		
			move  = _getch();
		
	//switch case yg berfungsi untuk menggerakan player dengan menggunakan arrow pada keyboard [move = _getch()]
		switch(move){
/*	UP	*/	case 72:	
				player = (char)30;
				dash = 0;	
					if(yp-1 > 2){
						yp--;
						times--;
						counter++;
						}		
						break;	
/* DOWN */	case 80:
				player = (char)31 ;
				dash = 1;
					if(yp+1 < hm-1){
						yp++;
						times--;
						counter++;
						}		
						break;	
/* LEFT */	case 75:
				player = (char)17;
				dash = 2;
					if(xp-1 > 4){
						xp--;
						times--;
						counter++;
						}		
						break;
/* RIGHT */	case 77:
				player = (char)16;
				dash = 3;
					if(xp+1 < wm-1){
						xp++;
						times--;
						counter++;
						}		
						break;	

/* SPACE */	case 32:
				if(dash == 0){
					if(yp-3 > 2){
						yp = yp - 3;
						times--;
						counter++;
						}}
						
				else if(dash == 1){
					if(yp+3 < hm-1){
						yp = yp + 3;
						times--;
						counter++;
						}}
						
				else if(dash == 2){
					if(xp-3 > 4){
						xp = xp - 3;
						times--;
						counter++;
						}} 
						
				else if(dash == 3){
					if(xp+3 < wm-1){
						xp = xp + 3;
						times--;
						counter++;
						}}
						break;
						
			case 27: //berfungsi untuk menghentikan game jika tombol [Esc] ditekan
				goto gameover;
						}
		
		//if yg berfungsi jika posisi player sama dengan posisi coin, maka score akan bertambah dan kemudian posisi coin akan di tempatkan secara acak
		if(xp == xcoin && yp == ycoin){
			map[y][x] = player;
			score = score + 100;
			xcoin = (rand() % ( 70 - 5 + 1)) + 5;
			ycoin = (rand() % ( 15 - 3 + 1)) + 3;
			}
		
		//if yg berfungsi jika posisi player sama dengan posisi musuh, maka nyawa player akan berkurang dan kemudian posisi musuh akan di tempatkan secara acak
		if(xp == en1x && yp == en1y){
			map[y][x] = player;
			lives--;
			en1x = (rand() % ( 70 - 5 + 1)) + 5;
			en1y = (rand() % ( 15 - 3 + 1)) + 3;
			en2x = (rand() % ( 70 - 5 + 1)) + 5;
			en2y = (rand() % ( 15 - 3 + 1)) + 3;
			en3x = (rand() % ( 70 - 5 + 1)) + 5;
			en3y = (rand() % ( 15 - 3 + 1)) + 3;
			en4x = (rand() % ( 70 - 5 + 1)) + 5;
			en4y = (rand() % ( 15 - 3 + 1)) + 3;
			en5x = (rand() % ( 70 - 5 + 1)) + 5;
			en5y = (rand() % ( 15 - 3 + 1)) + 3;
			}
		
		if(xp == en2x && yp == en2y){
			map[y][x] = player;
			lives--;
			en1x = (rand() % ( 70 - 5 + 1)) + 5;
			en1y = (rand() % ( 15 - 3 + 1)) + 3;
			en2x = (rand() % ( 70 - 5 + 1)) + 5;
			en2y = (rand() % ( 15 - 3 + 1)) + 3;
			en3x = (rand() % ( 70 - 5 + 1)) + 5;
			en3y = (rand() % ( 15 - 3 + 1)) + 3;
			en4x = (rand() % ( 70 - 5 + 1)) + 5;
			en4y = (rand() % ( 15 - 3 + 1)) + 3;
			en5x = (rand() % ( 70 - 5 + 1)) + 5;
			en5y = (rand() % ( 15 - 3 + 1)) + 3;
			}
		
		if(xp == en3x && yp == en3y){
			map[y][x] = player;
			lives--;
			en1x = (rand() % ( 70 - 5 + 1)) + 5;
			en1y = (rand() % ( 15 - 3 + 1)) + 3;
			en2x = (rand() % ( 70 - 5 + 1)) + 5;
			en2y = (rand() % ( 15 - 3 + 1)) + 3;
			en3x = (rand() % ( 70 - 5 + 1)) + 5;
			en3y = (rand() % ( 15 - 3 + 1)) + 3;
			en4x = (rand() % ( 70 - 5 + 1)) + 5;
			en4y = (rand() % ( 15 - 3 + 1)) + 3;
			en5x = (rand() % ( 70 - 5 + 1)) + 5;
			en5y = (rand() % ( 15 - 3 + 1)) + 3;
			}
		
		if(xp == en4x && yp == en4y){
			map[y][x] = player;
			lives--;
			en1x = (rand() % ( 70 - 5 + 1)) + 5;
			en1y = (rand() % ( 15 - 3 + 1)) + 3;
			en2x = (rand() % ( 70 - 5 + 1)) + 5;
			en2y = (rand() % ( 15 - 3 + 1)) + 3;
			en3x = (rand() % ( 70 - 5 + 1)) + 5;
			en3y = (rand() % ( 15 - 3 + 1)) + 3;
			en4x = (rand() % ( 70 - 5 + 1)) + 5;
			en4y = (rand() % ( 15 - 3 + 1)) + 3;
			en5x = (rand() % ( 70 - 5 + 1)) + 5;
			en5y = (rand() % ( 15 - 3 + 1)) + 3;
			}
		
		if(xp == en5x && yp == en5y){
			map[y][x] = player;
			lives--;
			en1x = (rand() % ( 70 - 5 + 1)) + 5;
			en1y = (rand() % ( 15 - 3 + 1)) + 3;
			en2x = (rand() % ( 70 - 5 + 1)) + 5;
			en2y = (rand() % ( 15 - 3 + 1)) + 3;
			en3x = (rand() % ( 70 - 5 + 1)) + 5;
			en3y = (rand() % ( 15 - 3 + 1)) + 3;
			en4x = (rand() % ( 70 - 5 + 1)) + 5;
			en4y = (rand() % ( 15 - 3 + 1)) + 3;
			en5x = (rand() % ( 70 - 5 + 1)) + 5;
			en5y = (rand() % ( 15 - 3 + 1)) + 3;
			}
		//===============================================================================================================
			
}while(times > 0);


		gameover:
		for(;;){
			end_bug = _getch(); //variabel end_bug berfungsi agar user tidak bisa mengskip tampilan game over kecuali dengan menekan enter
			
			system("cls");
			color(10);
			gotoxy(20,10); printf("%c",218); hline(35); printf("%c",191); 
			gotoxy(20,11); printf("%c",179); gotoxy(56,11); printf("%c",179);
			gotoxy(20,12); printf("%c",195); hline(35); printf("%c",180);
			gotoxy(20,13); printf("%c",179); gotoxy(56,13); printf("%c",179);
			gotoxy(20,14); printf("%c",192); hline(35); printf("%c",217); 
			
			color(14); 
			gotoxy(34,11); printf("Game Over!");
			gotoxy(21,13); color(12); printf("%s", name); gotoxy(44,13); color(11); printf("Scores %d!", score);
			
			if(end_bug == '\r'){
				return;
			}
			}
}

//================================================================================================================================================================================================================

