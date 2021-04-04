#include <stdio.h>
#include <conio.h>
#include <unistd.h>

void retry();
void ByeBye();
void Quadrant_Finder();

char *Quadrant_No = "";
int x, y;
char r,c;

int main()
{
	printf("Input The Value Of 'X' : ");
	scanf("%d", &x);

	printf("Input The Value Of 'Y' : ");
	scanf("%d", &y);

	Quadrant_Finder(x, y);

	printf(Quadrant_No);

    retry();
}

void Quadrant_Finder(int x_axis, int y_axis)
{
	if (x_axis == 0)
	{
		if (y_axis == 0)
			Quadrant_No = "\n The Point Lies On The Origin. \n\n";

		else if (y_axis > 0)
			Quadrant_No = "\n The Point Lies on the Positive Y-axis. \n\n";

		else
			Quadrant_No = "\n The Point Lies on the Negative Y-axis. \n\n";
	}
	else if (y_axis == 0)
	{
		if (x_axis == 0)
			Quadrant_No = "\n The Point Lies On The Origin. \n\n";

		else if (x_axis > 0)
			Quadrant_No = "\n The Point Lies on the Positive X-axis. \n\n";

		else
			Quadrant_No = "\n The Point Lies on the Negative X-axis. \n\n";
	}

	else
	{
		if (x > 0)
		{
			if (y > 0)
				Quadrant_No = "\n The Point Lies on the 1st Quardant. \n\n";

			if (y < 0)
				Quadrant_No = "\n The Point Lies on the 4th Quardant. \n\n";
		}

		if (x < 0)
		{
			if (y > 0)
				Quadrant_No = "\n The Point Lies on the 2nd Quardant. \n\n";

			if (y < 0)
				Quadrant_No = "\n The Point Lies on the 3rd Quardant. \n\n";
		}
	}
}

void retry()
{
	printf("\nEnter 'Y' For Yes And 'N' For No.");
	printf("\nDo You Want To Put The Values Again?\n\n");
	r = getch();
	switch (r)
	{
	case 'y':
	case 'Y':
		main();
		break;

	case 'n':
	case 'N':
		ByeBye();
		break;

	default:
		printf("\n\nThe Character You Enter Is Invalid..!!!!");
		printf("\n$$$Please Enter The Character Again$$$");
		break;
	}
}

void ByeBye()
{
	printf("\n\nQuiting The Program ");
	for (int i = 0; i < 3; i++)
	{
		sleep(1);
		printf(".");
	}
	sleep(1);
	printf("\n\n\n>>>>> Developed By MenTaL-Tech <<<<<");
	printf("\n\n\n\t\t\t***************** THANK YOU FOR USING OUR APP *****************");
	sleep(1);
}

