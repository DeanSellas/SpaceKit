#include <stdio.h>
#include <string.h>

#include "rot13.h"

int main(int argc, char *argv[])
{
    int len = strlen(argv[1]);
    char output[len];
    rot13(argv[1], output, len);
    printf("%s\n", output);
    return 0;
}

char rot13(char input[], char output[], int len)
{
    for(int i = 0; i < len; i++)
    {
        unsigned char c = input[i];
        if(c >= 'A' && c <= 'Z')
        {
            c += 13;

            if(c > 'Z')
            {
                c -= 26;
            }
        }
        else if(c >= 'a' && c <= 'z')
        {
            c += 13;

            if(c > 'z')
            {
                c -= 26;
            }
        }
        output[i] = (char)c;
    }
}