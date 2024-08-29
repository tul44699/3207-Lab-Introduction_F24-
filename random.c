#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() { return 'a' + (rand() % 26); }

int main() {
  srand(time(NULL));

  for (size_t i = 0; i < 7; i++) {
    printf("%c", randchar());
  }

  return 0;
}
