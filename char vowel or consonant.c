//c program chracter is vowel or consonant
#include<stdio.h>
int main()
{
	char c;
    int lv, uv;//lv -lowercase vowel,uv-uppercase vowel
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    
    lv = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uv = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lv|| uv)
        printf("%c is a vowel", c);
    else
        printf("%c is a consonant", c);
    return 0;
}
