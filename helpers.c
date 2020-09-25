#include<string.h>
#include<stdio.h>
#include<ctype.h>


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
   int i=0;
    while(i<5)
    {

        // if (*dice != 1 || *dice != 2 || *dice != 3 || *dice != 4 || *dice != 5 || *dice != 6)
        // checking if the given value is numeric or not
        if(!isdigit(*dice))
        {
            return 1;
        }
        else
        {
            // checking if the given input is in the range 1-6
            if(*dice>= 1 && *dice<=6 )
            {
                return 0;   
            }
            else
            {
                return 2;
            }
            
        }
        dice++;
        i++;
    }

}


// hello this is our first project