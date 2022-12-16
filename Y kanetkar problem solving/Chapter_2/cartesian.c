// Write a program to receive Cartesian co-ordinates (x, y) of a point
// and convert them into polar co-ordinates (r,@ )

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float x, y, r, theta,p=3.1415,degree;
    printf("Please provide the X-coordinate value for cartesian system=");
    scanf("%f", &x);
    printf("Please provide the Y-coordinate value for cartesian system=");
    scanf("%f", &y);

    r = sqrt(x * x + y * y);
    theta = atan(y / x);
    //! atan is used to find inverse of tan.
    printf("\nCoordinates in polar form :(%f,%f)", r, theta, theta);

	degree=theta*(180/p);
    printf("\nThe polar form in degree:(%f,%f)",r,degree);
    return 0;
    getch();
}