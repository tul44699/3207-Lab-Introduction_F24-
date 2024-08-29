#include "random.h"
void rand_string(char *s, size_t size) {
  for (size_t i = 0; i < size; i++) {
    s[i] = ('a' + (rand() % 26));
  }
}
