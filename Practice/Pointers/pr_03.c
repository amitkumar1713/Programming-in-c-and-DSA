#include<stdio.h>
#include<conio.h>
int multiplier(int*a){
    int c=10*(*a);
    return (c);

}
int main()
{
    int n=2 ;
    int*p=&n;
    printf("The new value after multiplication is %d",multiplier(p));

    
    return 0;
getch();
}