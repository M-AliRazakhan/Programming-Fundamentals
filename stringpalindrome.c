#include <stdio.h>
#include <string.h>

void strpalindrome(char x[]);

int main()
{
    char x[20];
    printf("enter name\n");
    fgets(x,sizeof(x),stdin);
    int result;

    strpalindrome(x);

    return 0;

}

void strpalindrome(char x[])
{
    int size=strlen(x);
    int j=size-1;
    int a=0;

    for(int i=0;i<=size-1;i++)
    {
        if(x[i]==x[j]){
        a=1;
        j--;
        }
    
    else{
        a=0;
        printf("Not a Palindrome\n");
         break;
    }

    }

    if(a==1){
        printf("Palindrome\n");
    }


}