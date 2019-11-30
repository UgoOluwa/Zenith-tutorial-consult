#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{

float change;

do {
    change = get_float("How much change do you want? : ");
    }
while (round(change) < 0);

int coins = round(change * 100);
int owed = 0; 
    
while (coins >= 1){
    if (coins > 25){
        owed++;
        coins = coins - 25;
    }
    else if (coins > 10){
        owed++;
        coins = coins - 10;
    }
    else if (coins > 5){
        owed++;
        coins = coins - 5;
    }
    else if (coins >= 1){
        owed++;
        coins = coins - 1;
    }
    
    
}
    printf("%i \n", owed);
    
    
    








}
