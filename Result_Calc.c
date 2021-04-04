#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define class_selection "<<<<The Result Of Which Class You Want To Check \"8 or 9 or 10\">>>>\nPress \"E\" For 8 Or \"N\" For 9 Or \"T\" For 10  :  "

#define options_label "\nPress \"O\" to Check Your Obtained Marks.\nPress \"P\" To Check Your Percentage_Function.\nPress \"M\" For More Options.\nPress \"Q\" To Quit.\nSelection << "

#define more_options_label "\nPress \"G\" To Check Your Grade.\nPress \"R\" To Print Your Result.\nPress \"Q\" To Quit.\nPress \"C\" To Go Back To The Class Selection.\nPress \"B\" To Go Back.\nSelection << "

#define invalid_input "<<<<<<<<<<The Option You Selected Is Invalid>>>>>>>>>>\n<<<<<<<<<<<<Please Select The Valid Option>>>>>>>>>>>>\n\n\n"

#define marks_too_much "\nThe Marks You Had Entered Are Too Much\nPlease Enter The Valid Marks\n"
int n;
char class_sel, subject_sel;
char Student_Name[26], Father_Name[26], D_O_B[12], Roll_No[12], School_Name[100], Elective_Subject1[30], Elective_Subject2[30];

float Obtained_Marks, Percentage, Comp_Total = 495, Bio_Total = 505, Arts_Total = 550, Eight_Total = 500;
float perSubject1, perSubject2, perSubject3, perSubject4, perSubject5, perSubject6, perSubject7, perSubject8;
float Subject1, Subject2, Subject3, Subject4, Subject5, Subject6, Subject7, Subject8;
void Eight_Class();
void Nine_Class();
void Nine_Arts_Class();
void Nine_Bio_Class();
void Nine_Comp_Class();
void Student_Info();
void Subject_Marks(int Subject1_Total, int Subject2_Total, int Subject3_Total, int Subject4_Total, int Subject5_Total, int Subject6_Total, int Subject7_Total, int Subject8_Total);
void options_function();
void more_options_function();
void Result_Card(int Total_Marks, int Class, char Subject1_Name[21], int Subject1_Marks, char Subject2_Name[21], int Subject2_Marks, char Subject3_Name[21], int Subject3_Marks, char Subject4_Name[21], int Subject4_Marks, char Subject5_Name[21], int Subject5_Marks, char Subject6_Name[21], int Subject6_Marks, char Subject7_Name[21], int Subject7_Marks, char Subject8_Name[21], int Subject8_Marks);
void Grade(float Obtained_Percentage);
float Percentage_Function(float Obtained_Marks, float Total_Marks);
void Result_Status(float Percentage_Function);
void Remarks(float Percentage_Function);
void Reset();

int main()
{
    printf("\n%s", class_selection);
    while (1)
    {
        class_sel = getche();
        switch (class_sel)
        {
        case 'e':
        case 'E':
            Eight_Class();
            break;

        case 'n':
        case 'N':
            Nine_Class();
            break;

            // case 't':
            // case 'T':
            //     // ten_class();
            //     break;

        default:
            system("cls");
            printf("%s%s", invalid_input, class_selection);
        }
    }
}

void Eight_Class()
{
    printf("\n\nYou Have Selected Class 8.");
    Student_Info();
    Subject_Marks(100, 100, 100, 100, 100, 0, 0, 0);

    Obtained_Marks = Subject1 + Subject2 + Subject3 + Subject4 + Subject5;
    Percentage = Obtained_Marks / Eight_Total * 100;
    perSubject1 = Subject1, perSubject2 = Subject2, perSubject3 = Subject3, perSubject4 = Subject4, perSubject5 = Subject5;
    options_function();
    system("cls");
}

