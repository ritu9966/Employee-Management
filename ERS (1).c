#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void welcome();
void admin_login();
void admin_menu();
void new ();
void update();
void see();
void id();
void user_menu();
void user_id();
void close();
int main_exit;
struct date
{
    int day;
    int month;
    int year;
};
struct
{
    char username[30];
    int employee_id;
    char first_name[15];
    char last_name[15];
    char department[30];
    char email[50];
    double mobile_no;
    char address[100];
    struct date joining;
} add, upd, search, user;

void delay(int j)
{
    int k;
    for (int i = 0; i < j; i++)
    {
        k = i;
    }
}

int main(void)
{
    system("color A");
    int choice;
    system("cls");
    welcome();
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t@ Ritu Anuragi");
    printf("\n\n\n\t\t\t\tPress Enter key to Continue. . . .   ");
    getchar();
    system("cls");
    system("color 9");
MAIN_CHOICE:
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO EMPLOYEE RECORD SYSTEM CHOICE MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t Which Category you Belong to:");
    printf("\n\n\t\t < 1 > USER.");
    printf("\n\n\t\t < 2 > ADMIN.");
    printf("\n\n\t\t < 3 > EXIT.");
    printf("\n\n\t\t   ENTER OPTION:  ");
    scanf("%d", &choice);
    system("cls");
    if (choice == 1)
    {
        user_menu();
    }
    else if (choice == 2)
    {
        admin_login();
    }
    else if (choice == 3)
    {
        close();
    }
    else
    {
        printf("\n\n\t\tINVALID OPTION!!!\n\n");
        delay(10000000);
        goto MAIN_CHOICE;
    }

    return 0;
}

