#include <stdio.h>
#include <stdlib.h>
#include "random.h"

char randchar()
{
    static char letters[26] = "acbdefghijklmnopqrstuvwxyz";
    return letters[rand() % 26];
}