void Nine_Class()
{

    printf("\n\nYou Have Selected Class 9.\n");

    printf("\nPress \"A\" For Arts");
    printf("\nPress \"B\" For Subject6");
    printf("\nPress \"C\" For Computer Science");
    printf("\nSelection >> ");

    while (1)
    {
        subject_sel = getche();
        switch (subject_sel)
        {
        case 'a':
        case 'A':
            Nine_Arts_Class();
            break;

        case 'b':
        case 'B':
            Nine_Bio_Class();
            break;

        case 'c':
        case 'C':
            Nine_Comp_Class();
            break;

        default:
            system("cls");
            printf("%s", invalid_input);
            Nine_Class();
            break;
        }
    }
}

void Nine_Bio_Class()
{
    printf("\n\nYou Have Selected Biology Subject.");

    Student_Info();
    Subject_Marks(75, 75, 50, 75, 50, 60, 60, 60);

    Obtained_Marks = Subject1 + Subject2 + Subject3 + Subject4 + Subject5 + Subject6 + Subject7 + Subject8;
    Percentage = Obtained_Marks / Bio_Total * 100;
    perSubject1 = Subject1 / 75 * 100, perSubject2 = Subject2 / 75 * 100, perSubject3 = Subject3 / 50 * 100, perSubject4 = Subject4 / 75 * 100, perSubject5 = Subject5 / 50 * 100, perSubject6 = Subject6 / 60 * 100, perSubject7 = Subject7 / 60 * 100, perSubject8 = Subject8 / 60 * 100;

    options_function();
    system("cls");
}

void Nine_Comp_Class()
{
    printf("\n\nYou Have Selected Computer Subject.");

    Student_Info();
    Subject_Marks(75, 75, 50, 75, 50, 50, 60, 60);

    Obtained_Marks = Subject1 + Subject2 + Subject3 + Subject4 + Subject5 + Subject6 + Subject7 + Subject8;
    Percentage = Obtained_Marks / Comp_Total * 100;
    perSubject1 = Subject1 / 75 * 100, perSubject2 = Subject2 / 75 * 100, perSubject3 = Subject3 / 50 * 100, perSubject4 = Subject4 / 75 * 100, perSubject5 = Subject5 / 50 * 100, perSubject6 = Subject6 / 50 * 100, perSubject7 = Subject7 / 60 * 100, perSubject8 = Subject8 / 60 * 100;

    options_function();
    system("cls");
}

void Nine_Arts_Class()
{
    printf("\n\nYou Have Selected Arts Subject.");

    printf("\n\nEnter Your Elective Subject 1 : ");
    fgets(Elective_Subject1, 26, stdin);
    Elective_Subject1[strlen(Elective_Subject1) - 1] = '\0';

    printf("Enter Your Elective Subject 2 : ");
    fgets(Elective_Subject2, 26, stdin);
    Elective_Subject2[strlen(Elective_Subject2) - 1] = '\0';

    Student_Info();
    Subject_Marks(75, 75, 50, 75, 50, 75, 75, 75);

    Obtained_Marks = Subject1 + Subject2 + Subject3 + Subject4 + Subject5 + Subject6 + Subject7 + Subject8;
    Percentage = Obtained_Marks / Arts_Total * 100;
    perSubject1 = Subject1 / 75 * 100, perSubject2 = Subject2 / 75 * 100, perSubject3 = Subject3 / 50 * 100, perSubject4 = Subject4 / 75 * 100, perSubject5 = Subject5 / 50 * 100, perSubject6 = Subject6 / 75 * 100, perSubject7 = Subject7 / 75 * 100, perSubject8 = Subject8 / 75 * 100;

    options_function();
    system("cls");
}

void Student_Info()
{
    printf("\nEnter Your Roll No. [XX-XXX-XXX] : ");
    fgets(Roll_No, 12, stdin);
    Roll_No[strlen(Roll_No) - 1] = '\0';

    printf("Enter Your Date of Birth [DD-MM-YYYY] : ");
    fgets(D_O_B, 12, stdin);
    D_O_B[strlen(D_O_B) - 1] = '\0';

    printf("Enter Your Name : ");
    fgets(Student_Name, 26, stdin);
    Student_Name[strlen(Student_Name) - 1] = '\0';

    printf("Enter Your Father Name : ");
    fgets(Father_Name, 26, stdin);
    Father_Name[strlen(Father_Name) - 1] = '\0';

    printf("Enter Your School Name : ");
    fgets(School_Name, 100, stdin);
    School_Name[strlen(School_Name) - 1] = '\0';
}

