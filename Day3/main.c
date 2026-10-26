#include <stdint.h>
#include <stdio.h>
int main(void) {
  printf("char: %zu\n", sizeof(char));
  printf("short: %zu\n", sizeof(short));
  printf("int: %zu\n", sizeof(int));
  printf("long: %zu\n", sizeof(long));
  printf("long long: %zu\n", sizeof(long long));
  printf("double: %zu\n", sizeof(double));
  printf("float: %zu\n", sizeof(float));
  printf("long double: %zu\n", sizeof(long double));
  printf("uint8_t: %zu\n", sizeof(uint8_t));
  printf("uint16_t: %zu\n", sizeof(uint16_t));
  printf("uint32_t: %zu\n", sizeof(uint32_t));
  printf("int8_t: %zu\n", sizeof(uint8_t));
  printf("int16_t: %zu\n", sizeof(uint16_t));
  printf("int32_t: %zu\n", sizeof(uint32_t));
  printf("void*: %zu\n", sizeof(void *));
  printf("uint64_t: %zu\n", sizeof(uint64_t));
  printf("int64_t: %zu\n", sizeof(uint64_t));
  return 0;
}
