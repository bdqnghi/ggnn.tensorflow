
int main()
{
    int n;
    int a[100];
    int h[100];
    int ans;
    while (scanf("%d", &n) != EOF)
    {
          ans = 1;
          for (int i = 0; i < n; i ++)
          {
              scanf("%d", &a[i]);
              h[i] = 1;
          }
          for (int i = 1; i < n; i ++)
          {
              int sum = 1;
              for (int j = 0; j < i; j ++)
              {
                  if (a[j] >= a[i] && h[i] < h[j] + 1)
                     h[i] = h[j] + 1;
              }
              if (h[i] > ans) ans = h[i];
          }
          printf("%d\n", ans);
    }
    return 0;
}