void Subject_Marks(int Subject1_Total, int Subject2_Total, int Subject3_Total, int Subject4_Total, int Subject5_Total, int Subject6_Total, int Subject7_Total, int Subject8_Total)
{
    do
    {
        printf("\nEnter The Marks Of English : ");
        scanf("%f", &Subject1);
        if (Subject1 > Subject1_Total)
        {
            printf("%s", marks_too_much);
        }
    } while (Subject1 > Subject1_Total);

    do
    {
        printf("Enter The Marks Of Urdu : ");
        scanf("%f", &Subject2);
        if (Subject2 > Subject2_Total)
        {
            printf("%s", marks_too_much);
        }
    } while (Subject2 > Subject2_Total);

    do
    {
        if (class_sel == 'e' || class_sel == 'E')
        {
            printf("Enter The Marks Of Islamiat : ");
        }
        else
        {
            printf("Enter The Marks Of Islamiat (Compulsory) : ");
        }

        scanf("%f", &Subject3);
        if (Subject3 > Subject3_Total)
        {
            printf("%s", marks_too_much);
        }
    } while (Subject3 > Subject3_Total);

    do
    {
        if (subject_sel == 'a' || subject_sel == 'A')
        {
            printf("Enter The Marks Of General Mathematics: ");
        }
        else
        {
            printf("Enter The Marks Of Mathematics : ");
        }
        scanf("%f", &Subject4);
        if (Subject4 > Subject4_Total)
        {
            printf("%s", marks_too_much);
        }
    } while (Subject4 > Subject4_Total);

    do
    {
        if (class_sel == 'e' || class_sel == 'E')
        {
            printf("Enter The Marks Of General Science : ");
        }
        else
        {
            printf("Enter The Marks Of Pakistan Studies : ");
        }
        scanf("%f", &Subject5);
        if (Subject5 > Subject5_Total)
        {
            printf("%s", marks_too_much);
        }
    } while (Subject5 > Subject5_Total);

    if (class_sel == 'n' || class_sel == 'N')
    {
        do
        {
            if (subject_sel == 'a' || subject_sel == 'A')
            {
                printf("Enter The Marks Of General Science : ");
            }
            else if (subject_sel == 'b' || subject_sel == 'B')
            {
                printf("Enter The Marks Of Biology : ");
            }
            else if (subject_sel == 'c' || subject_sel == 'C')
            {
                printf("Enter The Marks Of Computer Science : ");
            }
            scanf("%f", &Subject6);
            if (Subject6 > Subject6_Total)
            {
                printf("%s", marks_too_much);
            }
        } while (Subject6 > Subject6_Total);
    }

    if (class_sel == 'n' || class_sel == 'N')
    {
        do
        {
            if (subject_sel == 'a' || subject_sel == 'A')
            {
                printf("Enter The Marks Of %s : ", Elective_Subject1);
            }
            else if (subject_sel != 'a' || subject_sel != 'A')
            {
                printf("Enter The Marks Of Physics : ");
            }
            scanf("%f", &Subject7);
            if (Subject7 > Subject7_Total)
            {
                printf("%s", marks_too_much);
            }
        } while (Subject7 > Subject7_Total);
    }

    if (class_sel == 'n' || class_sel == 'N')
    {
        do
        {
            if (subject_sel == 'a' || subject_sel == 'A')
            {
                printf("Enter The Marks Of %s : ", Elective_Subject2);
            }
            else if (subject_sel != 'a' || subject_sel != 'A')
            {
                printf("Enter The Marks Of Chemistry : ");
            }
            scanf("%f", &Subject8);
            if (Subject8 > Subject8_Total)
            {
                printf("%s", marks_too_much);
            }
        } while (Subject8 > Subject8_Total);
    }
}

