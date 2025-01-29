//C program to Find Number Is Armstrong Or Not
#include<stdio.h>
int main()
{
	 int num,temp, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0) {
       // remainder contains the last digit
        remainder = temp % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       temp /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;


}
