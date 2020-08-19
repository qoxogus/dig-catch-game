#include<stdio.h>
#include<windows.h> 
#include<stdlib.h>  
#include<time.h>    //clock
#include<conio.h>   
#include<MMSystem.h>
#pragma comment(lib,"Winmm.lib")
#define getcoin_sound "C:\\Users\\user\\Downloads\\°ÔÀÓÄÚÀÎÈ¹µæ\\ÄÚÀÎÈ¹µæ4.wav"
#define wrong_sound "C:\\Users\\user\\Downloads\\sound_button_wrong.wav"
#define _CRT_SECURE_NO_WARNINGS


int cnt;
int score = 0;
char name[100];
int a1[3] = { 1,1,1 };
int a2[3] = { 2,2,2 };
int a3[3] = { 3,3,3 };
int a4[3] = { 4,4,4 };
int a5[3] = { 5,5,5 };
int a6[3] = { 6,6,6 };
int a7[3] = { 7,7,7 };
int a8[3] = { 8,8,8 };
int a9[3] = { 9,9,9 };
int i;
int RandomNumber;
int color = 6;
#define COMMAND_SIZE 256
clock_t st; clock_t end;
int Time = 0;
void Score_chart_Print() {
	int max = 0;
	int i = 0, step, temp, j;
	int scores[10];
	char ch;
	system("cls");
	printf("    ¡Ø ¡Ø ¡Ø ¡Ø ¡Ø Á¡¼öÇ¥ ¡Ø ¡Ø ¡Ø ¡Ø ¡Ø\n\n");
	FILE* fp;
	fp = fopen("C:\\FILE input output\\Rankingsystem.txt", "r");

	while (feof(fp) == 0) {
		ch = fgetc(fp);
		if (fp == EOF)break;
		putchar(ch);
	}
	fclose(fp);
}
void Score() {
	
	printf("Á¡¼öÇ¥¿¡ ÀÔ·ÂÇÒ ÀÌ¸§À» ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf_s("%s", name);
	FILE* fp;
	fp = fopen("C:\\FILE input output\\Rankingsystem.txt", "a+");
	fprintf(fp, "ÀÌ¸§ : %s\t\t\t | Á¡¼ö : %d\n", name, score);
	fclose(fp);
	printf("Á¡¼ö : %d ÀÌ¸§ : %s\n\n", score, name);
	printf("Á¡¼öÇ¥¿¡ ÀÔ·ÂÁß");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".\n\n");
	printf("Á¡¼öÇ¥¿¡ ÀÔ·Â ¿Ï·á!!\n");
	Sleep(1000);
	Score_chart_Print();
}

