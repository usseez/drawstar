#define _CRT_SECURE_NO_WARNINGS
#define WIDTH 20
#define HEIGHT 20
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//紺益軒奄 : printf人 鋼差歳 紫遂背辞 5, 6, 7市戚 赤澗 紺

//耕稽 纏窒 : 嬬車拭 20*20map聖 益鍵陥 -> 掩精 績税稽 幻窮陥(鎧 絃企稽 fix) -> 0.5s原陥 廃 牒梢 崇送食辞 纏窒馬亀系(沓棋生稽 崇送食辞 纏窒馬亀系.............ばば) 崇送績聖 左食操虞
//朔牒戚 掩, 庚切亜 混

int star6(void);
int russianroulet(void);



//int* 
//void make_map(int wall[][WIDTH]) {//壕伸稽 S けけけけ ...けけけけQ 20*20生稽 薦拙馬壱 窒径馬奄


int russianroulet() {

	int num;

	char person1 = 'A';
	char person2 = 'B';

	char dead = person1;
	int stage = 1;
	int bullet;


	printf("put the number(5~10) : ");
	scanf_s("%d", &num);

	if ((num < 5) | (num > 10))
	{
		printf("Wrong number please try it again(5~10)");
		return -1;
	}

	bullet = time(NULL) % num;

	//int bullet = srand() % num;





	while (stage != bullet) {

		if (stage % 2 != 0) printf("stage : %d, %c alive\n", stage, person1);
		else printf("stage : %d, %c alive\n", stage, person2);

		stage++;


	}
	if (stage == bullet) {

		if (bullet % 2 != 0) dead = person1;
		else dead = person2;
		printf("stage : %d, %c dead\n", stage, dead);

	}
	printf("The bullet was in %d\n", bullet);


	return 0;
}
int star6()
{
	/*
	printf("        *\n");
	printf("       ***\n");
	printf("      *****\n");
	printf("*******************\n");
	printf("  ***************\n");
	printf("    ************\n");
	printf("    **********\n");
	printf("   ************\n");
	printf("  ***************\n");
	printf("*******************\n");
	printf("      *****\n");
	printf("       ***\n");
	printf("        *\n");
	*/

	int line = 1;
	int end = 13;

	int part1 = 4;
	int part2 = 7;
	int part3 = 10;

	for (line; line < part1;line++) {

		for (int i = end; i > line; i--) {
			printf(" ");
		}
		for (int i = 0; i < line; i++) {
			printf("*");
		}
		for (int i = 1; i < line; i++) {
			printf("*");
		}
		printf("\n");

	}

	for (line = part1; line < part2;line++) {
		for (int i = 0; i < line; i++) {
			printf(" ");
		}
		for (int i = end; i > line; i--) {
			printf("*");

		}
		for (int i = end - 1; i > line; i--) {
			printf("*");
		}
		printf("\n");
		//printf("%d", line);
		
	}


	//i = i - 2
	//i -=2
	//i = i + 2
	//i +=2

	for (line = part2; line < part3 - 1;line++) {
		for (int i = end + 1; i >= line + (part3 - part2); i--) {
			printf(" ");
		}
		/*for (int i = 0; i < line + end/5; i++) {
			printf("*");

		}*/
		for (int i = 1; i <= line + 2; i++) {
			printf("*");

		}
		for (int i = 2; i < line; i++) {
			printf("*");
		}
		printf("\n");

	}





	for (line = part3; line < end;line++) {

		for (int i = 0; i < line; i++) {
			printf(" ");
		}



		for (int i = end; i > line; i--) {
			printf("*");
		}


		for (int i = end - 1; i > line; i--) {
			printf("*");

		}
		printf("\n");

	}
	/*if ((line == 0) || (line == end)) {
	for (int i = 0; i < end;i++) {
		if (i == end / 2) printf("*");
		else printf(" ");

		printf("\n");
	}



}
else if ((line == 1) || (line == end - 1)) {
	for (int i = 0; i < end;i++) {
		if ((i >= (end / 2) - 2) || (i <= (end / 2) + 2)) printf("*");
		else printf(" ");
		printf("\n");
	}

}
else if (line == 2)
{
	for (int i = 0; i < end; i++) {
		if ((i >= (end / 2) - 2) || (i <= (end / 2) + 2)) printf("*");
		else printf(" ");
		printf("\n");
	}


	printf("%d", line);
}
  else
	printf("*");
	line == end;






	if (line < 3) {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 20; j >= i; j--)
			{
				printf(" ");
			}

			for (int j = 0; j <= i; j++)
			{
				printf("*");

			}
			printf("\n");
			line++;



		}



		else if ((line >= 3) && (line <= 6)) {
			for (int i = 0; i < 3; i++) {

				for (int j = 0; j <= i; j++) {

					printf(" ");

				}

				for (int j = 10; j >= i; j--) {
					printf("*");


				}

			printf("%d", line);
				printf("\n");

				line++;
			}


		}

		else if ((line > 6) && (line <= 9)) {

			line++;

		}

		else {

			line++;
		}



		}*/
	return 0;
}
int main(int argc, char* argv[]) {
	star6();

	return 0;

}

