include <stdio.h>
include <askname.h>

int main(int agrc,char **agrv)
{
    char first[255], last[255];

   askname(first, last);

    printf("Hello %s %s!\n", first, last);
    return 0;
    // add my little change
    // ok, I saw  your change
}