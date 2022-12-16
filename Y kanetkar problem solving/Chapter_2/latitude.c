// Write a program to receive values of latitude (L1, L2) and longitude
// (G1, G2), in degrees, of two places on the earth and output the 
// distance (D) between them in nautical miles. The formula for 
// distance in nautical miles is:
// D = 3963 cos
// -1
// ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )


#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float l1,l2,g1,g2,nami,p=3.1415,ll1,ll2,lg1,lg2;
    printf("Enter the latitude:");
    scanf("%f%f",&l1,&l2);
    printf("Enter the longitude:");
    scanf("%f%f",&g1,&g2);
    /*Degree to radians*/
    ll1=l1*(p/180);
    ll2=l2*(p/180);
    lg1=g1*(p/180);
    lg2=g2*(p/180);
    nami=3963*acos(sin(ll1)*sin(ll2)+cos(lg1)*cos(lg2)*cos(lg2-lg1));
    printf("The distance in Nautical miles is:%f",nami);
    return 0;
getch();
}