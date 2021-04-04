#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

float n1, n2, n3, result;

void Area();
void CharPrint();
void Two_Dim();

int main()
{
    /*  
     ____                                                                                                  ____
	|   /         ___   ____              ___               ___                      _______    _     ___  \   |
    |  /     ^   |___) |       ^         /      ^   |      /    |      | |       ^      |     /   \  |___)  \  |
    | |     /_\  | \   |----  /_\       |      /_\  |     |     |      | |      /_\     |    |     | | \     | |
    |  \   /   \ |  \  |____ /   \       \___ /   \ |____  \___  \____/  |____ /   \    |     \ _ /  |  \   /  |
	|___\                                                                                                  /___|
    */

    char input;

    while (1)
    {
        system("cls");
        printf("\n\t ____                                                                                                 ____\n\t|   /         ___   ____              ___               ___                     _______    _     ___  \\   |\n\t|  /     ^   |___) |       ^         /      ^   |      /    |     | |       ^      |     /   \\  |___)  \\  |\n\t| |     /_\\  | \\   |----  /_\\       |      /_\\  |     |     |     | |      /_\\     |    |     | | \\     | |\n\t|  \\   /   \\ |  \\  |____ /   \\       \\___ /   \\ |____  \\___  \\___/  |____ /   \\    |     \\ _ /  |  \\   /  |\n\t|___\\                                                                                                 /___|");

        printf("\n\n\tChoose Shape Types :\n\t\t1. Two-Demensional (2D) / Plane Shapes Shapes\n\t\t2. Three-Demensional (3D) / Solid Shapes");
        input = getch();
        switch (input)
        {
        case '1':
            Two_Dim();
            break;

        default:
            printf("\a\n\n****Please Select Valid Option...****\n\n");
            break;
        }
    }
    return 0;
}

void Area()
{
    CharPrint();
    printf("\n\t Area is  | %.2f |", result);
    CharPrint();
    printf("\n");
}

void Two_Dim()
{
    system("cls");
    while (1)
    {
        char input;
        printf("\n\t1. Area Of Triangle\n\t2. Area of Square\n\t3. Area of Rectangle\n\t4. Area Of Parallelogram\n\t5. Area of Trapezium (UK) / Trapezoid (US)\n\t6. Area of Cirle\n\t7. Area of Ellipse\n\t8. Area of Sector\n>>");
        input = getch();
        switch (input)
        {
        case '1':
            printf("\n\tEnter the Base of a Triangle  >> ");
            scanf("%f", &n1);
            printf("\tEnter the Height of a Triangle  >> ");
            scanf("%f", &n2);
            result = (n1 * n2) / 2;
            printf("%f", result);
            Area();
            break;

        case '2':
            printf("\n\tEnter the Length of a Side of the Square  >> ");
            scanf("%f", &n1);
            result = n1 * n1;
            Area();
            break;

        case '3':
            printf("\n\tEnter the Height of a Rectangle  >> ");
            scanf("%f", &n1);
            printf("\tEnter the Width of a Rectangle >> ");
            scanf("%f", &n2);
            result = n1 * n2;
            Area();
            break;

        case '4':
            printf("\n\tEnter the Base of a Parallelogram  >> ");
            scanf("%f", &n1);
            printf("\tEnter the Height of a Parallelogram  >> ");
            scanf("%f", &n2);
            result = n1 * n2;
            Area();
            break;

        case '5':
            printf("\n\tEnter the First Base of a Trapezium / Trapezoid  >> ");
            scanf("%f", &n1);
            printf("\tEnter the Second Base of a Trapezium / Trapezoid  >> ");
            scanf("%f", &n2);
            printf("\tEnter the Height of a Trapezium / Trapezoid  >> ");
            scanf("%f", &n3);
            result = ((n1 + n2) / 2) * n3;
            Area();
            break;

        case '6':
            printf("\n\tEnter the Radius of a Circle  >> ");
            scanf("%f", &n1);
            result = 3.141593 * (n1 * n1);
            Area();
            break;

        case '7':
            printf("\n\tEnter the Major Axis of an Ellipse  >> ");
            scanf("%f", &n1);
            printf("\tEnter the Minor Axis of an Ellipse  >> ");
            scanf("%f", &n2);
            result = 3.141593 * n1 * n2;
            Area();
            break;

        case '8':
            printf("\n\tEnter the Radius of a Sector  >> ");
            scanf("%f", &n1);
            printf("\tEnter the Angle (in Radians) of a Sector  >> ");
            scanf("%f", &n2);
            result = ((n1 * n1) * n2) / 2;
            Area();
            break;

        default:
            printf("\a\n\n****Please Select Valid Option...****\n\n");
            break;
        }
    }
}

void CharPrint()
{
    printf("\n\t\t  +");
    if (result <= 9 && result >= 0)
    {
        for (int i = 0; i < 6; i++)
        {
            printf("-");
        }
    }
    else if (result >= 10 && result <= 99)
    {
        for (int i = 0; i < 7; i++)
        {
            printf("-");
        }
    }
    else if (result >= 100 && result <= 999)
    {
        for (int i = 0; i < 8; i++)
        {
            printf("-");
        }
    }
    else if (result >= 1000 && result <= 9999)
    {
        for (int i = 0; i < 9; i++)
        {
            printf("-");
        }
    }
    else if (result >= 10000 && result <= 99999)
    {
        for (int i = 0; i < 10; i++)
        {
            printf("-");
        }
    }
    else if (result >= 100000 && result <= 999999)
    {
        for (int i = 0; i < 11; i++)
        {
            printf("-");
        }
    }
    else if (result >= 1000000 && result <= 9999999)
    {
        for (int i = 0; i < 12; i++)
        {
            printf("-");
        }
    }
    else if (result >= 1000000 && result <= 9999999)
    {
        for (int i = 0; i < 13; i++)
        {
            printf("-");
        }
    }
    else if (result >= 10000000 && result <= 99999999)
    {
        for (int i = 0; i < 14; i++)
        {
            printf("-");
        }
    }
    else if (result >= 100000000 && result <= 999999999)
    {
        for (int i = 0; i < 14; i++)
        {
            printf("-");
        }
    }

    printf("+");
}