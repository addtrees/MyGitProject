include <stdio.h>
include <askname.h>

int main(int agrc,char **agrv)
{
    char first[255], last[255];

   askname(first, last);

    printf("Hello %s %s!\n", first, last);
    return 0;
    // add my little change
<<<<<<< HEAD
    // ok, I saw  your change
=======
    // danil's change
>>>>>>> e03d7f3 (danil add some change)
}