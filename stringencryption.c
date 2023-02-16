#include <stdio.h>
#include <string.h>


void encrypt(char []);
void decrypt(char []);


int main()
{
    char str[100];
    int choice;

    printf("enter a message to encrypt/decrypt: ");
    gets(str);

    printf("1. encrypt\n");
    printf("2. decrypt\n");
    printf("enter your choice\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            encrypt(str);
            break;
        case 2:
            decrypt(str);
            break;
        default:
            printf("invalid choice\n");
    }

    return 0;
}


void encrypt(char str[])
{
    int i;
    char character;

    for(i = 0; str[i] != '\0'; i++)
    {
        character = str[i];
        if(character >= 'a' && character <= 'z')
        {
            character = character + 3;
            if(character > 'z')
            {
                character = character - 'z' + 'a' - 1;
            }
            str[i] = character;
        }
        else if(character >= 'A' && character <= 'Z')
        {
            character = character + 3;
            if(character > 'Z')
            {
                character = character - 'Z' + 'A' - 1;
            }
            str[i] = character;
        }
    }

    printf("Encrypted message: %s\n", str);
}

void decrypt(char str[])
{
    int i;
    char character;

    for(i = 0; str[i] != '\0'; i++)
    {
        character = str[i];
        if(character >= 'a' && character <= 'z')
        {
            character = character - 3;
            if(character < 'a')
            {
                character = character + 'z' - 'a' + 1;
            }
            str[i] = character;
        }
        else if(character >= 'A' && character <= 'Z')
        {
            character = character - 3;
            if(character < 'A')
            {
                character = character + 'Z' - 'A' + 1;
            }
            str[i] = character;
        }
    }

    printf("Decrypted message %s\n", str);
}