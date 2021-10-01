#include <stdio.h>
#include <string.h>
int main ()
{
    char str[1000];
    int i;
    printf("Enter String : ");
    scanf("%s",str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') //A is 65 , Z is 90
        {
            str[i] = str[i] + 32;
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') //a is 97 , z is 122
        {
            str[i] = str[i] - 32;
        }
    }   
    printf("Output : %s",str);
    return 0;
}