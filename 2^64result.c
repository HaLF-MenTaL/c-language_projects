#include <stdio.h>
#include <conio.h>
#include <unistd.h>
int main()
{
	printf("\n\t\tPRESS ANY KEY TO START ACTION\n\n");
	getch();
	double x = 1;
	int y = 1;
	for (int i = 0; i < 64; i++)
	{
		x = x * 2;
		printf("    2^%d = %.0lf \n\n", y, x);
		y++;
	}

	printf("\n\t>>>>> Developed By MenTaL-Tech <<<<<");
	printf("\n\n\n\t\t\t\t***************** THANK YOU FOR USING OUR APP *****************");
	printf("\n\n\t\t\t\t\t\tPRESS ANY KEY TO CLOSE");
	getch();
	return 0;
}