void Result_Card(int Total_Marks, int Class, char Subject1_Name[21], int Subject1_Marks, char Subject2_Name[21], int Subject2_Marks, char Subject3_Name[21], int Subject3_Marks, char Subject4_Name[21], int Subject4_Marks, char Subject5_Name[21], int Subject5_Marks, char Subject6_Name[21], int Subject6_Marks, char Subject7_Name[21], int Subject7_Marks, char Subject8_Name[21], int Subject8_Marks)
{
    system("cls");
    printf("\n\nYou Have Selected To Print Result.\n\n\nRoll No. : %-10s\t\t\t\tDate Of Birth : %-10s\nStudent Name : %-33sFather Name : %s\nSchool Name : %s\nClass : %d", Roll_No, D_O_B, Student_Name, Father_Name, School_Name, Class);

    if (Class == 8)
    {
        printf("\n   +-------------------------+-------------+--------------+---------+-----------------+------------------+");
        printf("\n   |  Subject Name           |  Max marks  |  Obt. Marks  |  Grade  |  Result Status  |      Remarks     |");
        printf("\n   +-------------------------+-------------+--------------+---------+-----------------+------------------+");
    }
    else
    {
        printf("\n   +-------------------------+-------------+--------------+--------------+---------+-----------------+------------------+");
        printf("\n   |  Subject Name           |  Max marks  |  Obt. Marks  |  %%age Score  |  Grade  |  Result Status  |      Remarks     |");
        printf("\n   +-------------------------+-------------+--------------+--------------+---------+-----------------+------------------+");
    }
    //             PRINTING Subject1 RESULT

    if (Class == 8)
    {
        printf("\n   |  %-21s  |     %d     |     %3.0f      |    ", Subject1_Name, Subject1_Marks, Subject1);
    }
    else
    {
        printf("\n   |  %-21s  |     %d      |     %3.0f      |    %6.2f    |    ", Subject1_Name, Subject1_Marks, Subject1, perSubject1);
    }
    n = 0;
    Grade(perSubject1);
    Result_Status(perSubject1);
    Remarks(perSubject1);

    //             PRINTING Subject2 RESULT

    if (Class == 8)
    {
        printf("\n   |  %-21s  |     %d     |     %3.0f      |    ", Subject2_Name, Subject2_Marks, Subject2);
    }
    else
    {
        printf("\n   |  %-21s  |     %d      |     %3.0f      |    %6.2f    |    ", Subject2_Name, Subject2_Marks, Subject2, perSubject2);
    }
    Grade(perSubject2);
    Result_Status(perSubject2);
    Remarks(perSubject2);

    //             PRINTING Subject3 RESULT

    if (Class == 8)
    {
        printf("\n   |  %-21s  |     %d     |     %3.0f      |    ", Subject3_Name, Subject3_Marks, Subject3);
    }
    else
    {
        printf("\n   |  %-21s  |     %d      |     %3.0f      |    %6.2f    |    ", Subject3_Name, Subject3_Marks, Subject3, perSubject3);
    }
    Grade(perSubject3);
    Result_Status(perSubject3);
    Remarks(perSubject3);

    //             PRINTING Subject4 RESULT

    if (Class == 8)
    {
        printf("\n   |  %-21s  |     %d     |     %3.0f      |    ", Subject4_Name, Subject4_Marks, Subject4);
    }
    else
    {
        printf("\n   |  %-21s  |     %d      |     %3.0f      |    %6.2f    |    ", Subject4_Name, Subject4_Marks, Subject4, perSubject4);
    }
    Grade(perSubject4);
    Result_Status(perSubject4);
    Remarks(perSubject4);

    //             PRINTING Subject5 RESULT

    if (Class == 8)
    {
        printf("\n   |  %-21s  |     %d     |     %3.0f      |    ", Subject5_Name, Subject5_Marks, Subject5);
    }
    else
    {
        printf("\n   |  %-21s  |     %d      |     %3.0f      |    %6.2f    |    ", Subject5_Name, Subject5_Marks, Subject5, perSubject5);
    }
    Grade(perSubject5);
    Result_Status(perSubject5);
    Remarks(perSubject5);

    if (class_sel == 'n' || class_sel == 'N')
    {
        //         PRINTING subject6 RESULT

        printf("\n   |  %-21s  |     %d      |     %3.0f      |    %6.2f    |    ", Subject6_Name, Subject6_Marks, Subject6, perSubject6);
        Grade(perSubject6);
        Result_Status(perSubject6);
        Remarks(perSubject6);

        //         PRINTING Subject7 RESULT

        printf("\n   |  %-21s  |     %d      |     %3.0f      |    %6.2f    |    ", Subject7_Name, Subject7_Marks, Subject7, perSubject7);
        Grade(perSubject7);
        Result_Status(perSubject7);
        Remarks(perSubject7);

        //         PRINTING Subject8 RESULT

        printf("\n   |  %-21s  |     %d      |     %3.0f      |    %6.2f    |    ", Subject8_Name, Subject8_Marks, Subject8, perSubject8);
        Grade(perSubject8);
        Result_Status(perSubject8);
        Remarks(perSubject8);
    }

    //             PRINTING TOTAL

    if (Class == 8)
    {
        printf("\n   +-------------------------+-------------+--------------+---------+-----------------+------------------+");
        printf("\n   |  Total   %%age = %5.2f   |     %d     |     %3.0f      |    ", Percentage, Total_Marks, Obtained_Marks, Percentage);
    }
    else
    {
        printf("\n   +-------------------------+-------------+--------------+--------------+---------+-----------------+------------------+");
        printf("\n   |  Total                  |    %d      |     %3.0f      |    %6.2f    |    ", Total_Marks, Obtained_Marks, Percentage);
    }
    Grade(Percentage);
    Result_Status(Percentage);
    Remarks(Percentage);
    if (Class == 8)
    {
        printf("\n   +-------------------------+-------------+--------------+---------+-----------------+------------------+");
    }
    else
    {
        printf("\n   +-------------------------+-------------+--------------+--------------+---------+-----------------+------------------+");
    }
    printf("\n\n\n\n\n");
}

