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
	printf("��ĵ��Խ���60���ػ�����³���ȷ�����֣����ȡ���ػ�>");
	int ret = rand() % 100;
	while (1)
	{
		int guess = 0;
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�������\n");
		}
		else if (guess < ret)
		{
			printf("����С��\n");
		}
		else
		{
			printf("��ϲ��������ȷ\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������µ�����>\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������>\n");
			break;
		}
	} while (input);
	return 0;
}