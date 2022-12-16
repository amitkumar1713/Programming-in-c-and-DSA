//! Program to print the bill.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int dat,in,m,y,acs,qnty,rate,value;
    char name[50],gst[50],last[50],des[100] ;
    printf("Enter INVOICE NO:");
    scanf("%d",&in);
    printf("Enter DATE:-");
    scanf("%d%d%d",&dat,&m,&y);
    printf("Enter GSTIN:-");
    scanf("%s",&gst);
    printf("\nEnter NAME OF CONSIGNEE AND ADDRESS:-");
    scanf("%s%s",&name,&last);
    printf("DESCRIPTION OF GOODS=");
    scanf("%s",&des);
    printf("ACS CODE=");
    scanf("%d",&acs);
    printf("QNTY=");
    scanf("%d",&qnty);
    printf("RATE=");
    scanf("%d",&rate);
    printf("VALUE OF GOODS=");
    scanf("%d",&value);
    int total;
    total=rate*qnty;
    

    printf("\n\n\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tM/S SANJAY KUMAR VERMA\n");
    printf("\t\t\t\t\t CHANDNI HARDWARE\n");
    printf("\t\t\tMAIN ROAD ,DWARPAHRI,JAMUA,GIRIDIH(JHARKHAND)MOB:-9973492684,6207942044");
    printf("\t\t\t\t\t\t\t\tGSTIN : 20AYCPV5494M1ZW, PAN : AYCPV5494M");
    printf("\t\t\t\t\t\t\t\t\t\t\t(COMPOSITION TAXABLE PERSON)");
    printf("\nINVOICE NO:%d",in);
    printf("\t\t\t\t\t\t\t\t\tDATE:-%d/%d/%d",dat,m,y);
    printf("\nNAME OF CONSIGNEE AND ADDRESS:-%s\t%s",name,last);
    printf("\nGSTIN:-%s\t\t\t\t\t\t\tState :Jharkhand State Code:20",gst);
    printf("\n..............................................................................................................................");
    printf("\n\nDESCRIPTION OF GOODS\tACS COD\tQNTY|||\tRAT\t||||VALUE OF GOODS|||");
    printf("\n\t\t%s\t\t%d\t\t%d\t\t%d\t\t%d",des,acs,qnty,rate,value);
    printf("\n\nYour Total is=%d",total);
    
    printf("\n----------------------------------------------------------------------------------");
    printf("\n----------------------------------------------------------------------------------");

    
    return 0;
getch();
}