void options_function()
{
    char option19b;
    printf("%s", options_label);
    option19b = getche();
    printf(" >>");

    if (option19b == 'o' || option19b == 'O')
    {
        system("cls");
        printf("\n\nYou Have Selected To Check Your Obtained Marks."); // to Print Obtained Marks Option

        if (subject_sel == 'b' || subject_sel == 'B')
        {
            printf("\n\n\n\t\t\t\aYou Have Obtained \"%.0f\" Marks Out of \"%.0f\".\n\n", Obtained_Marks, Bio_Total);
        }
        else if (subject_sel == 'c' || subject_sel == 'C')
        {
            printf("\n\n\n\t\t\t\aYou Have Obtained \"%.0f\" Marks Out of \"%.0f\".\n\n", Obtained_Marks, Comp_Total);
        }
        else if (subject_sel == 'a' || subject_sel == 'A')
        {
            printf("\n\n\n\t\t\t\aYou Have Obtained \"%.0f\" Marks Out of \"%.0f\".\n\n", Obtained_Marks, Arts_Total);
        }
        else if (class_sel == 'e' || class_sel == 'E')
        {
            printf("\n\n\n\t\t\t\aYou Have Obtained \"%.0f\" Marks Out Of \"%.0f\".\n\n", Obtained_Marks, Eight_Total);
        }

        options_function();
    }
    else if (option19b == 'q' || option19b == 'Q')
    {
        printf("\n\nYou Have Selected Quit Option."); //Quit Option Selection
        sleep(3);
        exit(0);
    }
    else if (option19b == 'p' || option19b == 'P')
    {
        system("cls");
        printf("\n\nYou Have Selected To Check Your Percentage.\n\n\n\t\t\t\aYour Percentage is \"%.2f%%\".\n\n", Percentage);
        options_function();
    }
    else if (option19b == 'm' || option19b == 'M')
    {
        system("cls");
        more_options_function();
    }
    else
    {
        system("cls");
        printf("%s", invalid_input);
        options_function();
    }
}

