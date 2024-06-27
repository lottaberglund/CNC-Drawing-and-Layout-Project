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

    return 0;
}