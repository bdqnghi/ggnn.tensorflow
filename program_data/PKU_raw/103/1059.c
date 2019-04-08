main()
{
      char a[1001];
      int i,m,j;
      int n=1;
      scanf("%s",a);
      m=strlen(a);
      for(j=0;j<=m-1;j++)
      {
         if(a[j]>='a'&&a[j]<='z')
         a[j]=a[j]-'a'+'A';
       }
       if (m==1)
       printf("(%c,1)",a[0]);
      for(i=1;i<=m-1;i++)
      {
       if(a[i]==a[i-1]&&i!=m-1)
       n++;
       else if(a[i]!=a[i-1]&&i!=m-1)
       {
       printf("(%c,%d)",a[i-1],n);
       n=1;
       }
       else if(a[i]!=a[i-1]&&i==m-1)
       printf("(%c,%d)(%c,1)",a[i-1],n,a[i]);
       else if(a[i]==a[i-1]&&i==m-1)
       printf("(%c,%d)",a[i],n+1);
       
      }
      }