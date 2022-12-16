#include<stdio.h>
#include<conio.h>
void sample(int a);
int main()
{
    int i=3 ;
    printf("The address of i is %u",&i);
    sample(i);
    
    return 0;
getch();
}
void sample(int a){
    printf("The address of a is %u\n",&a);
}