#include<stdio.h>
#include<windows.h> 
#include<stdlib.h>  
#include<time.h>    //clock
#include<conio.h>   
#include<MMSystem.h>
#pragma comment(lib,"Winmm.lib")
#define getcoin_sound "C:\\Users\\user\\Downloads\\��������ȹ��\\����ȹ��4.wav"
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
	printf("    �� �� �� �� �� ����ǥ �� �� �� �� ��\n\n");
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
	
	printf("����ǥ�� �Է��� �̸��� �Է��ϼ��� : ");
	scanf_s("%s", name);
	FILE* fp;
	fp = fopen("C:\\FILE input output\\Rankingsystem.txt", "a+");
	fprintf(fp, "�̸� : %s\t\t\t | ���� : %d\n", name, score);
	fclose(fp);
	printf("���� : %d �̸� : %s\n\n", score, name);
	printf("����ǥ�� �Է���");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".\n\n");
	printf("����ǥ�� �Է� �Ϸ�!!\n");
	Sleep(1000);
	Score_chart_Print();
}

void Command_size() {
	char command[COMMAND_SIZE] = { '\0', };           // �ܼ�â ������ ����
	int lines = 50;
	int cols = 80;
	sprintf(command, "mode con: lines=%d cols=%d", lines, cols);
	system(command);
}
void Print_Map() {    //ó�� �δ��� �ΰ�? ���
	int i;
	for (i = 0;i < 2;i++) {
		system("color 0d");
		PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
		printf("������������������������������������������������������������������\n");
		printf("��        ;::::::::;;;~,         ��\n");
		printf("��      ;~~~~~~~~~~~~;;~~,       ��\n");
		printf("��     ,;:~~~~~~~~~~;;~~~~,      ��\n");
		printf("��    ,::~~~~~~~~~~~~~;:~~~,     ��\n");
		printf("��    :~~~~:~~~~~~~~~::::!!!,    ��\n");
		printf("��    :~~~~:~~~~~~~~~::::,iii    ��\n");
		printf("��    ;~��������������~!!~ ��������������:i    ��\n");
		printf("��    :~��  �� �������������� ��  ��:i    ��\n");
		printf("��    -:�������������� ~~~~��������������:i    ��\n");
		printf("��    *:::::::::;;;:::::::*~i    ��\n");
		printf("��    *:::::::!*!;::::::::::!    ��\n");
		printf("��    *::::!,     ~::::::::!!    ��\n");
		printf("��    !:::$         ;:::::::!    ��\n");
		printf("��    !:::           :::::::!    ��\n");
		printf("��    !:::*         -=::::::!    ��\n");
		printf("��    !;::::*      -=:;:;;::!    ��\n");
		printf("��    !;::::&~-~--~=;:::::::!    ��\n");
		printf("�� ~:;!##::::::::::::::;:::;!!## ��\n");
		printf("��                               ��\n");
		printf("������������������������������������������������������������������\n");
		Sleep(300);
		system("cls");
		system("color 0e");
		PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
		printf("������������������������������������������������������������������\n");
		printf("��        ;::::::::;;;~,         ��\n");
		printf("��      ;~~~~~~~~~~~~;;~~,       ��\n");
		printf("��     ,;:~~~~~~~~~~;;~~~~,      ��\n");
		printf("��    ,::~~~~~~~~~~~~~;:~~~,     ��\n");
		printf("��    :~~~~:~~~~~~~~~::::!!!,    ��\n");
		printf("��    :~~~~:~~~~~~~~~::::,iii    ��\n");
		printf("��    ;~��������������~!!~ ��������������:i    ��\n");
		printf("��    :~��  �� �������������� ��  ��:i    ��\n");
		printf("��    -:�������������� ~~~~��������������:i    ��\n");
		printf("��    *:::::::::;;;:::::::*~i    ��\n");
		printf("��    *:::::::!*!;::::::::::!    ��\n");
		printf("��    *::::!,     ~::::::::!!    ��\n");
		printf("��    !:::$         ;:::::::!    ��\n");
		printf("��    !:::           :::::::!    ��\n");
		printf("��    !:::*         -=::::::!    ��\n");
		printf("��    !;::::*      -=:;:;;::!    ��\n");
		printf("��    !;::::&~-~--~=;:::::::!    ��\n");
		printf("�� ~:;!##::::::::::::::;:::;!!## ��\n");
		printf("��                               ��\n");
		printf("������������������������������������������������������������������\n");
		Sleep(300);
		system("cls");
		system("color 0c");
		PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
		printf("������������������������������������������������������������������\n");
		printf("��        ;::::::::;;;~,         ��\n");
		printf("��      ;~~~~~~~~~~~~;;~~,       ��\n");
		printf("��     ,;:~~~~~~~~~~;;~~~~,      ��\n");
		printf("��    ,::~~~~~~~~~~~~~;:~~~,     ��\n");
		printf("��    :~~~~:~~~~~~~~~::::!!!,    ��\n");
		printf("��    :~~~~:~~~~~~~~~::::,iii    ��\n");
		printf("��    ;~��������������~!!~ ��������������:i    ��\n");
		printf("��    :~��  �� �������������� ��  ��:i    ��\n");
		printf("��    -:�������������� ~~~~��������������:i    ��\n");
		printf("��    *:::::::::;;;:::::::*~i    ��\n");
		printf("��    *:::::::!*!;::::::::::!    ��\n");
		printf("��    *::::!,     ~::::::::!!    ��\n");
		printf("��    !:::$         ;:::::::!    ��\n");
		printf("��    !:::           :::::::!    ��\n");
		printf("��    !:::*         -=::::::!    ��\n");
		printf("��    !;::::*      -=:;:;;::!    ��\n");
		printf("��    !;::::&~-~--~=;:::::::!    ��\n");
		printf("�� ~:;!##::::::::::::::;:::;!!## ��\n");
		printf("��                               ��\n");
		printf("������������������������������������������������������������������\n");
		Sleep(300);
		system("cls");
		system("color 0b");
		PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
		printf("������������������������������������������������������������������\n");
		printf("��        ;::::::::;;;~,         ��\n");
		printf("��      ;~~~~~~~~~~~~;;~~,       ��\n");
		printf("��     ,;:~~~~~~~~~~;;~~~~,      ��\n");
		printf("��    ,::~~~~~~~~~~~~~;:~~~,     ��\n");
		printf("��    :~~~~:~~~~~~~~~::::!!!,    ��\n");
		printf("��    :~~~~:~~~~~~~~~::::,iii    ��\n");
		printf("��    ;~��������������~!!~ ��������������:i    ��\n");
		printf("��    :~��  �� �������������� ��  ��:i    ��\n");
		printf("��    -:�������������� ~~~~��������������:i    ��\n");
		printf("��    *:::::::::;;;:::::::*~i    ��\n");
		printf("��    *:::::::!*!;::::::::::!    ��\n");
		printf("��    *::::!,     ~::::::::!!    ��\n");
		printf("��    !:::$         ;:::::::!    ��\n");
		printf("��    !:::           :::::::!    ��\n");
		printf("��    !:::*         -=::::::!    ��\n");
		printf("��    !;::::*      -=:;:;;::!    ��\n");
		printf("��    !;::::&~-~--~=;:::::::!    ��\n");
		printf("�� ~:;!##::::::::::::::;:::;!!## ��\n");
		printf("��                               ��\n");
		printf("������������������������������������������������������������������\n");
		Sleep(300);
		system("cls");
	}
	system("color 07");
	PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
	printf("������������������������������������������������������������������\n");
	printf("��        ;::::::::;;;~,         ��\n");
	printf("��      ;~~~~~~~~~~~~;;~~,       ��\n");
	printf("��     ,;:~~~~~~~~~~;;~~~~,      ��\n");
	printf("��    ,::~~~~~~~~~~~~~;:~~~,     ��\n");
	printf("��    :~~~~:~~~~~~~~~::::!!!,    ��\n");
	printf("��    :~~~~:~~~~~~~~~::::,iii    ��\n");
	printf("��    ;~��������������~!!~ ��������������:i    ��\n");
	printf("��    :~��  �� �������������� ��  ��:i    ��\n");
	printf("��    -:�������������� ~~~~��������������:i    ��\n");
	printf("��    *:::::::::;;;:::::::*~i    ��\n");
	printf("��    *:::::::!*!;::::::::::!    ��\n");
	printf("��    *::::!,     ~::::::::!!    ��\n");
	printf("��    !:::$         ;:::::::!    ��\n");
	printf("��    !:::           :::::::!    ��\n");
	printf("��    !:::*         -=::::::!    ��\n");
	printf("��    !;::::*      -=:;:;;::!    ��\n");
	printf("��    !;::::&~-~--~=;:::::::!    ��\n");
	printf("�� ~:;!##::::::::::::::;:::;!!## ��\n");
	printf("��                               ��\n");
	printf("������������������������������������������������������������������\n");
	printf("\n\n");
}


