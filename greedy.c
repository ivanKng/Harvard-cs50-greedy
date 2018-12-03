#include<cs50.h>
#include<math.h>
#include<stdio.h>

/*
prompt user for amount of change owed:
    do while loop will prompt user at least once for user input

use the largest coin possible:

    while (change > quarters(0.25))
    {
        quarters++; incrementing quarters by 1 for every 1 used

    }
    while (change > dimes(0.10))
    {
        dimes++;  incrementing dimes by 1 for every 1 used

    }
    while (change > nickles(0.05))
    {
        nickles++;  incrementing nickles by 1 for every 1 used

    }
    if (change > pennies(0.01)
    {
        pennies++;  incrementing pennies by 1 for every 1 used

    }

*/

float change; //variable declaration for amount of change back
int quarters;   //variable declaration for quarters
int dimes;
int nickels;
int pennies;

int main(void)
{
    do
    {
        change = get_float("enter amount of change back: ");


    }
    while (change < 0);

    //i think calling variable change = round(change*100) is causing the crazy loop try subbing it with amount
    //change = round(change * 100); //convert dollar values into cents *100 && rounding off floating point imprecision possible fix
    change = round(change * 100);
    //round(change);  //rounding off floating point imprecision

    while (change >= 25)    //while loop will continuously repeat until the condition which is the amount becomes < 25 is no longer true breaking the loop
    {
        quarters++; //while the condition of the loop remains true this logs the number of quarters used to deduct from user amount
        change = change - 25;   //simultaneously log a deduction of 25 from total amount
        //printf("%i\n", amount);

    }
    while (change < 25 && change >= 10)   //this while loop stipulates that if amount is < than 25 && >= 10 is true
    {
        dimes++;    //dimes will increment by 1 for however many is appropriate
        change = change - 10;   //deducting 10 from the remaining amount as long as the loop holds true
    }
    while (change < 10 && change >= 5)  //this while loop holds true if amount remaining is < 10 && >= 5
    {
        nickels++;  //nickels will increment by 1 for however many is appropriate
        change = change - 5; //deducting 5 from the remaining amount as long as the loop holds true
    }
    while (change < 5 && change >= 1)   //this while loop holds true if amount remaining is < 5 && >= 1
    {
        pennies++;  //pennies will increment by 1 for however many are remaining
        change = change - 1; //deducting 1 from the remainder as long as the loop holds true
    }
    printf("There are %d quarters, %d dimes, %d nickels & %d pennies", quarters, dimes, nickels, pennies);
}