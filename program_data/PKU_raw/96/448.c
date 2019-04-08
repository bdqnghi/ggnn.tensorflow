main()
{
      int n,i,k,l,a[100];
      char s[100];
      scanf("%s",&s);
      n=0;
      while(s[n]!='\0') n++;
      for(i=0;i<=n-1;i++) a[i]=s[i]-'0';
      for(i=0;i<=n-2;i++) 
      {
              a[i+1]=a[i+1]+(a[i]%13)*10;
              a[i]=a[i]/13;
              }
      k=a[n-1]%13;
      a[n-1]=a[n-1]/13;
      l=0;
      while((a[l]==0)&&(l<n-1)) l++;
      for(i=l;i<=n-1;i++) printf("%d",a[i]);
      printf("\n");
      printf("%d",k);
      //getchar();
      //getchar();
      }        
