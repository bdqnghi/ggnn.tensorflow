main()
{
  int a[26];
  char c[26];
  int n;
  int i,j,k;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     char b[100000];
     scanf("%s",b);
     for(j=0;j<=25;j++)
     {
        a[j]=0;
        c[j]='0';
     }
     for(j=0;b[j]!='\0';j++)
     {
        for(k=0;k<=25;k++)
        {
            if(c[k]==b[j])
            {
                a[k]++;
                break;
            }
            if(c[k]=='0')
            {
                c[k]=b[j];
                a[k]++;
                break;
            }
        }
     }
     for(j=0;j<=25;j++)
    {
      if(a[j]==1)
      {
       printf("%c\n",c[j]);
       break;
      }
    }
    if(j==26)
    printf("no\n");
  }
}

