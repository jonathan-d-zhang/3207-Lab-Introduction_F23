#include <stdlib.h>

char randchar()
{
    static char letters[26] = "acbdefghijklmnopqrstuvwxyz";
    return letters[rand() % 26];
}
