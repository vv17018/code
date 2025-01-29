//c program to Input the month number and print the number of days in that month
#include<stdio.h>
int main()
{
	int n;
	 printf("enter month number between 1 and 12:");//program by varsha
	 scanf("%d",&n);
	 if(n== 1||n== 3||n== 5|| n== 7|| n== 8 ||n==10 ||n==12)
	  {
	 	printf("no of days is 31");
     	}
	   else if(n== 4||n== 6||n== 9|| n== 11)
		printf("no of days in 30");
	    else
	    printf("no of days is 29 or 28");
		  return 0;
	    
	    

}
