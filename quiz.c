#include <stdio.h>
#include<conio.h>
int main()
{
    int score = 0;
    int a;
    char name[30];
    char enter;
    system("cls");
    printf("Enter your Name: ");
    scanf("%s",name);
    printf("Human Verification Successful\n");
    printf("      \n");
    printf("%s,Welcome to the Simple Quiz Question\n",name);
    printf("---------------------------------------------------\n");



    printf("\t\t\t\tQUIZ\n:");
    printf("--------------------------------------------------------------------\n");
    printf("\n");
    // rules and structure of games

    printf("\t\t\tRULES AND STRUCTURE OF GAMES OF QUIZ GAMES\n");
    printf("-> You have to choose the number between 1 and 2 and that declare your answers.\n-> There is gonna be 3 rounds in games\n");
    printf("-> Round 1: TECHNOLOGIES \t -> Round 2: SCIENCE \t -> Round 3: SPORTS \n");

    // Quiz Question start from here

    printf("                   \n");

    printf("***ROUND 1(TECHNOLOGIES)***\n");

    printf(">>Who is the father of the computer?\n");
    printf("1.Charles Babbage\t\t\t 2.Dennis Ritchie\n");
    scanf("%d", &a);
    if (a == 1)
    {
        score = score + 1;
        printf("Your answer is COREECT\n");
    }
    else
    {
        printf("Your answer is not CORRECT!!\n");
        printf("TRY AGAIN\n");
    }

    printf("--------------------------------------------------\n");
    printf("                                                              \n");
    printf(">>What is the full form of COMPUTER?\n");
    printf("1. Common Operating Machine Purposely Used for Technological and Educational Research\t\t\t 2.Common Operating Machine Purposely Used for Technological and entertainment Research");
    printf("\n");
    scanf("%d", &a);
    if (a == 1)
    {
        score = score + 1;
        printf("Your answer is COREECT!!\n");
    }
    else
    {
        printf("Your answer is not CORRECT!!\n");
        printf("TRY AGAIN\n");
    }
    printf("----------------------------------------\n");
    // ROUND 2 starts

    printf("***ROUND 2(SCIENCE)***\n");
    printf("                                      \n");
    printf(">>What is the melting point of Alcohol?\n");
    printf("1.-114.1 °C\t\t\t 2.170 °C\n");
    scanf("%d", &a);

    if (a == 1)
    {
        score = score + 1;
        printf("Your answer is COREECT!!\n");
    }
    else
    {
        printf("Your answer is not CORRECT!!\n");
        printf("TRY AGAIN\n");
    }
    printf("----------------------------------------\n");

    printf(">>What is 33 years cycle?\n");
    printf("1.solar cycle\t\t  2.lunar-moon cycle\n");
    scanf("%d", &a);

    if (a == 2)
    {
        score = score + 1;
        printf("Your answer is correct!!\n");
    }
    else
    {
        printf("Your answer is not CORRECT!!\n");
        printf("TRY AGAIN\n");
    }
    printf("----------------------------------------\n");

    // ROUND 3 starts

    printf("***ROUND 3(SPORTS)***\n");
    printf("                                      \n");
    printf(">>What’s the host country for the 2022 World Cup??\n");
    printf("japan\t\t\t 2.Qatar\n");
    scanf("%d", &a);

    if (a == 2)
    {
        score = score + 1;
        printf("Your answer is COREECT!!\n");
    }
    else
    {
        printf("Your answer is not CORRECT!!\n");
        printf("TRY AGAIN\n");
    }
    printf("----------------------------------------\n");

    printf(">>How many national teams are competeting in the world cup 2022?\n");
    printf("1.32\t\t  2.45\n");
    scanf("%d", &a);

    if (a == 1)
    {
        score = score + 1;
        printf("Your answer is correct!!\n");
    }
    else
    {
        printf("Your answer is not CORRECT!!\n");
        printf("TRY AGAIN\n");
    }
    printf("----------------------------------------\n");

    printf("your score is %d", score);
    printf("      \n");
    if (score > 3)
    {
        printf("\t\t\t**CONGRATULATION**\n");
        printf("\t\t\tYOU WIN\n");
    }
    else
    {
        printf("\t\t\t**You Lost**\n");
        printf("\t\t\tTRY AGAIN\n");
    }
}
