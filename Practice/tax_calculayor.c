//program to calculate tax for different amount.
#include<stdio.h>
#include<conio.h>

int main()
{
    float amount,tax=0 ;
    printf("Enter your Amount=");
    scanf("%f",&amount);
    if(amount>=250000&&amount<=500000)
    {
        tax=tax+0.05*(amount-250000);
        printf("The amount of tax to be paid by you is %f",tax);
    }
    if(amount>=500000 &&amount<=1000000)
    {
        tax=tax+0.2*(amount-500000);
        printf("The amount of tax to be paid by you is %f",tax);
    }
   if(amount>1000000)
    {
        tax=tax+0.3*(amount-100000);
        printf("The amount of tax to be paid by you is %f",tax);
    }
    
    
    return 0;
getch();
}