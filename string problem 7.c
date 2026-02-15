
#include<stdio.h>
#include<ctype.h>

void toggleCase(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if(islower(str[i]))//str[i]>='a' && str[i]<='z'
        {
            str[i] = str[i]-'a'+'A';
        }
        else if(isupper(str[i]))//str[i]>='A' && str[i]<='Z'
        {
            str[i] = str[i]-'A'+'a';
        }

        i++;
    }
}

int main()
{
    char text[] = "My name is Andy";
    puts(text);
    printf("After Toggle Case\n");
    toggleCase(text);
    puts(text);
    return 0;
}
