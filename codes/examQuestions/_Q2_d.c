/*
An electricity board charges the following rates for the use of electricity: for the first 150 units
Rs. 1 per unit; for the next 100 units Rs. 2 per unit; beyond 250 units Rs. 3 per unit. All users
are charged a minimum of Rs. 75 as meter charge. If the total amount is more than Rs. 300,
then an additional surcharge of 12.5% of the total amount is charged. Write a program to
read the number of units consumed and print out the charges. Use single-line comments to
denote the charge ranges.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unit = 0;
    float price = 75;
    printf("ENTER THE ELECTRICITY UNITS :");
    scanf("%d", &unit);

    if (unit < 150)
    {
        price = unit;
    }
    else if (unit > 150 && unit < 150 + 100)
    {
        price = unit * 2;
    }
    else if (unit > 150)
    {
        price = unit * 3;
    }
    // you'r bill is more than 300 so 12.5% will be charged on you
    if (unit > 300)
    {
        price = price + ((price / 100) * 12.5);
        printf("ଆପଣ AC ବ୍ୟବହାର କରୁଛନ୍ତି ତେଣୁ ଆପଣଙ୍କୁ %f (12.5 percent)  ​​ଅଧିକ ଚାର୍ଜ କରାଯାଇଛି |", ((price / 100) * 12.5));
    }
    printf("Your total bill is : %f", price);

    return 0;
}