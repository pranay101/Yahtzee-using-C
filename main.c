#include<stdio.h>
#include"helpers.h"


int main()
{
    int dice[5];
    input_dice(&dice[0]);
    check_dice(&dice[0]);
    print_dice(&dice[0]);
    return 0;
}
