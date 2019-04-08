
main()
{
      int i,m,n;
      char a[250],b[250];
      gets(a); 
      gets(b);
      m=strlen(b);
      n=strlen(a);
      
      
      if(m<=n)
      {
      for(i=n;i>0;i=i-1)
      a[i]=a[i-1]-'0';
      a[0]=0;
      
      for(i=m-1;i>=0;i=i-1)
      b[i]=b[i]-'0';
      
      
      for(i=0;i<m;i=i+1)
      {
      a[n-1-i]=a[n-1-i]+(a[n-i]+b[m-1-i])/10;
      a[n-i]=(a[n-i]+b[m-1-i])%10;
      }
      for(i=m;i<n;i=i+1)
      {
      a[n-1-i]=a[n-1-i]+a[n-i]/10;
      a[n-i]=a[n-i]%10;
      
      }
      
      
      for(i=0;a[i]==0;i=i+1)
      if(i==n+1)
      break;
      if(i==n+1)
      printf("0");
      for(;i<n+1;i=i+1)
      printf("%c",a[i]+'0');
      
      
      
      }
      else
      {
      for(i=m;i>0;i=i-1)
      b[i]=b[i-1]-'0';
      b[0]=0;
      
      for(i=n-1;i>=0;i=i-1)
      a[i]=a[i]-'0';
      
      
      for(i=0;i<n;i=i+1)
      {
      b[m-1-i]=b[m-1-i]+(b[m-i]+a[n-1-i])/10;
      b[m-i]=(b[m-i]+a[n-1-i])%10;
      }
      for(i=n;i<m;i=i+1)
      {
      b[m-1-i]=b[m-1-i]+b[m-i]/10;
      b[m-i]=b[m-i]%10;
      
      }
       
      for(i=0;b[i]==0;i=i+1)
      ;
      
      for(;i<m+1;i=i+1)
      printf("%c",b[i]+'0');
      
      }
   
}