void welcome()
{
    for (int i = 0; i < 11; i++)
    {
        printf("\t\t   ");
        for (int j = 0; j < 80; j++)
        {
            if (i == 0 || i == 1 || i == 9 || i == 10 || j == 0 || j == 1 | j == 2 || j == 73 || j == 74 || j == 75)
            {
                printf("*");
            }
            //FOR W
            else if (j == 5 || j == 10)
            {
                printf("W ");
            }
            else if ((i == 7 && j == 6) || (i == 7 && j == 8) || (j == 7 && i == 5) || (j == 7 && i == 6))
            {
                printf("W");
            }
            //FOR E
            else if (j == 12 || (i == 2 && j > 11 && j < 16) || (i == 5 && j > 11 && j < 16) || (i == 8 && j > 11 && j < 16))
            {
                printf("E");
            }
            //FOR L
            else if (j == 18 || (i == 8 && j > 17 && j < 23))
            {
                printf("L");
            }
            //For C
            else if (j == 25 || (i == 2 && j > 24 && j < 29) || (i == 8 && j > 24 && j < 29))
            {
                printf("C");
            }
            //FOR O
            else if ((j == 31 && i != 2 && i != 8) || (j == 35 && i != 2 && i != 8) || (i == 2 && j != 31 && j != 35 && j > 30 && j < 36) || (i == 8 && j != 31 && j != 35 && j > 30 && j < 36))
            {
                printf("O");
            }
            // FOR M
            else if (j == 38 || j == 43)
            {
                printf("M ");
            }
            else if ((i == 3 && j == 39) || (i == 3 && j == 41) || (j == 40 && i == 4) || (j == 40 && i == 5))
            {
                printf("M");
            }
            //FOR E
            else if (j == 45 || (i == 2 && j > 44 && j < 49) || (i == 5 && j > 44 && j < 49) || (i == 8 && j > 44 && j < 49))
            {
                printf("E");
            }
            //FOR T
            else if ((i == 2 && j > 55 && j < 65) || j == 60)
            {
                printf("T");
            }
            //For O
            else if ((j == 67 && i != 2 && i != 8) || (j == 71 & i != 2 && i != 8) || (i == 2 && j != 67 && j != 71 && j > 66 && j < 72) || (i == 8 && j != 67 && j != 71 && j > 66 && j < 72))
            {
                printf("O");
            }

            else
            {
                printf(" ");
            }
        }
        delay(200000000);
        printf("\n");
    }

    //EMPLOYEE
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        printf("\t\t      ");
        for (int j = 0; j < 73; j++)
        {
            //FOR BOUNDARY * PATTERN
            if (i == 0 || i == 1 || i == 9 || i == 10 || j == 0 || j == 1 || j == 2 || j == 68 || j == 69 || j == 70)
            {
                printf("*");
            }
            //FOR E
            else if (j == 5 || (i == 2 && j > 4 && j < 10) || (i == 5 && j > 4 && j < 10) || (i == 8 && j > 4 && j < 10))
            {
                printf("E");
            }
            //FOR M
            else if (j == 12 || j == 17)
            {
                printf("M ");
            }
            else if ((i == 3 && j == 13) || (i == 3 && j == 15) || (j == 14 && i == 4) || (j == 14 && i == 5))
            {
                printf("M");
            }

            //FOR P
            else if ((i == 2 && j < 25 && j > 19) || (i == 6 && j < 25 && j > 19) || (j == 25 && i != 2 && i < 6) || (j == 20))
            {
                printf("P");
            }
            //FOR L
            else if ((j == 28) || (i == 8 && j > 28 && j < 34))
            {
                printf("L");
            }
            //FOR O
            else if ((j == 36 && i != 2 && i != 8) || (j == 41 && i != 2 && i != 8) || (i == 2 && j != 36 && j != 41 && j > 36 && j < 42) || (i == 8 && j != 36 && j != 41 && j > 36 && j < 42))
            {
                printf("O");
            }
            //FOR Y
            else if ((i == 2 && j == 44) || (i == 2 && j == 52) || (i == 3 && j == 45) || (i == 3 && j == 51) || (i == 4 && j == 46) || (i == 4 && j == 50) || (i == 5 && j == 47) || (i == 5 && j == 49) || (j == 48 && i > 5))
            {
                printf("Y");
            }
            // //FOR E
            else if (j == 55 || (i == 2 && j > 54 && j < 60) || (i == 5 && j > 54 && j < 60) || (i == 8 && j > 54 && j < 60))
            {
                printf("E");
            }
            //FOR E
            else if (j == 62 || (i == 2 && j > 61 && j < 67) || (i == 5 && j > 61 && j < 67) || (i == 8 && j > 61 && j < 67))
            {
                printf("E");
            }

            else
            {
                printf(" ");
            }
        }
        delay(200000000);
        printf("\n");
    }

    //RECORD SYSTEM
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        printf("\t");
        for (int j = 0; j < 101; j++)
        {
            //FOR BOUNDARY * PATTERN
            if (i == 0 || i == 1 || i == 9 || i == 10 || j == 0 || j == 1 || j == 97 || j == 98)
            {
                printf("*");
            }
            //FOR R
            else if ((i == 2 && j > 2 && j < 7) || (i == 5 && j > 2 && j < 7) || j == 3 || (j == 7 && i != 2 && i < 5) || (i == 6 && j == 4) || (i == 7 && j == 5) || (i == 8 && j == 6))
            {
                printf("R");
            }
            //FOR E
            else if (j == 10 || (i == 2 && j > 9 && j < 15) || (i == 5 && j > 9 && j < 15) || (i == 8 && j > 9 && j < 15))
            {
                printf("E");
            }
            //FOR C
            else if (j == 17 || (i == 2 && j > 16 && j < 22) || (i == 8 && j > 16 && j < 22))
            {
                printf("C");
            }
            //FOR O
            else if ((j == 24 && i != 2 && i != 8) || (j == 29 && i != 2 && i != 8) || (i == 2 && j != 24 && j != 29 && j > 24 && j < 30) || (i == 8 && j != 24 && j != 29 && j > 24 && j < 30))
            {
                printf("O");
            }
            //For R
            else if ((i == 2 && j > 31 && j < 36) || (i == 5 && j > 31 && j < 36) || j == 32 || (j == 36 && i != 2 && i < 5) || (i == 6 && j == 33) || (i == 7 && j == 34) || (i == 8 && j == 35))
            {
                printf("R");
            }
            //FOR D
            else if (j == 39 || (i == 2 && j < 43 && j > 39) || (i == 3 && j == 43) || (j == 44 && i != 2 && i != 3 && i < 7) || (i == 7 && j == 43) || (i == 8 && j < 43 && j > 39))
            {
                printf("D");
            }
            //system FOR S
            else if ((j == 50 && i != 6 && i != 7) || (j == 54 && i != 3 && i != 4) || (i == 2 && j > 49 && j < 55) || (i == 5 && j > 49 && j < 55) || (i == 8 && j > 49 && j < 55))
            {
                printf("S");
            }
            //FOR Y
            else if ((i == 2 && j == 57) || (i == 2 && j == 65) || (i == 3 && j == 58) || (i == 3 && j == 64) || (i == 4 && j == 59) || (i == 4 && j == 63) || (i == 5 && j == 60) || (i == 5 && j == 62) || (j == 61 && i > 5))
            {
                printf("Y");
            }
            //FOR S
            else if ((j == 68 && i != 6 && i != 7) || (j == 72 && i != 3 && i != 4) || (i == 2 && j > 67 && j < 73) || (i == 5 && j > 67 && j < 73) || (i == 8 && j > 67 && j < 73))
            {
                printf("S");
            }
            //FOR T
            else if ((i == 2 && j > 74 && j < 82) || (j == 78))
            {
                printf("T");
            }
            //FOR E
            else if (j == 84 || (i == 2 && j > 83 && j < 89) || (i == 5 && j > 83 && j < 89) || (i == 8 && j > 83 && j < 89))
            {
                printf("E");
            }

            //FOR M
            else if (j == 91 || j == 96) //93   98
            {
                printf("M ");
            }
            else if ((i == 3 && j == 92) || (i == 3 && j == 94) || (j == 93 && i == 4) || (j == 93 && i == 5))
            {
                printf("M");
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
        delay(200000000);
    }
}

