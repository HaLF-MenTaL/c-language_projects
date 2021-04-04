#include <stdio.h>

float kms;
float miles;
float inches;
float feet;
float cms;
float pounds;
float kgs;
float metres;

// function for converting kilometeres into miles
float kms_to_miles()
{
    printf("\nEnter kms to convert into miles >> ");
    scanf("%f", &kms);
    printf("%.2f kms are equal to %f miles \n\n", kms, kms / 1.609344);
}

// function for converting kilometeres into miles
float miles_to_kms()
{
    printf("\nEnter miles to convert into kms >> ");
    scanf("%f", &miles);
    printf("%.2f miles are equal to %f kms \n\n", miles, miles / 0.621371);
}

// function for converting kilometeres into miles
float inches_to_feet()
{
    printf("\nEnter inches to convert into feet >> ");
    scanf("%f", &inches);
    printf("%.2f inches are equal to %f feet \n\n", inches, inches / 12);
}

// function for converting kilometeres into miles
float feet_to_inches()
{
    printf("\nEnter feet to convert into inches >> ");
    scanf("%f", &feet);
    printf("%.2f feet are equal to %f inches \n\n", feet, feet / 0.083333);
}

// function for converting kilometeres into miles
float cms_to_inches()
{
    printf("\nEnter cms to convert into inches >> ");
    scanf("%f", &cms);
    printf("%.2f cms are equal to %f inches \n\n", cms, cms / 2.54);
}

// function for converting kilometeres into miles
float inches_to_cms()
{
    printf("\nEnter cms to convert into inches >> ");
    scanf("%f", &inches);
    printf("%.2f cms are equal to %f inches \n\n", inches, inches / 0.393701);
}

// function for converting kilometeres into miles
float pounds_to_kgs()
{
    printf("\nEnter pounds to convert into kgs >> ");
    scanf("%f", &pounds);
    printf("%.2f pounds are equal to %f kgs \n\n", pounds, pounds / 2.204623);
}

// function for converting kilometeres into miles
float kgs_to_pounds()
{
    printf("\nEnter kgs to convert into pounds >> ");
    scanf("%f", &kgs);
    printf("%.2f kgs are equal to %f pounds \n\n", kgs, kgs / 0.453592);
}

// function for converting kilometeres into miles
float inches_to_metres()
{
    printf("\nEnter inches to convert into metres >> ");
    scanf("%f", &inches);
    printf("%.2f inches are equal to %f metres \n\n", inches, inches / 39.37008);
}

// function for converting kilometeres into miles
float metres_to_inches()
{
    printf("\nEnter metres to convert into inches >> ");
    scanf("%f", &metres);
    printf("%.2f metres are equal to %f inches \n\n", metres, metres / 0.0254);
}

int main()
{
top:

    printf("1 - kms to miles\n");
    printf("2 - miles to kms\n");
    printf("3 - inches to feet\n");
    printf("4 - feet to inches\n");
    printf("5 - cms to inches\n");
    printf("6 - inches to cms\n");
    printf("7 - pounds to kgs\n");
    printf("8 - kgs to pounds\n");
    printf("9 - inches to metres\n");
    printf("10 - metres to inches\n");
    int selection;
    printf("Select >> ");
    scanf("%d", &selection);

    if (selection == 1)
    {
        kms_to_miles();
        goto top;
    }
    else if (selection == 2)
    {
        miles_to_kms();
        goto top;
    }
    if (selection == 3)
    {
        inches_to_feet();
        goto top;
    }
    else if (selection == 4)
    {
        feet_to_inches();
        goto top;
    }
    else if (selection == 5)
    {
        cms_to_inches();
        goto top;
    }
    else if (selection == 6)
    {
        inches_to_cms();
        goto top;
    }
    else if (selection == 7)
    {
        pounds_to_kgs();
        goto top;
    }
    if (selection == 8)
    {
        kgs_to_pounds();
        goto top;
    }
    else if (selection == 9)
    {
        inches_to_metres();
        goto top;
    }
    else if (selection == 10)
    {
        metres_to_inches();
        goto top;
    }
    else
    {
        printf("You Have Selected An Invalid Option.\n");
        goto top;
    }
}