
int judge(char *a, char *b, double r) {
  int n = strlen(a), m = strlen(b), i, s = 0;
  if (n != m) return 0;
  for (i = 0; i < n; ++i) {
    if (!strchr("ATCG", a[i]) || !strchr("ATCG", b[i])) return 0;
    if (a[i] == b[i]) ++s;
  }
  if (s / (double)n > r) return 1; else return -1;
}

int main() {
  char a[600], b[600];
  double r;
  int s;
  scanf("%lf\n", &r);
  gets(a);
  gets(b);
  s = judge(a, b, r);
  if (s > 0)
    puts("yes");
  else if (s < 0)
    puts("no");
  else
    puts("error");
  return 0;
}
