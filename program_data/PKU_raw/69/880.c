main()
{
      char a[250],b[250];
      int i,j,k,m0,n0,m,n;
      char *p,*q,*p0;
      scanf("%s%s",a,b);
       m0=strlen(a);
       n0=strlen(b);
      if(m0<n0)   {m=m0;n=n0;q=a;p=b;}
      else {m=n0;n=m0;q=b;p=a;}
      int *c=(int*)malloc((n+1)*sizeof(int));
      c[0]=0;
      for(i=0;i<=m-1;i++)
         {
            c[n-i]=p[n-1-i]+q[m-1-i]-'0'-'0';                
         }
      for(i=0;i<=n-m-1;i++)
         {
             c[i+1]=p[i]-'0';      
         }
      for(i=n;i>=1;i--)
      {
         if(c[i]>=10) 
         {
            c[i]=c[i]-10;
            c[i-1]=c[i-1]+1;             
         } 
      }                
for(i=0;i<n;i++)
     {
        if(c[i]!=0) 
        break;
     }
for(j=i;j<=n;j++)
   printf("%c",c[j]+'0');
}