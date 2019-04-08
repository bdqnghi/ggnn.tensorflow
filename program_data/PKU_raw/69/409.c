
main()
{
      char a[251],b[251],c[251];
      gets (a);
      gets (b);
      int i,j,m,n;
      
      for (i = 0;i <= 250;i++)
      if (a[i] == '\0')
      break;         
      
      for (j = 0;j <= 250;j++)
      if (b[j] == '\0')
      break;         

      if (i >= j)
      {
         m = i - j;
         for (;j >= 0;j--)
         b[j + m] = b[j];
         while (m >0)
         {
               b[m - 1] = '0';
               m--;
         }      
         n = i; 
      }
      if (i < j)
      {
         m = j - i;
         for (;i >= 0;i--)
         a[i + m] = a[i];
         while (m >0)
         {
               a[m - 1] = '0';
               m--;
         }      
         n = j; 
      }
      for (i = n - 1;i >= 0;i--)
      {
          c[i] = a[i] + b[i] -'0';
          if ((int)c[i] >= 10 + '0')
          {
             c[i] = c[i] - 10;
             a[i - 1]++;         
          }
      }
      
      if (a[0] + b[0] > 9 + '0' + '0')
      {
         printf ("1");
         for (i = 0;i <= n - 1;i++)
         printf ("%c",c[i]);
      }
      else
      for (i = 0;i <= n - 1;i++)
      {
          if ((int)c[0] == 0 + '0' && n != 1)
          for (i = 1;i <= n - 1;i++)
          printf ("%c",c[i]);
          else
          printf ("%c",c[i]);
      }
}
