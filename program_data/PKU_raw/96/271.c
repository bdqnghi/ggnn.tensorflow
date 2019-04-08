main()
{
      int a[N] = {0}, c[N] = {0};
      int i, k, d;
      char a1[N];  
      scanf("%s", a1);
      k = strlen(a1);
      for(i = 0; i < k; i++) 
      {
            a[i] = a1[k - i - 1] - '0';
      }
      d = 0;
      for(i = k - 1; i >= 0 ; i--)
      {
            d = d * 10 + a[i];
            c[i] = d / 13;
            d = d % 13;   
      }   
      while(c[k - 1] == 0 && k > 1) 
      {
      k--;
      }  
      for(i = k - 1; i >= 0; i--) 
      {
      printf("%d", c[i]);
      }
      printf("\n%d", d);
      getchar();
      getchar();
      getchar();   
}
      
      