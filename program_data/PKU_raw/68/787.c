
int n, i, j, k, f;

int main() {
  scanf("%d", &n);
  for (i = 6; i <= n; i += 2) {
    printf("%d=", i);
    for (j = 3; j <= i; j += 2) {
      f = 0;
      for (k = 3; k * k <= j; k += 2)
        if (j % k == 0) { f = 1; break; }
      if (f) continue;
      for (k = 3; k * k <= i - j; k += 2)
        if ((i - j) % k == 0) { f = 1; break; }
      if (!f) {
        printf("%d+%d\n", j, i - j);
        break;
      }
    }
  }
  return 0;
}

