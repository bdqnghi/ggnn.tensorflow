
char s[255];

int main() {
  char c;
  int f = 1;
  while ((c = getchar()) != '\n') ++s[c];
  for (c = 'A'; c <= 'Z'; ++c)
    if (s[c]) {
      printf("%c=%d\n", c, s[c]);
      f = 0;
    }
  for (c = 'a'; c <= 'z'; ++c)
    if (s[c]) {
      printf("%c=%d\n", c, s[c]);
      f = 0;
    }
  if (f) printf("No\n");
  return 0;
}
