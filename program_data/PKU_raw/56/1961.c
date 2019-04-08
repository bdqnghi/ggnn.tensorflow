main()
{
      int sum;
      int i, n, a[6];
      
      scanf("%d", &sum);
      
      n = (int)(log(sum) / log(10)) + 1;
      for(i = 1;i <= n; i++)
      {
            a[i] = (sum / (int)pow(10, i - 1)) % 10;
            
      }
      
      for(i = n;i >= 1;i --)
      {
            printf("%d", a[n + 1 - i]);
            }
}