void more_options_function()
{
    printf("\n\nYou Have Selected More Options.\n");

    char option29b;
    printf("%s", more_options_label);
    option29b = getche();
    printf(" >>");
    if (option29b == 'q' || option29b == 'Q')
    {
        system("cls");
        printf("\n\nYou Have Selected Quit Option."); //Quit Option Selection
        sleep(3);
        exit(0);
    }

    else if (option29b == 'c' || option29b == 'C')
    {
        system("cls");
        printf("You Have Selected Class Selection Option.\n\n");
        Reset();
        main();
    }

    else if (option29b == 'b' || option29b == 'B')
    {
        system("cls");
        printf("\n\nYou Have Selected Back Option.\n"); //  Back Option Selection
        options_function();
    }
    else if (option29b == 'g' || option29b == 'G')
    {
        system("cls");
        printf("\n\nYou Have Selected To Check Grade.\n\n"); //To Print Grade Selection
        n = 1;
        Grade(Percentage);
        more_options_function();
    }
    else if (option29b == 'r' || option29b == 'R')
    {
        if (subject_sel == 'b' || subject_sel == 'B')
        {
            Result_Card(Bio_Total, 9, "English", 75, "Urdu", 75, "Islamiat (Compulsory)", 50, "Mathematatics", 75, "Pakistan Studies", 50, "Biology", 60, "Physics", 60, "Chemistry", 60);
            more_options_function();
        }
        else if (subject_sel == 'c' || subject_sel == 'C')
        {
            Result_Card(Comp_Total, 9, "English", 75, "Urdu", 75, "Islamiat (Compulsory)", 50, "Mathematatics", 75, "Pakistan Studies", 50, "Computer Science", 50, "Physics", 60, "Chemistry", 60);
            more_options_function();
        }
        else if (subject_sel == 'a' || subject_sel == 'A')
        {
            Result_Card(Arts_Total, 9, "English", 75, "Urdu", 75, "Islamiat (Compulsory)", 50, "General Mathematatics", 75, "Pakistan Studies", 50, "General Science", 75, Elective_Subject1, 75, Elective_Subject2, 75);
            more_options_function();
        }
        else if (class_sel == 'e' || class_sel == 'E')
        {
            Result_Card(Eight_Total, 8, "English", 100, "Urdu", 100, "Islamiat", 100, "Mathematics", 100, "General Science", 100, "", 0, "", 0, "", 0);
            more_options_function();
        }
    }
    else
    {
        system("cls");
        printf("%s", invalid_input);
        more_options_function();
    }
}

float Percentage_Function(float Obtained_Marks, float Total_Marks)
{

    float Percentage_Function = Obtained_Marks / Total_Marks * 100;
    return Percentage_Function;
}