void admin_login()
{
    system("cls");
    char U[10];
    char username[10] = "admin";
    char P[10];
    char password[10] = "admin123#";
    printf("\n\n\n\t\t\t\t   Employee Record System\n\t\t\t\t\t Admin Login ");
    printf("\n\n\n\n\n\t\t\t\tEnter the username to login:  ");
    scanf("%s", U);
    printf("Username Matching");
    for (int i = 0; i < 5; i++)
    {
        delay(10000000);
        printf(". ");
    }
    if (strcmp(U, username) == 0)
    {
        printf("\n\n\n\n\n\t\t\t\tEnter the password to login:  ");
        scanf("%s", P);
        printf("Password Matching");
        for (int i = 0; i < 5; i++)
        {
            delay(100000000);
            printf(". ");
        }
        if (strcmp(P, password) == 0)
        {
            system("cls");
            admin_menu();
        }
        else
        {
            printf("\nWrong Password!!!");
        Login_Try:
            printf("\n\n[1] TRY AGAIN.");
            printf("\n[2] EXIT.");
            printf("\nEnter your Option:  ");
            scanf("%d", &main_exit);
            if (main_exit == 1)
            {
                system("cls");
                admin_login();
            }
            else if (main_exit == 2)
            {
                system("cls");
                close();
            }
            else
            {
                printf("\nInvalid Option!");
                delay(1000000000);
                goto Login_Try;
            }
        }
    }
    else
    {
        printf("\nInvalid  Username..!!!");
        printf("\n\n[1] TRY AGAIN.");
        printf("\n[2] EXIT.");
        printf("\nEnter your Option:  ");
        scanf("%d", &main_exit);
        if (main_exit == 1)
        {
            system("cls");
            admin_login();
        }
        else if (main_exit == 2)
        {
            system("cls");
            close();
        }
        else
        {
            printf("\nInvalid Option!");
            delay(1000000000);
            goto Login_Try;
        }
    }
}

void admin_menu()
{
    int option;
    system("color A");
    printf("\n\n****************************************************************************************************\n\n");
    printf("\t\t\t===== EMPLOYEE x RECORD x SYSTEM =====\n");
    printf("\t\t\t     ======= MAIN x MENU =======\n");
    printf("\t\t\t [1] Add an Employee.\n");
    printf("\t\t\t [2] Update an Employee Details.\n");
    printf("\t\t\t [3] Search an Employee.\n");
    printf("\t\t\t [4] EXIT.\n");
    printf("\n\t\t\t  Enter your option:  ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        system("cls");
        new ();
        break;
    case 2:
        system("cls");
        update();
        break;
    case 3:
        system("cls");
        see();
        break;
    case 4:
        close();
        break;
    default:
        printf("Invalid Option!\n");
        admin_menu();
        break;
    }
}

