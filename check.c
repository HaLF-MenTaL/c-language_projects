#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
main()
{
re_enter:
	int number_store[100];
	int element_store;
	int largest_num = 0;
	int smallest_num = number_store[0];

	printf("Number Of Elements You Want To Enter (Max : 100) : ");
	scanf("%d", &element_store);
	if (element_store > 100)
	{
		system("cls");
		printf("\n\n\n<<<<<<<<<<<<<<<<<<<<<The Value Entered Is Invalid>>>>>>>>>>>>>>>>>>>>>");
		printf("\n<<<<<<<<<<<<<<<<<<<<<<<<Try Something In Range>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n");
		goto re_enter;
	}

	printf("Enter The Values One By One >>>>\n");

	for (int i = 0; i < element_store; i++)
	{
		scanf("%d", &number_store[i]);
	}

for_values_again:

	for (int i = 0; i < element_store; i++)
	{
		if (number_store[i] > largest_num)
		{
			largest_num = number_store[i];
		}
	}

	//	printf("%d", smallest_num)
	//	for (size_t i = 0 ; i < element_store ; i++)
	//	{
	//		if (number_store[i] > smallest_num)
	//		{
	//			printf("%d", smallest_num);
	//		}

	//	}

	for (int i = 0; i < element_store; i++)
	{
		if (number_store[i] < smallest_num)
		{
			smallest_num = number_store[i];
		}
	}
	system("cls");
option1:
	char selection;
	printf("Press 'H' To Check The Largest Number From The List.\n");
	printf("Press 'S' To Check The Lowest Number From The List.\n");
	printf("Press 'N' To Check The Number Of Element You Entered In The List.\n");
	printf("Press 'L' To Print The List Of Numbers You Entered.\n");
	printf("Press 'P' To Data Again.");
	printf("Press 'Q' To Exit From The Program.\n");
	printf("Selection<<<<<");
	selection = getche();
	switch (selection)
	{
	case 'h':
	case 'H':
		system("cls");
		printf("<<<<You Have Selected To Check Largest Number.>>>>\n\n\n");
		printf("\t\t\t%d is the Largest Number.\n\n\n", largest_num);
		goto option1;
		break;

	case 's':
	case 'S':
		system("cls");
		printf("<<<<You Have Selected To Check Lowest Number.>>>>\n\n\n");
		printf("\t\t\t%d is the Lowest Number.\n\n\n", smallest_num);
		goto option1;
		break;

	case 'n':
	case 'N':
		system("cls");
		printf("<<<<You Have Selected To Check Element In The List.>>>>\n\n\n");
		printf("\t\t\tYou Have Entered %d Elements In The List.\n\n\n", element_store);
		goto option1;
		break;

	case 'l':
	case 'L':
		system("cls");
		printf("<<<<You Have Selected To Print The List Of Number.>>>>\n\n\n");
		for (int i = 0; i < element_store; i++)
		{
			printf("\t\t\t%d) %d\n", i + 1, number_store[i]);
		}
		printf("\n\n");
		goto option1;
		break;

	case 'p':
	case 'P':
	option2:
		char option2;
		printf("\n\n\nPress 'E' To Put The Number Of Elements And Values Again.\n");
		printf("Press 'V' To Put The Values Again.\n\n");
		printf("#Note : By Pressing 'N' The Number Of Elements Remains Same \nAs You Have Entered The Previous.\n#Remember : Numbers Of Elements Are %d.\n", element_store);
		printf("Selection<<<<<");
		option2 = getche();
		switch (option2)
		{
		case 'e':
		case 'E':
			system("cls");
			printf("<<<<You Have Selected To Put The Number Of Elements And Values Again.>>>>\n\n\n");
			goto re_enter;
			break;

		case 'v':
		case 'V':
			system("cls");
			printf("Enter The Values One By One >>>>\n");

			for (int i = 0; i < element_store; i++)
			{
				scanf("%d", &number_store[i]);
			}
			goto for_values_again;

		default:
			system("cls");
			printf("<<<<<<<<<<<<<<<<<<<<<The Option You Selected Is Invalid>>>>>>>>>>>>>>>>>>>>>");
			printf("\n<<<<<<<<<<<<<<<<<<<<<<<<Please Try Availble Option.>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n");
			goto option2;
			break;
		}

	case 'q':
	case 'Q':
		sleep(2);
		exit(0);

	default:
		system("cls");
		printf("<<<<<<<<<<<<<<<<<<<<<The Option You Selected Is Invalid>>>>>>>>>>>>>>>>>>>>>");
		printf("\n<<<<<<<<<<<<<<<<<<<<<<<<Please Try Availble Option.>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n");
		goto option1;
		break;
	}
}
