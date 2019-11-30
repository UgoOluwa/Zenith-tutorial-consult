#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do {
        height = get_int("Height: ");
       }
    while (height > 8 || height < 1);
    
    for (int i = 1; i <= height; i++){
        for (int j = height; j >= i; j--){
            if ( j > i){
                printf(" ");
            }
            else {
                for(int k = 1; k<=j; k++){
                printf("#");
                }
            }
                
        }

            printf("  ");

        for (int j = 0; j <= height; j++){
            if ( j < i){
                printf("#");
            }
            else {
                for(int k = 1; k<=j; k++){
                printf(" ");
                }
            }
                
            }
        printf("\n");
        }
        
}

