main()
{
  int n,i=0,j,k=0,a[301]={0},b[301]={0};
  char c[3000];
  gets(c);
  n=strlen(c);
  while(i<=n)
  {if(c[i]!=' ') i++;
   if(c[i]==' ') break;
   if(c[i]=='\0') a[1]=-1;
  }
  a[1]=a[1]+i;
  k=1;
  i=i+1;
  for(;i<=n;i++)
  {
      if(c[i]==' ')
      {
               k=k+1;
               for(j=1;j<=k-1;j++)  {b[k]=b[k]+a[j];}
               a[k]=i-b[k]-k+1;
      }
      if (c[i]=='\0') 
      {
                      k=k+1;
                      b[k]=b[k-1]+a[k-1];
                      a[k]=i-b[k]-k+1;
                      break;
      }
  }
  printf("%d",a[1]);
  for(k=2;k<=300;k++) if(a[k]!=0) printf(",%d",a[k]);
}