void Grade(float Obtained_Percentage)
{
    if (Obtained_Percentage >= 90)
    {
        if (n == 1)
        {
            printf("\n\t\t\t\aYour Grade is \"A+\""); // Printing A+ Grade
            printf("\n\t\t\tREMARKS : Outstanding");
            printf("\n\t\t\tKeep Trying Hard Because The Competition is Still Hard !!!!\n");
        }
        else
        {
            printf("A+   |");
        }
    }
    else if (Obtained_Percentage >= 87 && Obtained_Percentage <= 89)
    {
        if (n == 1)
        {
            printf("\n\t\t\t\aYour Grade is \"A\"");
            printf("\n\t\t\tREMARKS : Execellent");
            printf("\n\t\t\tKeep Trying Hard Because The Competition is Still Hard !!!!\n");
        }
        else
        {
            printf("A    |");
        }
    }
    else if (Obtained_Percentage >= 82 && Obtained_Percentage <= 86)
    {
        if (n == 1)
        {
            printf("\n\t\t\t\aYour Grade is \"B+\""); // Printing B Grade
            printf("\n\t\t\tREMARKS : Very Good");
            printf("\n\t\t\tKeep Trying Hard Because The Competition is Still Hard !!!!\n");
        }
        else
        {
            printf("B+   |");
        }
    }
    else if (Obtained_Percentage >= 77 && Obtained_Percentage <= 81)
    {
        if (n == 1)
        {
            printf("\n\t\t\t\aYour Grade is \"B\""); // Printing B Grade
            printf("\n\t\t\tREMARKS : Very Good");
            printf("\n\t\t\tKeep Trying Hard Because The Competition is Still Hard !!!!\n");
        }
        else
        {
            printf("B    |");
        }
    }
    else if (Obtained_Percentage >= 70 && Obtained_Percentage <= 76)
    {
        if (n == 1)
        {
            printf("\n\t\t\t\aYour Grade is \"C+\""); // Printing C Grade
            printf("\n\t\t\tREMARKS : Good");
            printf("\n\t\t\tKeep Trying Hard To Gain More Success !!!!\n");
        }
        else
        {
            printf("C+   |");
        }
    }
    else if (Obtained_Percentage >= 60 && Obtained_Percentage <= 69)
    {
        if (n == 1)
        {
            printf("\n\t\t\t\aYour Grade is \"C\""); // Printing C Grade
            printf("\n\t\t\tREMARKS : Good");
            printf("\n\t\t\tKeep Trying Hard To Gain More Success !!!!\n");
        }
        else
        {
            printf("C    |");
        }
    }
    else if (Obtained_Percentage >= 50 && Obtained_Percentage <= 59)
    {
        if (n == 1)
        {
            printf("\n\t\t\t\aYour Grade is \"D+\""); // Printing D Grade
            printf("\n\t\t\tREMARKS : Fair");
            printf("\n\t\t\tPlease Try Hard To Gain More Success !!!!\n");
        }
        else
        {
            printf("D+   |");
        }
    }
    else if (Obtained_Percentage >= 40 && Obtained_Percentage <= 49)
    {
        if (n == 1)
        {
            printf("\n\t\t\t\aYour Grade is \"D\""); // Printing D Grade
            printf("\n\t\t\tREMARKS : Fair");
            printf("\n\t\t\tPlease Try Hard To Gain More Success !!!!\n");
        }
        else
        {
            printf("D    |");
        }
    }
    else if (Obtained_Percentage >= 33 && Obtained_Percentage <= 39)
    {
        if (n == 1)
        {
            printf("\n\t\t\t\aYour Grade is \"E\""); // Printing E Grade
            printf("\n\t\t\tREMARKS : Satisfactory");
            printf("\n\t\t\tPlease Try Hard To Gain More Success !!!!\n");
        }
        else
        {
            printf("E    |");
        }
    }
    else
    {
        if (n == 1)
        {
            printf("\n\t\t\t\aYour Grade is \"F\""); // Printing F Grade
            printf("\n\t\t\tREMARKS : Unsatisfactory");
            printf("\n\t\t\tDon't Worry.. There Are Many Ups And Downs In A Life !!!!");
            printf("\n\t\t\tTry Hard Next Time...To Gain Success...\n");
        }
        else
        {
            printf("F    |");
        }
    }
}

void Result_Status(float Percentage_Function)
{
    if (Percentage_Function >= 33)
    {
        printf("       Pass      |");
    }
    else
    {
        printf("       Fail      |");
    }
}

void Remarks(float Percentage_Function)
{
    if (Percentage_Function >= 80)
    {
        printf("    Outstanding   |");
    } // Printing A+ Remarks

    else if (Percentage_Function < 80 && Percentage_Function >= 70)
    {
        printf("    Execellent    |");
    } // Printing A Remarks

    else if (Percentage_Function < 70 && Percentage_Function >= 60)
    {
        printf("     Very Good    |");
    } // Printing B Remarks

    else if (Percentage_Function < 60 && Percentage_Function >= 50)
    {
        printf("       Good       |");
    } // Printing C Remarks

    else if (Percentage_Function < 50 && Percentage_Function >= 40)
    {
        printf("       Fair       |");
    } // Printing D Remarks

    else if (Percentage_Function < 40 && Percentage_Function >= 33)
    {
        printf("   Satisfactory   |");
    } // Printing E Remarks

    else if (Percentage_Function < 33)
    {
        printf("  Unsatisfactory  |");
    } // Printing F Remarks
}

void Reset()
{
    class_sel = (NULL), subject_sel = (NULL);
}