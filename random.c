#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() { return 'a' + (rand() % 26); }
