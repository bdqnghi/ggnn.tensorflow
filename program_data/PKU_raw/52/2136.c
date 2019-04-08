void main()
{  int a[100];
   int n,m,i,j,t,r,p,b;
   scanf("%d%d",&n,&m);
   for(i=0;i<n;i++)
   scanf("%d ",&a[i]);
   if(n>2*m)
  {   for(i=0;i<m;i++)
    {t=a[i];a[i]=a[i+n-m];a[i+n-m]=t;}
   for(i=n-m;i<n;i++)
   { for(j=i-n+2*m;j<i;j++)
    {r=a[i];a[i]=a[j];a[j]=r;}
    }
   }
   else
   {  for(i=0;i<m;i++)
    {t=a[i];a[i]=a[i+n-m];a[i+n-m]=t;}
      p=2*n-2*m;b=m;
      while(p<n)
    {for(i=b;i<p;i++)
      {r=a[i];a[i]=a[p];a[p]=r;}
       p++;b++;
     }
  }
     for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
    printf("%d",a[n-1]);
}