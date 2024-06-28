#include <stdio.h>
#include <math.h>

int main()
{
    float CirclexCoors, CircleyCoors;
    int x;
    int radius = 6;
    float PI = 3.141592653589793;

    for (x = 0; x <= 360; x+= 12) 
    {
        float angle = x * PI / 180.0; 
        CirclexCoors = radius * cos(angle); //
        CircleyCoors = radius * sin(angle);

        printf("(%.2f, %.2f)\n", CirclexCoors, CircleyCoors);
    }

    int SquarexCenter = 11;
    int SquareyCenter = 1;
    int SquareRadius = 1;
    int i;

    int CoorsPointsx[] = {SquarexCenter + SquareRadius, SquarexCenter, SquarexCenter - SquareRadius, SquarexCenter, SquarexCenter + SquareRadius, SquarexCenter - SquareRadius, SquarexCenter + SquareRadius, SquarexCenter - SquareRadius}; 

    int CoorsPointsy[] = {SquareyCenter, SquareRadius + SquareyCenter, SquareyCenter, SquareyCenter - SquareRadius, SquareyCenter - SquareRadius, SquareyCenter + SquareRadius, SquareyCenter + SquareRadius, SquareyCenter - SquareRadius}; 

    for (i=0; i < 8; i++){
        printf("(%d, %d)\n", CoorsPointsx[i], CoorsPointsy[i]);
    }


    return 0;
}
