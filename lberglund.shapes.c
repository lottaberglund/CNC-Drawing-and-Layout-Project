#include <stdio.h>
#include <math.h>

int main()
{
    printf("Circle Points:\n\n");
    float CirclexCoors, CircleyCoors;
    int x;
    int radius = 6;

    for (x = 0; x <= 360; x+= 12) 
    {
        float angle = x * M_PI / 180.0; 
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

    float TriangleAngleC = acos((pow(TriangleSide2, 2) + pow(TriangleBase, 2) - pow(TriangleSide1, 2))/ (2*TriangleSide2*TriangleBase));
    float TrianglePoint3up = TriangleSide2 * sin(TriangleAngleC);
    float TrianglePoint3side = TriangleSide2 * cos(TriangleAngleC);
    float TrianglePoint3x = TrianglePoint2x - TrianglePoint3side;
    float TrianglePoint3y = TrianglePoint1y + TrianglePoint3up;

    printf("(%d, %d)\n", TrianglePoint1x, TrianglePoint1y);
    printf("(%d, %d)\n", TrianglePoint2x, TrianglePoint1y);
    printf("(%.2f, %.2f)\n", TrianglePoint3x, TrianglePoint3y);

    printf("\nLine Points:\n");

    int LinePoint1x = 0;
    int LinePoint1y = 20;
    int LineLength = 15;
    int LineSlope = 3/5;
    int LineSlopey = 3;
    int LineSlopex = 5;
    float LineMultiple = sqrt((pow(LineLength,2))/(pow(LineSlopex,2)+pow(LineSlopey,2)));
    float LineShiftSide = LineSlopex * LineMultiple;
    float LineShiftUp = LineSlopey * LineMultiple;
    float LinePoint2x = LineShiftSide + LinePoint1x;
    float LinePoint2y = LineShiftUp + LinePoint1y;

    printf("(%d, %d)\n", LinePoint1x, LinePoint1y);
    printf("(%.2f, %.2f)\n", LinePoint2x, LinePoint2y);

    printf("\nN Polygon Points:\n");

    int SideLength = 15;
    int CenterPointx = 40;
    int CenterPointy = 0;
    int NumberofSides = 8;
    float Angle1 = (2*M_PI)/NumberofSides;
    float Angle2 = (180 - Angle1)/2;
    float Radius = (SideLength * sin(Angle1))/sin(Angle2);
    
    float PolygonxCoors, PolygonyCoors;
    float j; 

    for (j = 0; j <= 2*M_PI; j += Angle1) {
        PolygonxCoors = CenterPointx + Radius * cos(j);
        PolygonyCoors = CenterPointy + Radius * sin(j);

        printf("(%.2f, %.2f)\n", PolygonxCoors, PolygonyCoors);
    
    }

    printf("\nPoint:\n");

    int Point1x = 30;
    int Point1y = 20;
    printf("(%d, %d)\n", Point1x, Point1y);

    return 0;
}
