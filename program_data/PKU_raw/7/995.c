main()
{
      char a[1000],b[1000],c[1000];
      int d[1000];
      int i,j=0,k,m,n;
      scanf("%s",a);
      scanf("%s",b);
      scanf("%s",c);
      for(i=0;;i++)
      {
                   if(a[i]=='\0') break;
                   else
                   {
                       if(a[i]==b[0])
                       {
                                     j++;
                                     d[j]=i;
                                     }
                   }
      }
      if(j==0) printf("%s",a);
      else 
    {m=j;
      for(i=0;;i++)
      {
                   if(b[i]=='\0') break;
      }
      n=i;
      for(j=0;j<m;j++)
      {
                      k=d[j];
                      for(i=0;i<n;i++)
                      {
                                      if(b[i]!=a[i+k]) break;
                                      }
                      if(i==n) break;
      }
      for(i=0;i<n;i++)
      {
                      a[i+d[j]]=c[i];
      }
      printf("%s",a);
    }
}
                      
                      
                      

         
                                     
      
