//C program for voting elegibility checker
#include<stdio.h>
int main()
{
	int age;
	printf("enter age\n");
	scanf("%d",&age);
	if(age>=18)
	{
	  printf("age =%d,he is eligible",age);
   }
   else {
   	 printf("age=%d ,he is not eligible",age);
   }
   return 0;
}
