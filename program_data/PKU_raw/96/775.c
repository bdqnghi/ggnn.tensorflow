main()
{
      char n[100],m[100];
      gets(n);
      
      int i,k,p,r;
      k = strlen(n);
      r = n[0] - '0';
      
      for(i = 0;i < k - 1;i++)
      {
          p = (n[i+1] - '0' + r * 10) / 13;
          m[i] = p;
          r = (n[i+1] - '0' + r * 10) % 13;
      }
      
      if(n[1] == '\0' || (n[2] == '\0' && n[0] <= '1' && n[1] < '3'))
      printf ("0");
      
      if((int)m[0] == 0)
      for(i = 1;i < k - 1;i++)
      printf("%d",m[i]);
      else
      for(i = 0;i < k - 1;i++)
      printf("%d",m[i]);
      
      printf("\n");
      printf("%d",r);
}
 
