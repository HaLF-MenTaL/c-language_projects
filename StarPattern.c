#include <stdio.h>
#include <conio.h>
int num;
void Forward_Star_Pattern();
void Reverse_Star_Pattern();
void Forward_Reversed_Star_Pattern();
void Reversed_Forward_Star_Pattern();

int main()
{
    char r;

    printf("Selct The Opeation You Want To Do.\n\t1. Draw Forward Star Pattern.\n\t2. Draw Reverse Star Pattern.\n\t3. Draw Forward-Reversed Star Pattern.\n\t4. Draw Reversed-Forward Star Pattern.\n\tPress \"Q\" For Exit.\n>>");
    r = getch();

    printf("\n\nEnter The Number Of Rows = ");
    scanf("%d", &num);

    switch (r)
    {
    case '1':
        Forward_Star_Pattern();
        break;

    case '2':
        Reverse_Star_Pattern();
        break;

    case '3':
        Forward_Reversed_Star_Pattern();
        break;

    case '4':
        Reversed_Forward_Star_Pattern();
        break;

    case 'q':
    case 'Q':
        // quit();
        break;

    default:
        break;
    }

    return 0;
}

void Forward_Star_Pattern()
{

    for (int i = 0; i < num; i++) // this for loop prints number of rows
    {
        for (int j = 0; j <= i; j++) //  this loop prints number of characte in each row
        {
            printf("*");
        }

        printf("\n");
    }
}

void Reverse_Star_Pattern()
{

    for (int i = 0; i < num; i++) // this for loop prints number of rows
    {
        for (int j = num; j >= i + 1; j--) //  this loop prints number of characte in each row
        {
            printf("*");
        }
        printf("\n");
    }
}

void Forward_Reversed_Star_Pattern()
{
    for (int i = 0; i <= num / 2; i++) // this for loop prints number of rows
    {
        for (int j = 0; j <= i; j++) //  this loop prints number of characte in each row
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < num / 2; i++) // this for loop prints number of rows
    {
        for (int j = num / 2; j > i; j--) //  this loop prints number of characte in each row
        {
            printf("*");
        }
        printf("\n");
    }
}

void Reversed_Forward_Star_Pattern()
{
    for (int i = -1; i < num / 2; i++) // this for loop prints number of rows
    {
        for (int j = num / 2; j > i; j--) //  this loop prints number of characte in each row
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < num / 2; i++) // this for loop prints number of rows
    {
        for (int j = 0; j <= i + 1; j++) //  this loop prints number of characte in each row
        {
            printf("*");
        }
        printf("\n");
    }
}