void new ()
{
    FILE *ptr;
    ptr = fopen("record.dat", "a+");
    printf("\n\n === ENTER x DETAILS x TO x ADD x EMPLOYEE ===\n\n");
    printf("\n\n  PLease give _(underscore) instead of space\n\n");
    printf("Enter the Username: ");
    scanf("%s", add.username);
    printf("Enter the First name: ");
    scanf("%s", add.first_name);
    printf("Enter the Last name: ");
    scanf("%s", add.last_name);
    printf("Enter the Department: ");
    scanf("%s", add.department);

JOINING_TIME:
    printf("Enter the Date of Joining (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &add.joining.day, &add.joining.month, &add.joining.year);
    if ((add.joining.day > 31) || (add.joining.day < 1))
    {
        printf("Invalid !!!\n");
        goto JOINING_TIME;
    }
    if ((add.joining.month > 12) || (add.joining.month < 1))
    {
        printf("Invalid !!!\n");
        goto JOINING_TIME;
    }
    printf("Enter the Email: ");
    scanf("%s", add.email);
    printf("Enter the Mobile Number: ");
    scanf("%lf", &add.mobile_no);
    printf("Enter the Address: ");
    scanf("%s", add.address);

    printf("\n\nPLEASE WAIT!");
    for (int i = 0; i < 5; i++)
    {
        delay(1000000000);
        printf(". ");
    }

    srand(time(0));
    add.employee_id = rand() % 1000000 + 100000;

    printf("\n\n\n****************************************************************************\n");
    printf("Employee added Succesfully! . . . .\n");
    printf("****************************************************************************\n");
    printf("Employee Id of %s %s is: %d\n", add.first_name, add.last_name, add.employee_id);
    printf("****************************************************************************\n");
    printf("Keep the Employee Id safe for future Reference...\n");
    printf("****************************************************************************\n");

    fprintf(ptr, "%s\n%s %s\n%s\n%d/%d/%d\n%s\n%.0lf\n%s\n%d\n\n", add.username, add.first_name, add.last_name, add.department, add.joining.day, add.joining.month, add.joining.year, add.email, add.mobile_no, add.address, add.employee_id);

    fclose(ptr);

add_invalid:
    printf("\n\n\n[1] MAIN MENU.\n");
    printf("[0] EXIT.\n");
    printf("Enter Your Option:  ");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
    {
        admin_menu();
    }
    else if (main_exit == 0)
    {
        close();
    }
    else
    {
        printf("\nINVALID OPTION!");
        goto add_invalid;
    }
}

void update()
{
    int option, test = 0;
    FILE *old, *new;
    old = fopen("record.dat", "r");
    new = fopen("new.dat", "w");
    printf("Enter the Employee id of the employee whose you want to change the details: ");
    scanf("%d", &upd.employee_id);

    while (fscanf(old, "%s %s %s %s %d/%d/%d %s %lf %s %d", add.username, add.first_name, add.last_name, add.department, &add.joining.day, &add.joining.month, &add.joining.year, add.email, &add.mobile_no, add.address, &add.employee_id) != EOF)
    {
        if (add.employee_id == upd.employee_id)
        {
            test = 1;
            system("cls");
        update_Wrong:
            printf("\n\t\t Which Detail do you want to update.\n");
            printf("\n\t\t [1] Employee Name.\n");
            printf("\t\t [2] Username.\n");
            printf("\t\t [3] Department.\n");
            printf("\t\t [4] Mobile Number.\n");
            printf("\t\t [5] Email.id.\n");
            printf("\t\t [6] Adress.\n");
            printf("\n\n\t\t  Enter Your Option:  ");
            scanf("%d", &option);
            system("cls");

            if (option == 1)
            {
                printf("Enter the First Name: ");
                scanf("%s", upd.first_name);
                printf("Enter the Last Name: ");
                scanf("%s", upd.last_name);
                fprintf(new, "%s\n%s %s\n%s\n%d/%d/%d\n%s\n%.0lf\n%s\n%d\n\n", add.username, upd.first_name, upd.last_name, add.department, add.joining.day, add.joining.month, add.joining.year, add.email, add.mobile_no, add.address, add.employee_id);
                system("cls");
                printf("CHANGES SAVED......\n");
            }
            else if (option == 2)
            {
                printf("Enter the Username: ");
                scanf("%s", upd.username);
                fprintf(new, "%s\n%s %s\n%s\n%d/%d/%d\n%s\n%.0lf\n%s\n%d\n\n", upd.username, add.first_name, add.last_name, add.department, add.joining.day, add.joining.month, add.joining.year, add.email, add.mobile_no, add.address, add.employee_id);
                system("cls");
                printf("CHANGES SAVED......\n");
            }

            else if (option == 3)
            {
                printf("Enter your new Department: ");
                scanf("%s", upd.department);

                fprintf(new, "%s\n%s %s\n%s\n%d/%d/%d\n%s\n%.0lf\n%s\n%d\n\n", add.username, add.first_name, add.last_name, upd.department, add.joining.day, add.joining.month, add.joining.year, add.email, add.mobile_no, add.address, add.employee_id);
                system("cls");
                printf("CHANGES SAVED......\n");
            }
            else if (option == 4)
            {
                printf("Enter the new Mobile Number: ");
                scanf("%lf", &upd.mobile_no);
                fprintf(new, "%s\n%s %s\n%s\n%d/%d/%d\n%s\n%.0lf\n%s\n%d\n\n", add.username, add.first_name, add.last_name, add.department, add.joining.day, add.joining.month, add.joining.year, add.email, upd.mobile_no, add.address, add.employee_id);
                system("cls");
                printf("CHANGES SAVED......\n");
            }
            else if (option == 5)
            {
                printf("Enter the new Email: ");
                scanf("%s", upd.email);
                fprintf(new, "%s\n%s %s\n%s\n%d/%d/%d\n%s\n%.0lf\n%s\n%d\n\n", add.username, add.first_name, add.last_name, add.department, add.joining.day, add.joining.month, add.joining.year, upd.email, add.mobile_no, add.address, add.employee_id);
                system("cls");
                printf("CHANGES SAVED......\n");
            }
            else if (option == 6)
            {
                printf("Enter the new Address: ");
                scanf("%s", upd.address);
                fprintf(new, "%s\n%s %s\n%s\n%d/%d/%d\n%s\n%.0lf\n%s\n%d\n\n", add.username, add.first_name, add.last_name, add.department, add.joining.day, add.joining.month, add.joining.year, add.email, add.mobile_no, upd.address, add.employee_id);
                system("cls");
                printf("CHANGES SAVED......\n");
            }
            else if ((option != 1) || (option != 2) || (option != 3) || (option != 4) || (option != 5) || (option != 6))
            {
                printf("INVALID OPTION CHOOSEN !\n");
                goto update_Wrong;
            }
        }
        else
        {
            fprintf(new, "%s\n%s %s\n%s\n%d/%d/%d\n%s\n%.0lf\n%s\n%d\n\n", add.username, add.first_name, add.last_name, add.department, add.joining.day, add.joining.month, add.joining.year, add.email, add.mobile_no, add.address, add.employee_id);
        }
    }
    fclose(old);
    fclose(new);
    remove("record.dat");
    rename("new.dat", "record.dat");

    if (test != 1)
    {
        system("cls");
        printf("\nEmployee Details not Found...!\n");
    update_invalid:
        printf("\n[0] TRY AGAIN.");
        printf("\n[1] MAIN MENU.");
        printf("\n[2] EXIT.");
        printf("\n Enter Your Option:  ");
        scanf("%d", &main_exit);

        system("cls");
        if (main_exit == 0)
        {
            update();
        }
        else if (main_exit == 1)
        {
            admin_menu();
        }
        else if (main_exit == 2)
        {
            close();
        }
        else
        {
            printf("\n\nINVALID OPTION CHOOSEN...!");
            goto update_invalid;
        }
    }
    else
    {
    update_exit:
        printf("\n\n[1] MAIN MENU.\n");
        printf("[2] EXIT.\n");
        printf("Enter Your Option:  ");
        scanf("%d", &main_exit);

        system("cls");
        if (main_exit == 1)
        {
            admin_menu();
        }
        else if (main_exit == 2)
        {
            close();
        }
        else
        {
            printf("INVALID OPTION CHOOSEN......!\n");
            goto update_exit;
        }
    }
}

void id()
{
    FILE *ptr;
    int test = 0;
    ptr = fopen("record.dat", "r");
    printf("\nEnter the Employee id:  ");
    scanf("%d", &user.employee_id);
    while (fscanf(ptr, "%s %s %s %s %d/%d/%d %s %lf %s %d", add.username, add.first_name, add.last_name, add.department, &add.joining.day, &add.joining.month, &add.joining.year, add.email, &add.mobile_no, add.address, &add.employee_id) != EOF)
    {
        if (add.employee_id == user.employee_id)
        {
            system("cls");
            test = 1;
            printf("\nEmployee Id: %d\n", add.employee_id);
            printf("Employee Username: %s\n", add.username);
            printf("Employee Name: %s %s\n", add.first_name, add.last_name);
            printf("Date of joining: %d/%d/%d\n", add.joining.day, add.joining.month, add.joining.year);
            printf("Department: %s\n", add.department);
            printf("Email: %s\n", add.email);
            printf("Mobile Number: %.0lf\n", add.mobile_no);
            printf("Address: %s\n", add.address);
        }
    }
    if (test != 1)
    {
        system("cls");
        printf("\nEmployee Not Found......!\n");

    see_invalid:
        printf("\n[0] TRY AGAIN.");
        printf("\n[1] MAIN MENU.");
        printf("\n[2] EXIT.\n");
        printf("Enter Your Option:  ");
        scanf("%d", &main_exit);

        system("cls");
        if (main_exit == 0)
        {
            see();
        }
        else if (main_exit == 1)
        {
            admin_menu();
        }
        else if (main_exit == 2)
        {
            close();
        }
        else
        {
            printf("\n\nINVALID OPTION CHOOSEN....!\n");
            goto see_invalid;
        }
    }
}

void see()
{
    FILE *ptr;
    int test = 0, check = 0, count = 0, option;
    ptr = fopen("record.dat", "r");
    printf("\n\nBy which you want to check Employee Detail. \n");
    printf("[1] By Employee Id.\n");
    printf("[2] By Employee Name.\n");
    printf("[3] EXIT.\n");
    printf(" \n\n Enter Your Choice:  ");
    scanf("%d", &option);

    if (option == 1)
    {
        printf("Enter the Employee Id:  ");
        scanf("%d", &search.employee_id);
        while (fscanf(ptr, "%s %s %s %s %d/%d/%d %s %lf %s %d", add.username, add.first_name, add.last_name, add.department, &add.joining.day, &add.joining.month, &add.joining.year, add.email, &add.mobile_no, add.address, &add.employee_id) != EOF)
        {
            if (add.employee_id == search.employee_id)
            {
                system("cls");
                test = 1;
                printf("\nEmployee Id: %d\n", add.employee_id);
                printf("Employee Username: %s\n", add.username);
                printf("Employee Name: %s %s\n", add.first_name, add.last_name);
                printf("Date of joining: %d/%d/%d\n", add.joining.day, add.joining.month, add.joining.year);
                printf("Department: %s\n", add.department);
                printf("Email: %s\n", add.email);
                printf("Mobile Number: %.0lf\n", add.mobile_no);
                printf("Address: %s\n", add.address);
            }
            if (add.employee_id != search.employee_id)
            {
                printf("Invalid Id...!\n");
            }
        }
    }
    else if (option == 2)
    {
        printf("\n\nEnter the Employee First Name: ");
        scanf("%s", search.first_name);
        printf("Entet the Employee Last Name: ");
        scanf("%s", search.last_name);
        system("cls");
        printf("\n\nName \t\t Employee id\n");
        while (fscanf(ptr, "%s %s %s %s %d/%d/%d %s %lf %s %d", add.username, add.first_name, add.last_name, add.department, &add.joining.day, &add.joining.month, &add.joining.year, add.email, &add.mobile_no, add.address, &add.employee_id) != EOF)
        {
            if (strcmpi(add.first_name, search.first_name) == 0)
            {
                if (strcmpi(add.last_name, search.last_name) == 0)
                {
                    printf("%s %s:\t  %d\n", add.first_name, add.last_name, add.employee_id);
                    count++;
                }
            }
            check++;
        }
        if (count > 1)
        {
            printf("\n\nThere are %d %s %s.", count, search.first_name, search.last_name);
            printf("\nEnter the Employee Id to search specific Employee.\n");
            id(test = 1);
        }

        if (count == 1)
        {
            system("cls");
            test = 1;
            printf("\nEmployee Id: %d\n", add.employee_id);
            printf("Employee Username: %s\n", add.username);
            printf("Employee Name: %s %s\n", add.first_name, add.last_name);
            printf("Date of joining: %d/%d/%d\n", add.joining.day, add.joining.month, add.joining.year);
            printf("Department: %s\n", add.department);
            printf("Email: %s\n", add.email);
            printf("Mobile Number: %.0lf\n", add.mobile_no);
            printf("Address: %s\n", add.address);
        }
    }
    else if (option == 3)
    {
        close();
    }

    fclose(ptr);
    if (test != 1)
    {
        system("cls");
        printf("\nEmployee Not Found......!\n");

    see_invalid:
        printf("\n[0] TRY AGAIN.");
        printf("\n[1] MAIN MENU.");
        printf("\n[2] EXIT.\n");
        printf("Enter Your Option:  ");
        scanf("%d", &main_exit);

        system("cls");
        if (main_exit == 0)
        {
            see();
        }
        else if (main_exit == 1)
        {
            admin_menu();
        }
        else if (main_exit == 2)
        {
            close();
        }
        else
        {
            printf("\n\nINVALID OPTION CHOOSEN....!\n");
            goto see_invalid;
        }
    }
    else
    {
    see_exit:
        printf("\n\n\t [1] MAIN MENU.");
        printf("\n\t [2] EXIT.");
        printf("\n\t Enter Your Option:  ");
        scanf("%d", &main_exit);

        if (main_exit == 1)
        {
            system("cls");
            admin_menu();
        }
        else if (main_exit == 2)
        {
            system("cls");
            close();
        }
        else
        {
            system("cls");
            printf("\nINVALID OPTION CHOOSEN....!\n");
            goto see_exit;
        }
    }
}

void user_menu()
{
    FILE *ptr;
    ptr = fopen("record.dat", "r");
    int option;
    int test = 0, check = 0, count = 0, opt;
    system("color A");
    printf("\n\n****************************************************************************************************\n\n");
    printf("\t\t ========== WELCOME USER ==========\n");
    printf("\t\t =========== MAIN MENU ===========\n");
    printf("\t\t [1] Search Employee details by Employee id.\n");
    printf("\t\t [2] Search Employee details by Employee Name.\n");
    printf("\t\t [3] View Employees list by department.\n");
    printf("\t\t [4] EXIT.\n");
    printf("\n\t\t  Enter the Option:  ");
    scanf("%d", &option);
    system("cls");
    switch (option)
    {
    case 1:
        printf("\nEnter the Employee id:  ");
        scanf("%d", &user.employee_id);
        while (fscanf(ptr, "%s %s %s %s %d/%d/%d %s %lf %s %d", add.username, add.first_name, add.last_name, add.department, &add.joining.day, &add.joining.month, &add.joining.year, add.email, &add.mobile_no, add.address, &add.employee_id) != EOF)
        {
            if (add.employee_id == user.employee_id)
            {
                system("cls");
                test = 1;
                printf("\nEmployee Id: %d\n", add.employee_id);
                printf("Employee Username: %s\n", add.username);
                printf("Employee Name: %s %s\n", add.first_name, add.last_name);
                printf("Date of joining: %d/%d/%d\n", add.joining.day, add.joining.month, add.joining.year);
                printf("Department: %s\n", add.department);
                printf("Email: %s\n", add.email);
                printf("Mobile Number: %.0lf\n", add.mobile_no);
                printf("Address: %s\n", add.address);
            }
        }
        fclose(ptr);
        break;
    case 2:
        printf("\n\n\t\tEnter the Employee First Name:  ");
        scanf("%s", user.first_name);
        printf("\t\tEnter the Employee Last Name:  ");
        scanf("%s", user.last_name);
        system("cls");
        printf("\n\nName \t\t Employee id\n");
        while (fscanf(ptr, "%s %s %s %s %d/%d/%d %s %lf %s %d", add.username, add.first_name, add.last_name, add.department, &add.joining.day, &add.joining.month, &add.joining.year, add.email, &add.mobile_no, add.address, &add.employee_id) != EOF)
        {
            if (strcmpi(add.first_name, user.first_name) == 0)
            {
                if (strcmpi(add.last_name, user.last_name) == 0)
                {
                    printf("%s %s:\t  %d\n", add.first_name, add.last_name, add.employee_id);
                    count++;
                }
            }
            check++;
        }
        if (count > 1)
        {
            printf("\n\nThere are %d %s %s.", count, user.first_name, user.last_name);
            printf("\nEnter the Employee Id to search specific Employee.\n");
            id(test = 1);
        }
        if (count == 1)
        {
            system("cls");
            test = 1;
            printf("\nEmployee Id: %d\n", add.employee_id);
            printf("Employee Username: %s\n", add.username);
            printf("Employee Name: %s %s\n", add.first_name, add.last_name);
            printf("Date of joining: %d/%d/%d\n", add.joining.day, add.joining.month, add.joining.year);
            printf("Department: %s\n", add.department);
            printf("Email: %s\n", add.email);
            printf("Mobile Number: %.0lf\n", add.mobile_no);
            printf("Address: %s\n", add.address);
        }
        fclose(ptr);
        break;
    case 3:
        printf("\t\t\n\nEnter the Department:  ");
        scanf("%s", user.department);
        printf("\n\nName \t\t Department\t Employee id \t Email id\n");
        while (fscanf(ptr, "%s %s %s %s %d/%d/%d %s %lf %s %d", add.username, add.first_name, add.last_name, add.department, &add.joining.day, &add.joining.month, &add.joining.year, add.email, &add.mobile_no, add.address, &add.employee_id) != EOF)
        {
            if (strcmpi(add.department, user.department) == 0)
            {
                printf("%s %s:\t  %s\t  %d\t  %s\n", add.first_name, add.last_name, add.department, add.employee_id, add.email);
                count++;
            }
            check++;
        }
        if (count > 1)
        {
            printf("\n\nThere are %d employee of %s department.", count, user.department);
            printf("\nEnter the Employee Id to search specific Employee.\n");
            user_id(test = 1);
        }

        if (count == 1)
        {
            system("cls");
            test = 1;
            printf("\n\nThere is only 1 employee of %s department.\n", user.department);
            printf("\nEmployee Id: %d\n", add.employee_id);
            printf("Employee Username: %s\n", add.username);
            printf("Employee Name: %s %s\n", add.first_name, add.last_name);
            printf("Date of joining: %d/%d/%d\n", add.joining.day, add.joining.month, add.joining.year);
            printf("Department: %s\n", add.department);
            printf("Email: %s\n", add.email);
            printf("Mobile Number: %.0lf\n", add.mobile_no);
            printf("Address: %s\n", add.address);
        }
        fclose(ptr);
        break;
        case 4:
            close();
            break;
    default:
        printf("\n\t\tInvalid Option\n");
        user_menu();
        break;
    }
    if (option == 4)
    {
        close();
    }
    
    if (test != 1)
    {
        system("cls");
        printf("\nEmployee Not Found......!\n");

    see_invalid:
        printf("\n[0] TRY AGAIN.");
        printf("\n[1] MAIN MENU.");
        printf("\n[2] EXIT.\n");
        printf("Enter Your Option:  ");
        scanf("%d", &main_exit);

        system("cls");
        if (main_exit == 0)
        {
            user_menu();
        }
        else if (main_exit == 1)
        {
            user_menu();
        }
        else if (main_exit == 2)
        {
            close();
        }
        else
        {
            printf("\n\nINVALID OPTION CHOOSEN....!\n");
            goto see_invalid;
        }
    }

    else
    {
    see_exit:
        printf("\n\t [1] MAIN MENU.");
        printf("\n\t [2] EXIT.");
        printf("\n\t Enter Your Option:  ");
        scanf("%d", &main_exit);
        if (main_exit == 1)
        {
            system("cls");
            user_menu();
        }
        else if (main_exit == 2)
        {
            system("cls");
            close();
        }
        else
        {
            system("cls");
            printf("\nINVALID OPTION CHOOSEN....!\n");
            goto see_exit;
        }
    }
}

void user_id()
{
    FILE *ptr;
    int test = 0;
    ptr = fopen("record.dat", "r");
    printf("\nEnter the Employee id:  ");
    scanf("%d", &user.employee_id);
    while (fscanf(ptr, "%s %s %s %s %d/%d/%d %s %lf %s %d", add.username, add.first_name, add.last_name, add.department, &add.joining.day, &add.joining.month, &add.joining.year, add.email, &add.mobile_no, add.address, &add.employee_id) != EOF)
    {
        if (add.employee_id == user.employee_id)
        {
            system("cls");
            test = 1;
            printf("\nEmployee Id: %d\n", add.employee_id);
            printf("Employee Username: %s\n", add.username);
            printf("Employee Name: %s %s\n", add.first_name, add.last_name);
            printf("Date of joining: %d/%d/%d\n", add.joining.day, add.joining.month, add.joining.year);
            printf("Department: %s\n", add.department);
            printf("Email: %s\n", add.email);
            printf("Mobile Number: %.0lf\n", add.mobile_no);
            printf("Address: %s\n", add.address);
        }
    }
    fclose(ptr);
    if (test != 1)
    {
        system("cls");
        printf("\nEmployee Not Found......!\n");

    see_invalid:
        printf("\n[0] TRY AGAIN.");
        printf("\n[1] MAIN MENU.");
        printf("\n[2] EXIT.\n");
        printf("Enter Your Option:  ");
        scanf("%d", &main_exit);

        system("cls");
        if (main_exit == 0)
        {
            user_menu();
        }
        else if (main_exit == 1)
        {
            admin_menu();
        }
        else if (main_exit == 2)
        {
            close();
        }
        else
        {
            printf("\n\nINVALID OPTION CHOOSEN....!\n");
            goto see_invalid;
        }
    }
}

void close()
{
    printf("\n\n");
    printf("\t\t==============================================\n");
    printf("\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("\t\t--------- CREATED BY Ritu Anuragi ------------\n");
    printf("\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf("\t\t==============================================\n\n\n\n");
}