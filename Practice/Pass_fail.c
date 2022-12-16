#include<stdio.h>
#include<conio.h>

int main()
{
    int p,c,m,total ;
    printf("Remember the total marks of each subject is 80\n");
    printf("Enter marks of physics, chemistry and maths=");
    scanf("%d%d%d",&p,&c,&m);
    total=p+c+m;
    if (total>=96 && total<240 && p>=26.4&& c>=26.4 && m>=26.4)
    {
     
        printf("You are pass");
    }
     
    
    else
    {
        printf("Sorry!you have not got passing marks");
    }
   
        return 0;
getch();
    
}
    
    