void Print_instruction() {           //���� ���� ���
	printf("��������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("��                          �ذ��� ������                           ��\n");
	printf("��                                                                    ��\n");
	printf("�� �������� [TIMER] ��������   ������������ [SCORE] ������������   �������������� [LMT] ��������������  ��\n");
	printf("��  ���ѽð� : 30��       ���� +1 | ���� -2      ��� ���� �ð� 1��   ��\n");
	printf("�� ����������������������������������   ������������������������������������������   ������������������������������������������  ��\n");
	printf("�� ����Ű = Ű�е� 1 ~ 9 (NUM LOCK)               �����ѽð� �ʰ� -1  ��\n");
	printf("�� ȭ���� 1 ~ 9������ ��ȣ = �δ��� ��ȣ                              ��\n");
	printf("��             �������� -10������ �Ͻ� ���ӿ���                       ��\n");
	printf("��             ���ѹ������� Ʋ������ �ٸ�Ű�� ������ ������           ��\n");
	printf("�� �ءءءءءءءءءءءءءءءءءءءءءءءءءءءءءءءء� ��\n");
	printf("��                                                                    ��\n");
	printf("��   (");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	printf("����� ����");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf(") �δ��� �߻� : ���ڿ� �´� Ű��ư�� ������.         ��\n");
	printf("��                                                                    ��\n");
	printf("��            ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	printf("777                  888                  999");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("           ��\n");
	printf("��          7     7              8     8              9     9         ��\n");
	printf("��         7       7            8       8            9       9        ��\n");
	printf("��         7 �� �� 7            8 �� �� 8            9 �� �� 9        ��\n");
	printf("��         7   W   7            8   W   8            9   W   9        ��\n");
	printf("��        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       ��\n");
	printf("��                                                                    ��\n");
	printf("��   (");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	printf("�ʷϻ� ���");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf(") : ��������ڿ� �´� Ű��ư�� ������ ��� /����+1   ��\n");
	printf("��                                                                    ��\n");
	printf("��            ");
	printf("444                  555                  666");
	printf("           ��\n");
	printf("��          4     4              5     5              6     6         ��\n");
	printf("��         4       4            5       5            6       6        ��\n");
	printf("��         4 �� �� 4            5 �� �� 5            6 �� �� 6        ��\n");
	printf("��         4   W   4            5   W   5            6   W   6        ��\n");
	printf("��        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       ��\n");
	printf("��                                                                    ��\n");
	printf("��   (");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("������ ���");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf(") : ������� �����ʴ� �ٸ� ���ڸ� ������ ��� /����-2��\n");
	printf("��                                                                    ��\n");
	printf("��                                                                    ��\n");
	printf("��            ");
	printf("111                  222                  333");
	printf("           ��\n");
	printf("��          1     1              2     2              3     3         ��\n");
	printf("��         1       1            2       2            3       3        ��\n");
	printf("��         1 �� �� 1            2 �� �� 2            3 �� �� 3        ��\n");
	printf("��         1   W   1            2   W   2            3   W   3        ��\n");
	printf("��        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       ��\n");
	printf("��                                                                    ��\n");
	printf("��                �ذ��� ��ȣ�� ������ ���� �� �ֽ��ϴ�.              ��\n");
	printf("��������������������������������������������������������������������������������������������������������������������������������������������\n");
}

void Print_Waiting() {   //���ӽ��۱��� 3..2..1..
	for (int i = 3; i >= 1; i--) {
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("                           ����������������������������������������������\n");
		printf("                           ��   ���ӽ��� ���� %d�� ��\n", i);
		printf("                           ����������������������������������������������\n");
		printf("\n");
		printf("                  �����ϱ� ������ �ƹ��� Ű�� ������ ������... \n\n");
		printf("                  ���ӿ� ���� Ű���带 �ѹ����� �����ּ���...\n\n");
		printf("                  ������ Ʋ���� �´� �ѹ��� �����ּ���...\n\n");
		if (_kbhit()) {
			printf("                  �����ϱ��� Ű���尡 ���� ������ �����ϴ�...\n\n");
			system("pause > nul");
			exit(1);
		}
		Sleep(1000);
		system("cls");
	}

}

void wait(int seconds) {     //Sleep �Ⱦ��� Ÿ�̸�
	clock_t endwait;         // 1�ʼ���
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endwait) {
	}
}
int rand123;

print_789() {
	if (rand123 == 7) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);//�����
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
		printf("��������������������������������������������������������������������������������������������������������������������������������������������\n");
		printf("��                                                                    ��\n");
		printf("��                                                                    ��\n");
		printf("�� �������� [TIMER] ��������   ������������ [SCORE] ������������   �������������� [LMT] ��������������  ��\n");
		printf("�� ");
		printf("       %02d��         ", i);
		printf("         %02d��           ", score);
		printf("         1��          ");
		printf(" ��\n");
		printf("�� ����������������������������������   ������������������������������������������   ������������������������������������������  ��\n");
		printf("��                                                                    ��\n");
		printf("��                                                                    ��\n");
		printf("��                                                                    ��\n");
		printf("��                                                                    ��\n");
		printf("�� �ءءءءءءءءءءءءءءءءءءءءءءءءءءءءءءءء� ��\n");
		printf("��                                                                    ��\n");
		printf("��                                                                    ��\n");
		printf("��                                                                    ��\n");
		printf("��            ");
		print_789();//�迭 777 888 999 ���
		printf("           ��\n");
		printf("��          7     7              8     8              9     9         ��\n");
		printf("��         7       7            8       8            9       9        ��\n");
		printf("��         7 �� �� 7            8 �� �� 8            9 �� �� 9        ��\n");
		printf("��         7   W   7            8   W   8            9   W   9        ��\n");
		printf("��        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       ��\n");
		printf("��                                                                    ��\n");
		printf("��                                                                    ��\n");
		printf("��                                                                    ��\n");
		printf("��            ");
		print_456();//�迭 444 555 666 ���
		printf("           ��\n");
		printf("��          4     4              5     5              6     6         ��\n");
		printf("��         4       4            5       5            6       6        ��\n");
		printf("��         4 �� �� 4            5 �� �� 5            6 �� �� 6        ��\n");
		printf("��         4   W   4            5   W   5            6   W   6        ��\n");
		printf("��        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       ��\n");
		printf("��                                                                    ��\n");
		printf("��                                                                    ��\n");
		printf("��                                                                    ��\n");
		printf("��            ");
		print_123();//�迭 111 222 333 ���
		printf("           ��\n");
		printf("��          1     1              2     2              3     3         ��\n");
		printf("��         1       1            2       2            3       3        ��\n");
		printf("��         1 �� �� 1            2 �� �� 2            3 �� �� 3        ��\n");
		printf("��         1   W   1            2   W   2            3   W   3        ��\n");
		printf("��        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       ��\n");
		printf("��                                                                    ��\n");
		printf("��                                                                    ��\n");
		printf("��������������������������������������������������������������������������������������������������������������������������������������������\n");


		wait(1);                     //Ÿ�̸� �Լ��� �̵�
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
			printf("����������������������������������������������������������������������������\n");
			printf("��        ;::::::::;;;~,              ��\n");
			printf("��      ;~~~~~~~~~~~~;;~~,            ��\n");
			printf("��     ,;:~~~~~~~~~~;;~~~~,           ��\n");
			printf("��    ,::~~~~~~~~~~~~~;:~~~,          ��\n");
			printf("��    :~~~~:~~~~~~~~~::::!!!,         ��\n");
			printf("��    :~~~~:~~~~~~~~~::::,iii         ��\n");
			printf("��    ;~��������������~!!~ ��������������:i         ��\n");
			printf("��    :~��  �� �������������� ��  ��:i         ��\n");
			printf("��    -:�������������� ~~~~��������������:i         ��\n");
			printf("��    *:::::::::;;;:::::::*~i         ��\n");
			printf("��    *:::::::!*!;::::::::::!         ��\n");
			printf("��    *::::!,     ~::::::::!!         ��\n");
			printf("��    !:::$         ;:::::::!         ��\n");
			printf("��    !:::           :::::::!         ��\n");
			printf("��    !:::*         -=::::::!         ��\n");
			printf("��    !;::::*      -=:;:;;::!         ��\n");
			printf("��    !;::::&~-~--~=;:::::::!         ��\n");
			printf("�� ~:;!##::::::::::::::;:::;!!##      ��\n");
			printf("��                                    ��\n");
			printf("��  @@@@      @     @       @  @@@@@@ ��\n");
			printf("�� @    @    @  @   @ @   @ @  @      ��\n");
			printf("�� @       @      @ @  @ @  @  @      ��\n");
			printf("�� @   @@  @ @@@@ @ @   @   @  @@@@@@ ��\n");
			printf("�� @    @  @      @ @       @  @      ��\n");
			printf("��  @@@@   @      @ @       @  @@@@@@ ��\n");
			printf("��                                    ��\n");
			printf("��  @@@@   @     @   @@@@@@@   @@@@@@ ��\n");
			printf("�� @    @  @     @   @         @     @��\n");
			printf("�� @    @   @   @    @         @     @��\n");
			printf("�� @    @   @   @    @@@@@@@   @@@@@@ ��\n");
			printf("�� @    @    @ @     @         @    @ ��\n");
			printf("��  @@@@      @      @@@@@@@   @     @��\n");
			printf("����������������������������������������������������������������������������\n");
			system("pause > nul");
			exit(1);
			
		}
	}
	printf("������������������������������������������������������������������\n");
	printf("��        ;::::::::;;;~,         ��\n");
	printf("��      ;~~~~~~~~~~~~;;~~,       ��\n");
	printf("��     ,;:~~~~~~~~~~;;~~~~,      ��\n");
	printf("��    ,::~~~~~~~~~~~~~;:~~~,     ��\n");
	printf("��    :~~~~:~~~~~~~~~::::!!!,    ��\n");
	printf("��    :~~~~:~~~~~~~~~::::,iii    ��\n");
	printf("��    ;~��������������~!!~ ��������������:i    ��\n");
	printf("��    :~��  �� �������������� ��  ��:i    ��\n");
	printf("��    -:�������������� ~~~~��������������:i    ��\n");
	printf("��    *:::::::::;;;:::::::*~i    ��\n");
	printf("��    *:::::::!*!;::::::::::!    ��\n");
	printf("��    *::::!,     ~::::::::!!    ��\n");
	printf("��    !:::$         ;:::::::!    ��\n");
	printf("��    !:::           :::::::!    ��\n");
	printf("��    !:::*         -=::::::!    ��\n");
	printf("��    !;::::*      -=:;:;;::!    ��\n");
	printf("��    !;::::&~-~--~=;:::::::!    ��\n");
	printf("�� ~:;!##::::::::::::::;:::;!!## ��\n");
	printf("��                               ��\n");
	printf("������������������������������������������������������������������\n");
	printf("����� ������ : %d�� �Դϴ�..!!(30�� ����) \n", score);
	if (score == 30)printf("�����Դϴ�!!\n");
	printf("\n");
	Score();
	//system("pause > nul");

}


int main() {
	system("title �δ��� ��� ����");
	srand((unsigned int)time(NULL));

	Command_size(); //�ܼ�â ������ ����

	Print_Map();   //�ΰ� ���

	system("pause");//����Ϸ��� �ƹ�Ű�� ��������

	system("cls");//�ֿܼ��ִ�â �ʱ�ȭ

	Print_instruction(); //���� ���

	system("pause");
	system("cls");

	Print_Waiting();//���ӽ��۱��� 3..2..1.. ���

	Game_start(); //���� ȭ�� ���       

	//system("pause > nul");

}
//Ʋ���� ������
//������ �ʷϻ�
//����ǥ