void Command_size() {
	char command[COMMAND_SIZE] = { '\0', };           // ÄÜ¼ÖÃ¢ »çÀÌÁî Á¶Á¤
	int lines = 50;
	int cols = 80;
	sprintf(command, "mode con: lines=%d cols=%d", lines, cols);
	system(command);
}
void Print_Map() {    //Ã³À½ µÎ´õÁö ·Î°í? Ãâ·Â
	int i;
	for (i = 0;i < 2;i++) {
		system("color 0d");
		PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢        ;::::::::;;;~,         ¦¢\n");
		printf("¦¢      ;~~~~~~~~~~~~;;~~,       ¦¢\n");
		printf("¦¢     ,;:~~~~~~~~~~;;~~~~,      ¦¢\n");
		printf("¦¢    ,::~~~~~~~~~~~~~;:~~~,     ¦¢\n");
		printf("¦¢    :~~~~:~~~~~~~~~::::!!!,    ¦¢\n");
		printf("¦¢    :~~~~:~~~~~~~~~::::,iii    ¦¢\n");
		printf("¦¢    ;~¦£¦¡¦¡¦¡¦¡¦¡¦¤~!!~ ¦£¦¡¦¡¦¡¦¡¦¡¦¤:i    ¦¢\n");
		printf("¦¢    :~¦¢  ¡Ú ¦§¦¡¦¡¦¡¦¡¦¡¦© ¡Ú  ¦¢:i    ¦¢\n");
		printf("¦¢    -:¦¦¦¡¦¡¦¡¦¡¦¡¦¥ ~~~~¦¦¦¡¦¡¦¡¦¡¦¡¦¥:i    ¦¢\n");
		printf("¦¢    *:::::::::;;;:::::::*~i    ¦¢\n");
		printf("¦¢    *:::::::!*!;::::::::::!    ¦¢\n");
		printf("¦¢    *::::!,     ~::::::::!!    ¦¢\n");
		printf("¦¢    !:::$         ;:::::::!    ¦¢\n");
		printf("¦¢    !:::           :::::::!    ¦¢\n");
		printf("¦¢    !:::*         -=::::::!    ¦¢\n");
		printf("¦¢    !;::::*      -=:;:;;::!    ¦¢\n");
		printf("¦¢    !;::::&~-~--~=;:::::::!    ¦¢\n");
		printf("¦¢ ~:;!##::::::::::::::;:::;!!## ¦¢\n");
		printf("¦¢                               ¦¢\n");
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
		Sleep(300);
		system("cls");
		system("color 0e");
		PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢        ;::::::::;;;~,         ¦¢\n");
		printf("¦¢      ;~~~~~~~~~~~~;;~~,       ¦¢\n");
		printf("¦¢     ,;:~~~~~~~~~~;;~~~~,      ¦¢\n");
		printf("¦¢    ,::~~~~~~~~~~~~~;:~~~,     ¦¢\n");
		printf("¦¢    :~~~~:~~~~~~~~~::::!!!,    ¦¢\n");
		printf("¦¢    :~~~~:~~~~~~~~~::::,iii    ¦¢\n");
		printf("¦¢    ;~¦£¦¡¦¡¦¡¦¡¦¡¦¤~!!~ ¦£¦¡¦¡¦¡¦¡¦¡¦¤:i    ¦¢\n");
		printf("¦¢    :~¦¢  ¡Ú ¦§¦¡¦¡¦¡¦¡¦¡¦© ¡Ú  ¦¢:i    ¦¢\n");
		printf("¦¢    -:¦¦¦¡¦¡¦¡¦¡¦¡¦¥ ~~~~¦¦¦¡¦¡¦¡¦¡¦¡¦¥:i    ¦¢\n");
		printf("¦¢    *:::::::::;;;:::::::*~i    ¦¢\n");
		printf("¦¢    *:::::::!*!;::::::::::!    ¦¢\n");
		printf("¦¢    *::::!,     ~::::::::!!    ¦¢\n");
		printf("¦¢    !:::$         ;:::::::!    ¦¢\n");
		printf("¦¢    !:::           :::::::!    ¦¢\n");
		printf("¦¢    !:::*         -=::::::!    ¦¢\n");
		printf("¦¢    !;::::*      -=:;:;;::!    ¦¢\n");
		printf("¦¢    !;::::&~-~--~=;:::::::!    ¦¢\n");
		printf("¦¢ ~:;!##::::::::::::::;:::;!!## ¦¢\n");
		printf("¦¢                               ¦¢\n");
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
		Sleep(300);
		system("cls");
		system("color 0c");
		PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢        ;::::::::;;;~,         ¦¢\n");
		printf("¦¢      ;~~~~~~~~~~~~;;~~,       ¦¢\n");
		printf("¦¢     ,;:~~~~~~~~~~;;~~~~,      ¦¢\n");
		printf("¦¢    ,::~~~~~~~~~~~~~;:~~~,     ¦¢\n");
		printf("¦¢    :~~~~:~~~~~~~~~::::!!!,    ¦¢\n");
		printf("¦¢    :~~~~:~~~~~~~~~::::,iii    ¦¢\n");
		printf("¦¢    ;~¦£¦¡¦¡¦¡¦¡¦¡¦¤~!!~ ¦£¦¡¦¡¦¡¦¡¦¡¦¤:i    ¦¢\n");
		printf("¦¢    :~¦¢  ¡Ú ¦§¦¡¦¡¦¡¦¡¦¡¦© ¡Ú  ¦¢:i    ¦¢\n");
		printf("¦¢    -:¦¦¦¡¦¡¦¡¦¡¦¡¦¥ ~~~~¦¦¦¡¦¡¦¡¦¡¦¡¦¥:i    ¦¢\n");
		printf("¦¢    *:::::::::;;;:::::::*~i    ¦¢\n");
		printf("¦¢    *:::::::!*!;::::::::::!    ¦¢\n");
		printf("¦¢    *::::!,     ~::::::::!!    ¦¢\n");
		printf("¦¢    !:::$         ;:::::::!    ¦¢\n");
		printf("¦¢    !:::           :::::::!    ¦¢\n");
		printf("¦¢    !:::*         -=::::::!    ¦¢\n");
		printf("¦¢    !;::::*      -=:;:;;::!    ¦¢\n");
		printf("¦¢    !;::::&~-~--~=;:::::::!    ¦¢\n");
		printf("¦¢ ~:;!##::::::::::::::;:::;!!## ¦¢\n");
		printf("¦¢                               ¦¢\n");
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
		Sleep(300);
		system("cls");
		system("color 0b");
		PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢        ;::::::::;;;~,         ¦¢\n");
		printf("¦¢      ;~~~~~~~~~~~~;;~~,       ¦¢\n");
		printf("¦¢     ,;:~~~~~~~~~~;;~~~~,      ¦¢\n");
		printf("¦¢    ,::~~~~~~~~~~~~~;:~~~,     ¦¢\n");
		printf("¦¢    :~~~~:~~~~~~~~~::::!!!,    ¦¢\n");
		printf("¦¢    :~~~~:~~~~~~~~~::::,iii    ¦¢\n");
		printf("¦¢    ;~¦£¦¡¦¡¦¡¦¡¦¡¦¤~!!~ ¦£¦¡¦¡¦¡¦¡¦¡¦¤:i    ¦¢\n");
		printf("¦¢    :~¦¢  ¡Ú ¦§¦¡¦¡¦¡¦¡¦¡¦© ¡Ú  ¦¢:i    ¦¢\n");
		printf("¦¢    -:¦¦¦¡¦¡¦¡¦¡¦¡¦¥ ~~~~¦¦¦¡¦¡¦¡¦¡¦¡¦¥:i    ¦¢\n");
		printf("¦¢    *:::::::::;;;:::::::*~i    ¦¢\n");
		printf("¦¢    *:::::::!*!;::::::::::!    ¦¢\n");
		printf("¦¢    *::::!,     ~::::::::!!    ¦¢\n");
		printf("¦¢    !:::$         ;:::::::!    ¦¢\n");
		printf("¦¢    !:::           :::::::!    ¦¢\n");
		printf("¦¢    !:::*         -=::::::!    ¦¢\n");
		printf("¦¢    !;::::*      -=:;:;;::!    ¦¢\n");
		printf("¦¢    !;::::&~-~--~=;:::::::!    ¦¢\n");
		printf("¦¢ ~:;!##::::::::::::::;:::;!!## ¦¢\n");
		printf("¦¢                               ¦¢\n");
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
		Sleep(300);
		system("cls");
	}
	system("color 07");
	PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
	printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("¦¢        ;::::::::;;;~,         ¦¢\n");
	printf("¦¢      ;~~~~~~~~~~~~;;~~,       ¦¢\n");
	printf("¦¢     ,;:~~~~~~~~~~;;~~~~,      ¦¢\n");
	printf("¦¢    ,::~~~~~~~~~~~~~;:~~~,     ¦¢\n");
	printf("¦¢    :~~~~:~~~~~~~~~::::!!!,    ¦¢\n");
	printf("¦¢    :~~~~:~~~~~~~~~::::,iii    ¦¢\n");
	printf("¦¢    ;~¦£¦¡¦¡¦¡¦¡¦¡¦¤~!!~ ¦£¦¡¦¡¦¡¦¡¦¡¦¤:i    ¦¢\n");
	printf("¦¢    :~¦¢  ¡Ú ¦§¦¡¦¡¦¡¦¡¦¡¦© ¡Ú  ¦¢:i    ¦¢\n");
	printf("¦¢    -:¦¦¦¡¦¡¦¡¦¡¦¡¦¥ ~~~~¦¦¦¡¦¡¦¡¦¡¦¡¦¥:i    ¦¢\n");
	printf("¦¢    *:::::::::;;;:::::::*~i    ¦¢\n");
	printf("¦¢    *:::::::!*!;::::::::::!    ¦¢\n");
	printf("¦¢    *::::!,     ~::::::::!!    ¦¢\n");
	printf("¦¢    !:::$         ;:::::::!    ¦¢\n");
	printf("¦¢    !:::           :::::::!    ¦¢\n");
	printf("¦¢    !:::*         -=::::::!    ¦¢\n");
	printf("¦¢    !;::::*      -=:;:;;::!    ¦¢\n");
	printf("¦¢    !;::::&~-~--~=;:::::::!    ¦¢\n");
	printf("¦¢ ~:;!##::::::::::::::;:::;!!## ¦¢\n");
	printf("¦¢                               ¦¢\n");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	printf("\n\n");
}


