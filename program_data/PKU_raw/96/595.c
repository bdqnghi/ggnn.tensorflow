main()
{
      int n,m=0,i,j;
      char a[101],b[100];
      scanf("%s",a);
      n=strlen(a);
      if(n==1||(n==2&&a[0]-'0'==1&&a[1]-'0'<3))
       printf("0\n%s",a);
      else
      {
      for(i=0;i<=n-1;i++)
      {
                      b[i]=(m*10+a[i]-'0')/13+'0'; 
                      m=(m*10+a[i]-'0')%13;
      }
      if(b[1]=='0')
      for(i=2;i<=n-1;i++)
      printf("%c",b[i]);
      else 
      for(i=1;i<=n-1;i++)
      printf("%c",b[i]);
      printf("\n%d",m);
      }
      getchar();
      getchar();
      getchar();
}