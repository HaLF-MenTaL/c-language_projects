#include <stdio.h>
#include <conio.h>
int numarray[50];
int count, total = 0;
void sum()
{
    count = 0;
    printf("\n\nHow Many Numbers You Want To Sum = ");
    scanf("%d", &count);

    printf("\nEnter The Values One By One : \n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &numarray[i]);
        total = total + numarray[i];
    }

    printf("\nSUM : ");
    printf("\n     %d", numarray[0]);

    for (int i = 1; i < count; i++)
    {
        printf(" + %d", numarray[i]);
    }
    printf(" = %d\n\n", total);
}

void average()
{
    if (count != 0)
    {
        printf("\n\nThe Average of %d", numarray[0]);

        for (int i = 1; i < count; i++)
        {
            printf(", %d", numarray[i]);
        }
        printf(" is %d\n\n", total / count);
    }
    else
    {
        printf("\n\n***** You Need Sum of Numbers First To Find Avearge *****\n\n");
    }
}

int quit()
{
    printf("\n\n  Quiting The Program ");
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

int main()
{
    char opt;
    printf("1. Find Sum.\n2. Find Average.\nPress \"Q\" For Quit.\n >> ");
    opt = getch();
    while (1)
    {
        switch (opt)
        {
        case '1':
            sum();
            main();
            break;

        case '2':
            average();
            main();
            break;

        case 'Q':
        case 'q':
            quit();
            goto end;
            break;

        default:
            printf("\n\n******The Option You Have Selected is Invalid.******\n\n");
            break;
        }
    }
end:
    return 0;
}