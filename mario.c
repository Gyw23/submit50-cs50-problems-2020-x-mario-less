#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int space;
    int row;
    int hashes;
    int counter;
    
    do 
    {
        height = get_int("height:");
    }
   while (height < 1 || height > 8);
   
    if (height > 0 || height < 9) 
    {
        int counter = 0;
        for ( int row = 0; row<height; row++) {
            if (counter != height) {
                for (int space = (height-1) - counter; space > 0; space--) {
                    printf(" ");
                }
                for (int hashes = 0; hashes <= counter; hashes++){
                    printf("#");
                }
                printf("\n");
                counter++;
            }
        }
    }
}
