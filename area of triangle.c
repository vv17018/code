//C program to print area of triangle
#include<stdio.h>
int main()
{
	int area,base,height;
	printf("enter base and height of triangle\n");
	scanf("%d%d",&base,&height);
	area=0.5*base*height;
	printf("area of triangle=%d",area);
	return 0;
}
