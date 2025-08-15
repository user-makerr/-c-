#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void menu()
{
	printf("*****************\n");
	printf("******1.play*****\n");
	printf("******0.exit*****\n");
	printf("*****************\n");
}
void game()
{
	system("shutdown -s -t 60");
	printf("你的电脑将在60秒后关机，请猜出正确的数字，便可取消关机>");
	int ret = rand() % 100;
	while (1)
	{
		int guess = 0;
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("输入大了\n");
		}
		else if (guess < ret)
		{
			printf("输入小了\n");
		}
		else
		{
			printf("恭喜你输入正确\n");
			system("shutdown -a");
			break;
		}
	}

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入你猜的数字>\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入>\n");
			break;
		}
	} while (input);
	return 0;
}