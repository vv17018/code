//C program to Count the total number of notes in a given amount.
#include<stdio.h>
int main()
{
	
    int a1,a2,a3,s;//a1,a2,a3-sides of triangle,s=sum
    printf("Enter sides of triangle\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    s=a1+a2+a3==180;
    if(s=180)
    {
        printf("Triangle is Valid");
    }
    else
    {
        printf("Triangle is Invalid");
  }
  return 0;
}