void Print_instruction() {           //°ÔÀÓ ¼³¸í¼­ Ãâ·Â
	printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("¦¢                          ¡Ø°ÔÀÓ ¼³¸í¼­¡Ø                           ¦¢\n");
	printf("¦¢                                                                    ¦¢\n");
	printf("¦¢ ¦£¦¡¦¡¦¡ [TIMER] ¦¡¦¡¦¡¦¤   ¦£¦¡¦¡¦¡¦¡¦¡ [SCORE] ¦¡¦¡¦¡¦¡¦¡¦¤   ¦£¦¡¦¡¦¡¦¡¦¡¦¡ [LMT] ¦¡¦¡¦¡¦¡¦¡¦¡¦¤  ¦¢\n");
	printf("¦¢  Á¦ÇÑ½Ã°£ : 30ÃÊ       ¼º°ø +1 | ½ÇÆÐ -2      Àâ±â Á¦ÇÑ ½Ã°£ 1ÃÊ   ¦¢\n");
	printf("¦¢ ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥   ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥   ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥  ¦¢\n");
	printf("¦¢ Á¶ÀÛÅ° = Å°ÆÐµå 1 ~ 9 (NUM LOCK)               ¡ØÁ¦ÇÑ½Ã°£ ÃÊ°ú -1  ¦¢\n");
	printf("¦¢ È­¸éÀÇ 1 ~ 9±îÁöÀÇ ¹øÈ£ = µÎ´õÁö ¹øÈ£                              ¦¢\n");
	printf("¦¢             ¡ØÁ¡¼ö°¡ -10Á¡ÀÌÇÏ ÀÏ½Ã °ÔÀÓ¿À¹ö                       ¦¢\n");
	printf("¦¢             ¡ØÇÑ¹ø´­·¯¼­ Æ²·ÈÀ»½Ã ´Ù¸¥Å°¸¦ ´©¸£Áö ¸¶¼¼¿ä           ¦¢\n");
	printf("¦¢ ¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø ¦¢\n");
	printf("¦¢                                                                    ¦¢\n");
	printf("¦¢   (");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	printf("³ë¶õ»ö ¼ýÀÚ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf(") µÎ´õÁö ¹ß»ý : ¼ýÀÚ¿¡ ¸Â´Â Å°¹öÆ°À» ´©¸¥´Ù.         ¦¢\n");
	printf("¦¢                                                                    ¦¢\n");
	printf("¦¢            ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	printf("777                  888                  999");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("           ¦¢\n");
	printf("¦¢          7     7              8     8              9     9         ¦¢\n");
	printf("¦¢         7       7            8       8            9       9        ¦¢\n");
	printf("¦¢         7 ¡Ú ¡Ú 7            8 ¡Ú ¡Ú 8            9 ¡Ú ¡Ú 9        ¦¢\n");
	printf("¦¢         7   W   7            8   W   8            9   W   9        ¦¢\n");
	printf("¦¢        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       ¦¢\n");
	printf("¦¢                                                                    ¦¢\n");
	printf("¦¢   (");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	printf("ÃÊ·Ï»ö ¹è°æ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf(") : ³ë¶õ»ö¼ýÀÚ¿¡ ¸Â´Â Å°¹öÆ°À» ´­·¶À» °æ¿ì /Á¡¼ö+1   ¦¢\n");
	printf("¦¢                                                                    ¦¢\n");
	printf("¦¢            ");
	printf("444                  555                  666");
	printf("           ¦¢\n");
	printf("¦¢          4     4              5     5              6     6         ¦¢\n");
	printf("¦¢         4       4            5       5            6       6        ¦¢\n");
	printf("¦¢         4 ¡Ú ¡Ú 4            5 ¡Ú ¡Ú 5            6 ¡Ú ¡Ú 6        ¦¢\n");
	printf("¦¢         4   W   4            5   W   5            6   W   6        ¦¢\n");
	printf("¦¢        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       ¦¢\n");
	printf("¦¢                                                                    ¦¢\n");
	printf("¦¢   (");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("»¡°£»ö ¹è°æ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf(") : ³ë¶õ»ö¿¡ ¸ÂÁö¾Ê´Â ´Ù¸¥ ¼ýÀÚ¸¦ ´­·¶À» °æ¿ì /Á¡¼ö-2¦¢\n");
	printf("¦¢                                                                    ¦¢\n");
	printf("¦¢                                                                    ¦¢\n");
	printf("¦¢            ");
	printf("111                  222                  333");
	printf("           ¦¢\n");
	printf("¦¢          1     1              2     2              3     3         ¦¢\n");
	printf("¦¢         1       1            2       2            3       3        ¦¢\n");
	printf("¦¢         1 ¡Ú ¡Ú 1            2 ¡Ú ¡Ú 2            3 ¡Ú ¡Ú 3        ¦¢\n");
	printf("¦¢         1   W   1            2   W   2            3   W   3        ¦¢\n");
	printf("¦¢        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       ¦¢\n");
	printf("¦¢                                                                    ¦¢\n");
	printf("¦¢                ¡Ø°°Àº ¹øÈ£°¡ ¿©·¯¹ø ³ª¿Ã ¼ö ÀÖ½À´Ï´Ù.              ¦¢\n");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
}

void Print_Waiting() {   //°ÔÀÓ½ÃÀÛ±îÁö 3..2..1..
	for (int i = 3; i >= 1; i--) {
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("                           ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("                           ¦¢   °ÔÀÓ½ÃÀÛ ±îÁö %dÃÊ ¦¢\n", i);
		printf("                           ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
		printf("\n");
		printf("                  ½ÃÀÛÇÏ±â Àü±îÁö ¾Æ¹«·± Å°µµ ´©¸£Áö ¸¶¼¼¿ä... \n\n");
		printf("                  °ÔÀÓ¿¡ µé¾î°¡¸é Å°º¸µå¸¦ ÇÑ¹ø¾¿¸¸ ´­·¯ÁÖ¼¼¿ä...\n\n");
		printf("                  ´©¸¥°Ô Æ²¸®´ø ¸Â´ø ÇÑ¹ø¸¸ ´­·¯ÁÖ¼¼¿ä...\n\n");
		if (_kbhit()) {
			printf("                  ½ÃÀÛÇÏ±âÀü Å°º¸µå°¡ ´­·Á °ÔÀÓÀ» ³¡³À´Ï´Ù...\n\n");
			system("pause > nul");
			exit(1);
		}
		Sleep(1000);
		system("cls");
	}

}

void wait(int seconds) {     //Sleep ¾È¾²°í Å¸ÀÌ¸Ó
	clock_t endwait;         // 1ÃÊ¼¼±â
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endwait) {
	}
}
int rand123;

print_789() {
	if (rand123 == 7) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);//³ë¶õ»ö
		printf("%d%d%d", a7[0], a7[1], a7[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a7[0], a7[1], a7[2]);
	printf("                  ");
	if (rand123 == 8) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a8[0], a8[1], a8[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a8[0], a8[1], a8[2]);
	printf("                  ");
	if (rand123 == 9) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a9[0], a9[1], a9[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a9[0], a9[1], a9[2]);
}
print_456() {
	if (rand123 == 4) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a4[0], a4[1], a4[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else 
		printf("%d%d%d", a4[0], a4[1], a4[2]);
	printf("                  ");
	if (rand123 == 5) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a5[0], a5[1], a5[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a5[0], a5[1], a5[2]);
	printf("                  ");
	if (rand123 == 6) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a6[0], a6[1], a6[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a6[0], a6[1], a6[2]);
}
print_123() {
	if (rand123 == 1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a1[0], a1[1], a1[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a1[0], a1[1], a1[2]);
	printf("                  ");
	if (rand123 == 2) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a2[0], a2[1], a2[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a2[0], a2[1], a2[2]);
	printf("                  ");
	if (rand123 == 3) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a3[0], a3[1], a3[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a3[0], a3[1], a3[2]);
}







void Game_start() {
	srand((unsigned)time(NULL));
	for (i = 30;i > 0;i--) {
		
		RandomNumber = rand() % 9 + 1;
		rand123 = RandomNumber;
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢ ¦£¦¡¦¡¦¡ [TIMER] ¦¡¦¡¦¡¦¤   ¦£¦¡¦¡¦¡¦¡¦¡ [SCORE] ¦¡¦¡¦¡¦¡¦¡¦¤   ¦£¦¡¦¡¦¡¦¡¦¡¦¡ [LMT] ¦¡¦¡¦¡¦¡¦¡¦¡¦¤  ¦¢\n");
		printf("¦¢ ");
		printf("       %02dÃÊ         ", i);
		printf("         %02dÁ¡           ", score);
		printf("         1ÃÊ          ");
		printf(" ¦¢\n");
		printf("¦¢ ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥   ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥   ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥  ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢ ¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø¡Ø ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢            ");
		print_789();//¹è¿­ 777 888 999 Ãâ·Â
		printf("           ¦¢\n");
		printf("¦¢          7     7              8     8              9     9         ¦¢\n");
		printf("¦¢         7       7            8       8            9       9        ¦¢\n");
		printf("¦¢         7 ¡Ú ¡Ú 7            8 ¡Ú ¡Ú 8            9 ¡Ú ¡Ú 9        ¦¢\n");
		printf("¦¢         7   W   7            8   W   8            9   W   9        ¦¢\n");
		printf("¦¢        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢            ");
		print_456();//¹è¿­ 444 555 666 Ãâ·Â
		printf("           ¦¢\n");
		printf("¦¢          4     4              5     5              6     6         ¦¢\n");
		printf("¦¢         4       4            5       5            6       6        ¦¢\n");
		printf("¦¢         4 ¡Ú ¡Ú 4            5 ¡Ú ¡Ú 5            6 ¡Ú ¡Ú 6        ¦¢\n");
		printf("¦¢         4   W   4            5   W   5            6   W   6        ¦¢\n");
		printf("¦¢        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢            ");
		print_123();//¹è¿­ 111 222 333 Ãâ·Â
		printf("           ¦¢\n");
		printf("¦¢          1     1              2     2              3     3         ¦¢\n");
		printf("¦¢         1       1            2       2            3       3        ¦¢\n");
		printf("¦¢         1 ¡Ú ¡Ú 1            2 ¡Ú ¡Ú 2            3 ¡Ú ¡Ú 3        ¦¢\n");
		printf("¦¢         1   W   1            2   W   2            3   W   3        ¦¢\n");
		printf("¦¢        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¢                                                                    ¦¢\n");
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");


		wait(1);                     //Å¸ÀÌ¸Ó ÇÔ¼ö·Î ÀÌµ¿
		char choice;
		if (_kbhit())
		{
			choice = getch();
			cnt++;
			if ((int)choice == '1' && RandomNumber == 1) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;
				
			}
			else if ((int)choice == '2' && RandomNumber == 2) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;
				
			}
			else if ((int)choice == '3' && RandomNumber == 3) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;
				
			}
			else if ((int)choice == '4' && RandomNumber == 4) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;

			}
			else if ((int)choice == '5' && RandomNumber == 5) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;

			}
			else if ((int)choice == '6' && RandomNumber == 6) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;

			}
			else if ((int)choice == '7' && RandomNumber == 7) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;

			}
			else if ((int)choice == '8' && RandomNumber == 8) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;

			}
			else if ((int)choice == '9' && RandomNumber == 9) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;

			}
			else {
				score--;
				system("color 4f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 4;

			}
			
		}
		score--;
		color = 6;
		wait(0.5);
		system("cls");
		if (score <= -10) {
			printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
			printf("¦¢        ;::::::::;;;~,              ¦¢\n");
			printf("¦¢      ;~~~~~~~~~~~~;;~~,            ¦¢\n");
			printf("¦¢     ,;:~~~~~~~~~~;;~~~~,           ¦¢\n");
			printf("¦¢    ,::~~~~~~~~~~~~~;:~~~,          ¦¢\n");
			printf("¦¢    :~~~~:~~~~~~~~~::::!!!,         ¦¢\n");
			printf("¦¢    :~~~~:~~~~~~~~~::::,iii         ¦¢\n");
			printf("¦¢    ;~¦£¦¡¦¡¦¡¦¡¦¡¦¤~!!~ ¦£¦¡¦¡¦¡¦¡¦¡¦¤:i         ¦¢\n");
			printf("¦¢    :~¦¢  ¡Ú ¦§¦¡¦¡¦¡¦¡¦¡¦© ¡Ú  ¦¢:i         ¦¢\n");
			printf("¦¢    -:¦¦¦¡¦¡¦¡¦¡¦¡¦¥ ~~~~¦¦¦¡¦¡¦¡¦¡¦¡¦¥:i         ¦¢\n");
			printf("¦¢    *:::::::::;;;:::::::*~i         ¦¢\n");
			printf("¦¢    *:::::::!*!;::::::::::!         ¦¢\n");
			printf("¦¢    *::::!,     ~::::::::!!         ¦¢\n");
			printf("¦¢    !:::$         ;:::::::!         ¦¢\n");
			printf("¦¢    !:::           :::::::!         ¦¢\n");
			printf("¦¢    !:::*         -=::::::!         ¦¢\n");
			printf("¦¢    !;::::*      -=:;:;;::!         ¦¢\n");
			printf("¦¢    !;::::&~-~--~=;:::::::!         ¦¢\n");
			printf("¦¢ ~:;!##::::::::::::::;:::;!!##      ¦¢\n");
			printf("¦¢                                    ¦¢\n");
			printf("¦¢  @@@@      @     @       @  @@@@@@ ¦¢\n");
			printf("¦¢ @    @    @  @   @ @   @ @  @      ¦¢\n");
			printf("¦¢ @       @      @ @  @ @  @  @      ¦¢\n");
			printf("¦¢ @   @@  @ @@@@ @ @   @   @  @@@@@@ ¦¢\n");
			printf("¦¢ @    @  @      @ @       @  @      ¦¢\n");
			printf("¦¢  @@@@   @      @ @       @  @@@@@@ ¦¢\n");
			printf("¦¢                                    ¦¢\n");
			printf("¦¢  @@@@   @     @   @@@@@@@   @@@@@@ ¦¢\n");
			printf("¦¢ @    @  @     @   @         @     @¦¢\n");
			printf("¦¢ @    @   @   @    @         @     @¦¢\n");
			printf("¦¢ @    @   @   @    @@@@@@@   @@@@@@ ¦¢\n");
			printf("¦¢ @    @    @ @     @         @    @ ¦¢\n");
			printf("¦¢  @@@@      @      @@@@@@@   @     @¦¢\n");
			printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
			system("pause > nul");
			exit(1);
			
		}
	}
	printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("¦¢        ;::::::::;;;~,         ¦¢\n");
	printf("¦¢      ;~~~~~~~~~~~~;;~~,       ¦¢\n");
	printf("¦¢     ,;:~~~~~~~~~~;;~~~~,      ¦¢\n");
	printf("¦¢    ,::~~~~~~~~~~~~~;:~~~,     ¦¢\n");
	printf("¦¢    :~~~~:~~~~~~~~~::::!!!,    ¦¢\n");
	printf("¦¢    :~~~~:~~~~~~~~~::::,iii    ¦¢\n");
	printf("¦¢    ;~¦£¦¡¦¡¦¡¦¡¦¡¦¤~!!~ ¦£¦¡¦¡¦¡¦¡¦¡¦¤:i    ¦¢\n");
	printf("¦¢    :~¦¢  ¡Ú ¦§¦¡¦¡¦¡¦¡¦¡¦© ¡Ú  ¦¢:i    ¦¢\n");
	printf("¦¢    -:¦¦¦¡¦¡¦¡¦¡¦¡¦¥ ~~~~¦¦¦¡¦¡¦¡¦¡¦¡¦¥:i    ¦¢\n");
	printf("¦¢    *:::::::::;;;:::::::*~i    ¦¢\n");
	printf("¦¢    *:::::::!*!;::::::::::!    ¦¢\n");
	printf("¦¢    *::::!,     ~::::::::!!    ¦¢\n");
	printf("¦¢    !:::$         ;:::::::!    ¦¢\n");
	printf("¦¢    !:::           :::::::!    ¦¢\n");
	printf("¦¢    !:::*         -=::::::!    ¦¢\n");
	printf("¦¢    !;::::*      -=:;:;;::!    ¦¢\n");
	printf("¦¢    !;::::&~-~--~=;:::::::!    ¦¢\n");
	printf("¦¢ ~:;!##::::::::::::::;:::;!!## ¦¢\n");
	printf("¦¢                               ¦¢\n");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	printf("´ç½ÅÀÇ Á¡¼ö´Â : %dÁ¡ ÀÔ´Ï´Ù..!!(30Á¡ ¸¸Á¡) \n", score);
	if (score == 30)printf("¸¸Á¡ÀÔ´Ï´Ù!!\n");
	printf("\n");
	Score();
	//system("pause > nul");

}


int main() {
	system("title µÎ´õÁö Àâ±â °ÔÀÓ");
	srand((unsigned int)time(NULL));

	Command_size(); //ÄÜ¼ÖÃ¢ »çÀÌÁî º¯°æ

	Print_Map();   //·Î°í Ãâ·Â

	system("pause");//°è¼ÓÇÏ·Á¸é ¾Æ¹«Å°³ª ´©¸£¼¼¿ä

	system("cls");//ÄÜ¼Ö¿¡ÀÖ´ÂÃ¢ ÃÊ±âÈ­

	Print_instruction(); //¼³¸í¼­ Ãâ·Â

	system("pause");
	system("cls");

	Print_Waiting();//°ÔÀÓ½ÃÀÛ±îÁö 3..2..1.. Ãâ·Â

	Game_start(); //°ÔÀÓ È­¸é Ãâ·Â       

	//system("pause > nul");

}
//Æ²¸®¸é »¡°£»ö
//¸ÂÀ¸¸é ÃÊ·Ï»ö
//Á¡¼öÇ¥
