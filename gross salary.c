//C program to calculate gross salary of an employee
#include<stdio.h>
int main()
{
	float bs,gs,da,hra;// bs-basic salary,gs-gross salary,da,hra-house rent allowance
	printf("enter basic salary\n");
	scanf("%d",&bs);
	 if( bs < 5000 )  
    {  
        hra = bs * 10 / 100;  
        da  = bs * 90 / 100;  
    }  
    else  
    {  
        hra = 600;  
        da  = bs * 95 / 100;  
    }  
  
    gs = bs + da + hra;  
  
    printf("Gross Salary is Rs %f\n", gs);  
  
    return 0;  
}
