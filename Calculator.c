// Calculator example using C code
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

#define KEY "Enter The Calculator Operation You Want To Do"

// Function prototype declaration
void calculator_operations_2();
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();
void calculator_operations();
// Start of Main Program
int main()
{
	int X = 1;
	char Calc_oprn;

	// Function Call
	calculator_operations();

	while (X)
	{
		printf("\n");
		printf("%s : ", KEY);

		Calc_oprn = getche();

		switch (Calc_oprn)
		{
		case '+':
			addition();
			break;

		case '-':
			subtraction();
			break;

		case '*':
			multiplication();
			break;

		case '/':
			division();
			break;

		case '%':
			modulus();
			break;

			//	case '!': factorial();
			//	break;

		case '^':
			power();
			break;

		case 'Q':
		case 'q':
			system("cls");
			printf("\n\n\n\n\n\t\t\t***************** THANK YOU FOR USING OUR APP *****************");
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t  >>>>> Developed By S&N <<<<<");
			sleep(2);
			exit(0);
			break;

		case 'c':
		case 'C':
			system("cls");
			calculator_operations();
			break;

		default:
			system("cls");
			printf("<<<<<<<<<<You Have Entered Unavailble Option>>>>>>>>>>");
			printf("\n>>>>>>>>Please Enter Any One Of below Availble<<<<<<<<");
			printf("<<<<<<<<<<Options>>>>>>>>>>\n\n");
			calculator_operations_2();
		}
	}
}

//Function Definitions

void calculator_operations()
{
	printf("<<<<<<<<<<<<<<<<<<<<Welocome To C Calculator>>>>>>>>>>>>>>>>>>>>\n\n\n");

	printf("<<<<<<<<<<Press 'Q' To Quit The Program>>>>>>>>>>\n");
	printf("<<<<<<<<<<Enter 'C' To Clerar The Screen>>>>>>>>>>\n\n");

	printf("<<<<<<<<<<Enter '+' Symbol For Addition>>>>>>>>>>\n");
	printf("<<<<<<<<<<Enter '-' Symbol For Subtraction>>>>>>>>>>\n");
	printf("<<<<<<<<<<Enter '*' Symbol For Multiplication>>>>>>>>>>\n");
	printf("<<<<<<<<<<Enter '/' Symbol For Division>>>>>>>>>>\n");
	printf("<<<<<<<<<<Enter '%%' Symbol For Modulus>>>>>>>>>>\n");
	printf("<<<<<<<<<<Enter '^' Symbol For Power>>>>>>>>>>\n");
	//	printf("<<<<<<<<<<Enter '!' Symbol For Factorial>>>>>>>>>>\n");
}

void addition()
{
	system("cls");
	int n, total = 0, i;
	int number[10];
re_enter:
	printf("Number Of Elements You Want To Enter : ");
	scanf("%d", &n);
	printf("\nEnter Numbers One By One : \n");

	for (size_t i = 0; i < n; i++)
	{
		scanf("%d", &number[i]);
		total = total + number[i];
	}
	printf("\n\n");
	int k = 0;
	for (size_t i = 1; i < n; i++)
	{
		printf("%d + ", number[k]);
		k++;
	}
	printf("%d = %d\n\n", number[n - 1], total);
	calculator_operations_2();
}

void subtraction()
{
	int a, b, c = 0;
	printf("\n\nPlease Enter First Number : ");
	scanf("%d", &a);

	printf("\nPlease Enter Second Number : ");
	scanf("%d", &b);
	c = a - b;
	printf("\n%d - %d = %d\n", a, b, c);

	calculator_operations_2();
}

void multiplication()
{
	int n, total = 1, k = 0, number;
	printf("\n\nEnter The Number Of Elements You Want To Multiply : ");
	scanf("%d", &n);
	printf("\nPlese Enter %d Numbers One By One : \n", n);
	while (k < n)
	{
		scanf("%d", &number);
		total = total * number;
		k = k + 1;
	}
	printf("Multiplication Of %d Numbers = %d\n", n, total);
	calculator_operations_2();
}

void division()
{
	float a, b, d = 0;

	printf("\nPlease Enter First Number : ");
	scanf("%f", &a);

	printf("\nPlease Enter Second Number : ");
	scanf("%f", &b);
	d = a / b;
	printf("\n%.2f / %.2f = %.2f\n", a, b, d);
	calculator_operations_2();
}

void modulus()
{
	int a, b, c;
	printf("\nPlease Enter First Number : ");
	scanf("%d", &a);

	printf("\nPlease Enter Second Number : ");
	scanf("%d", &b);

	c = b % a;
	printf("\n%d / %d = %d\n", a, b, c);
}

int factorial()
{
	float a, d; //, b, mod=0

	printf("\nPlease Enter First Number : ");
	scanf("%f", &a);

	//	printf("\nPlease Enter Second Number : ");
	//	scanf("%d", &b);
	d = !a;

	printf("\nFactorial Of Enterd Numbers = %f\n", d);
}

void power()
{
	system("cls");
	int a, b, c = 1, i = 0;

	printf("Enter Base Number : ");
	scanf("%d", &a);

	printf("Enter Exponent Number : ");
	scanf("%d", &b);

	while (i < b)
	{
		c = c * a;
		i++;
	}

	printf("\n%d ^ %d = %d\n\n", a, b, c);
	calculator_operations_2();
}

void calculator_operations_2()
{

	printf("<<<<<<<<<<Press 'Q' To Quit The Program>>>>>>>>>>\n");
	printf("<<<<<<<<<<Enter 'C' To Clerar The Screen>>>>>>>>>>\n\n");

	printf("<<<<<<<<<<Enter '+' Symbol For Addition>>>>>>>>>>\n");
	printf("<<<<<<<<<<Enter '-' Symbol For Subtraction>>>>>>>>>>\n");
	printf("<<<<<<<<<<Enter '*' Symbol For Multiplication>>>>>>>>>>\n");
	printf("<<<<<<<<<<Enter '/' Symbol For Division>>>>>>>>>>\n");
	printf("<<<<<<<<<<Enter '%%' Symbol For Modulus>>>>>>>>>>\n");
	printf("<<<<<<<<<<Enter '^' Symbol For Power>>>>>>>>>>\n");
	//	printf("<<<<<<<<<<Enter '!' Symbol For Factorial>>>>>>>>>>\n");
}
