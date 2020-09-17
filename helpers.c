#include<stdio.h>

void display()
{
    printf("Welcome to Yahtze");
}

// input dice
void input_dice(int *dice)
{
    printf("enter dice inputs (hit enter after each number):\n>\n ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&dice[i]);
    }

    
}


// print dice
void print_dice(int *dice)
{
    int i=0;
    while(i<5)
    {
        printf("%d ,", *dice);
        dice++;
        i++;
    }
}

// check dice
int check_dice(int * dice)
{
    /*
     1- highest priority error incorrcet format 
     2- value out of range
     3- incorrect numbers of values
    */
}


// hello this is our first project