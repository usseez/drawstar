#define _CRT_SECURE_NO_WARNINGS
#define WIDTH 20
#define HEIGHT 20
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//별그리기 : printf와 반복분 사용해서 5, 6, 7뿔이 있는 별

//미로 탈출 : 콘솔에 20*20map을 그린다 -> 길은 임의로 만든다(내 맘대로 fix) -> 0.5s마다 한 칸씩 움직여서 탈출하도록(랜덤으로 움직여서 탈출하도록.............ㅠㅠ) 움직임을 보여줘라
//빈칸이 길, 문자가 벽

int star6(void);
int russianroulet(void);



//int* 
//void make_map(int wall[][WIDTH]) {//배열로 S ㅁㅁㅁㅁ ...ㅁㅁㅁㅁQ 20*20으로 제작하고 출력하기


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

