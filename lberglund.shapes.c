#include <stdio.h>
#include <math.h>

int main()
{
    printf("Circle Points:\n\n");
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

    printf("\nRectangle Points:\n\n");

    int SquarexCenter = 11;
    int SquareyCenter = 1;
    int SquareRadiusup = 1;
    int SquareRadiusside = 2;
    int i;

    int CoorsPointsx[] = {SquarexCenter + SquareRadiusside, SquarexCenter, SquarexCenter - SquareRadiusside, SquarexCenter, SquarexCenter + SquareRadiusside, SquarexCenter - SquareRadiusside, SquarexCenter + SquareRadiusside, SquarexCenter - SquareRadiusside}; 

    int CoorsPointsy[] = {SquareyCenter, SquareRadiusup + SquareyCenter, SquareyCenter, SquareyCenter - SquareRadiusup, SquareyCenter - SquareRadiusup, SquareyCenter + SquareRadiusup, SquareyCenter + SquareRadiusup, SquareyCenter - SquareRadiusup}; 

    for (i=0; i < 8; i++){
        printf("(%d, %d)\n", CoorsPointsx[i], CoorsPointsy[i]);
    }

    printf("\nTriangle Points:\n\n");

    int TrianglePoint1x = 13;
    int TrianglePoint1y = 7;
    int TriangleBase = 9;
    int TriangleSide1 = 7;
    int TriangleSide2 = 8;
    int TrianglePoint2x = TrianglePoint1x + TriangleBase;

    printf("(%d, %d)\n", TrianglePoint1x, TrianglePoint1y);
    printf("(%d, %d)\n", TrianglePoint2x, TrianglePoint1y);

    float TriangleAngleC = acos((pow(TriangleSide2, 2) + pow(TriangleBase, 2) - pow(TriangleSide1, 2))/ (2*TriangleSide2*TriangleBase));
    float TrianglePoint3up = TriangleSide2 * sin(TriangleAngleC);
    float TrianglePoint3side = TriangleSide2 * cos(TriangleAngleC);
    float TrianglePoint3x = TrianglePoint2x - TrianglePoint3side;
    float TrianglePoint3y = TrianglePoint1y + TrianglePoint3up;

    printf("(%.2f, %.2f)\n", TrianglePoint3x, TrianglePoint3y);

    return 0;
}
