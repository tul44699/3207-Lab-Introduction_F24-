#include "print_random.h"
#include <stdio.h>
#include <time.h>

int main() {
  srand(time(NULL));
  printf(rand_string_alloc(7));
  return 0;
}
