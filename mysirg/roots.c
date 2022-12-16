//Program to find the roots of an quadratic equation.

#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
    int a,b,c,d ;
    
    printf("Enter the values of a,b and c=");
    scanf("%d%d%d",&a,&b,&c);
    printf("Your quadratic equation is=%dX*x+%dx+%d",a,b,c);
    d=(b*b)-(4*a*c);
    printf("The value of D is %d\n",d);

    if(d==0)
    {
        float r1,r2;
        r1=r2=(-b)/(2*a);
        printf("\nYour roots are=%.2f%.2f",r1,r2);
    }
    else if(d<0)
    {
        float r1,r2,i1,i2;
        r1=-b/(2*a);
        r2=-b/(2*a);
        //i1=(sqrt(-d))/(2*a);
        //i2=(sqrt(-d))/(2*a);
        printf("\nThe roots are=%.2f+imaginary part and %.2f-imaginary part",r1,r2);

    }
    else if (d>0)
    {
        float r1,r2;
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("\nRespective roots are=%.2fand%.2f",r1,r2);
    }
    

    
    return 0;
getch();
}