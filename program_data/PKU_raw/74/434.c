
int isPrim(int n)
{
  int r = (int)sqrt(n);
  int i;

  for (i = 2; i <= r; ++i)
    if (n%i == 0)
      return 0;

  return 1;
}

int isHui(int n)
{
  int m = 0, nn = n;

  do {
    m = m*10 + n%10;
    n = n/10;
  } while (n);

  return m == nn;
}

int main()
{
  int m, n, p;
  
  scanf("%d %d", &m, &n);
  p = 0;

  for ( ; m <= n; ++m) {
    if (isPrim(m) && isHui(m)) {
      if (!p) p = 1;
      else printf(",");
      printf("%d", m);
    }
  }

  if (!p) printf("no");
}