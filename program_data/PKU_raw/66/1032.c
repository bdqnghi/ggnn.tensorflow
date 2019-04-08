

char s[][4] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
int c[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int leap(int n) {
  return n % 400 == 0 || (n % 4 == 0 && n % 100);
}

int main() {
  int y, m, d, k, i;
  scanf("%d%d%d", &y, &m, &d);
  if (!(y %= 400)) y = 400;
  k = 0;
  for (i = 1; i < y; ++i) k = (k + 365 + leap(i)) % 7;
  for (i = 1; i < m; ++i)
    k = (k + c[i] + (i == 2 ? leap(y) : 0)) % 7;
  printf("%s.\n", s[(k + d) % 7]);
  return 0;
}
