// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int mai = 0, min = 0, num = 0, sym = 0;
    for (int i = 0; i < strlen(password); i++)
    {
        if (isdigit(password[i]))
            num = 1;
        else if (isupper(password[i]))
            mai = 1;
        else if(islower(password[i]))
            min = 1;
        else
            sym = 1;
    }
    if (num + mai + min + sym == 4)
        return true;
    else
        return false;
}
