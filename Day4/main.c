#include "strutil.h"
#include <stdio.h>
#define FAILED 0
#define PASSED 1
static int passed = 0, total = 0;
static void check(const char *name, int expected, int actual) {
  total++;
  if (expected == actual)
    passed++;
  printf("%s: expected %d, got %d -> %s\n", name, expected, actual,
         expected == actual ? "PASSED" : "FAILED");
}
int main(void) {
  char *a = "ARRA";
  // char *exteremly_long_string =
  //     "ARRAaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
  //     "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
  //     "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
  //     "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
  char *b = "ARAR";
  char *c = "ARARRARa";
  char *d = "ARARRARA;";
  char *e = "";
  char *s = NULL;
  check("abcda,,,,,,,,,", FAILED, is_palindrome("abcda,,,,,,,,,"));
  check(a, 1, is_palindrome(a));
  check(b, 0, is_palindrome(b));
  check(c, 1, is_palindrome(c));
  check(d, 1, is_palindrome(d));
  check(e, FAILED, is_palindrome(e));
  check(s, FAILED, is_palindrome(s));

  return 0;
}
