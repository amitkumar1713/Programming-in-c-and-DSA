#include<stdio.h>
#include<conio.h>
void avgAndsum(int *p,int* q,int*sum,float*avg){
    *sum=*p+*q;
    *avg=(float)(*p+*q)/2;
    

}
int main()
{
    int a,b,sum ;
    float avg;
    a=5;
    b=10;
    avgAndsum(&a,&b,&sum,&avg);
    printf("sum is %d",sum);
    printf("avg is %f",avg);

    
    return 0;
getch();
}