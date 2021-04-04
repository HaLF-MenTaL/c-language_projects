#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>
int m, s, b = 0;
void Countdown();
int main(void)
{
	if (b == 0)
		Countdown();

	printf("\n1. Start Countdown Again.\n2. Reset The Countdown.\nPress 'Q' To Quit.");
	char menu;
	printf("Selection << ");
	menu = getche();

	switch (menu)
	{
	case '1':
		system("cls");
		b = 1;
		Countdown();
		break;

	case '2':
		system("cls");
		b = 0;
		main();
		break;

	case 'q':
	case 'Q':
		system("cls");
		printf("\n\n\n\n\n\t\t\t***************** THANK YOU FOR USING OUR APP *****************");
		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t  >>>>> Developed By MenTaL-TecH <<<<<");
		sleep(2);
		exit(0);
		break;
	}
}

void Countdown()
{
	if (b == 0)
	{
		printf("Enter Minutes : ");
		scanf("%d", &m);

		printf("Enter Seconds : ");
		scanf("%d", &s);
	}

	for (int i = s; i >= 0; i--)
	{
		system("cls");

		if (m > 9 && i > 9) //  m : s  ==  0:0
		{
			printf(" \n %d:%d", m, i);
		}

		else if (m < 10 && i < 10) //  m : s  ==  1:1
		{
			printf(" \n 0%d:0%d", m, i);
		}

		else if (m > 9 && i < 10) //  m : s  ==  0:1
		{
			printf(" \n %d:0%d", m, i);
		}

		else //  m : s  ==  1:0
		{
			printf(" \n 0%d:%d", m, i);
		}

		sleep(1);
	}

	for (int j = m; j > 0; j--)
	{
		for (int k = 59; k >= 0; k--)
		{
			system("cls");

			if (j > 9 && k > 9) //  m : s  ==  0:0
			{
				printf("\n %d:%d", j - 1, k);
			}

			else if (j > 9 && k < 10) //  m : s  ==  0:1
			{
				printf("\n %d:0%d", j - 1, k);
			}

			else if (j < 10 && k > 9) //  m : s  ==  1:0
			{
				printf("\n 0%d:%d", j - 1, k);
			}

			else //  m : s  ==  1:1
			{
				printf("\n 0%d:0%d", j - 1, k);
			}

			sleep(1);
		}
	}
	system("cls");
	printf("\a\n\n\t\t\t\t!!!!!!!!!!!          Time's up          !!!!!!!!!!!\n\n\n\n");
	b = 1;
	main();
}