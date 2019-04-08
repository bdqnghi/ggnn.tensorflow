 int main()
{
 double a[11],b[11],s,m,f;
 int n,i,j,k;
 scanf("%d\n",&n);
  m=0;
 for(j=1;j<=n;j++)
 { scanf("%lf",&b[j]);
   m=m+b[j];
  }
 for(i=1;i<=n;i++)
 {
   scanf("%lf",&a[i]);
   if(a[i]>=60)
    {
    if((a[i]>=90) &&(a[i]<=100)) a[i]=4.0;
    if((a[i]>=85) &&(a[i]<=90)) a[i]=3.7;
    if((a[i]>=82) &&(a[i]<=84)) a[i]=3.3;
    if((a[i]>=78) &&(a[i]<=81)) a[i]=3.0;
    if((a[i]>=75) &&(a[i]<=77)) a[i]=2.7;
    if((a[i]>=72) &&(a[i]<=74)) a[i]=2.3;
    if((a[i]>=68) &&(a[i]<=71)) a[i]=2.0;
    if((a[i]>=64) &&(a[i]<=67)) a[i]=1.5;
    if((a[i]>=60) &&(a[i]<=63)) a[i]=1.0;
    }
   else
     a[i]=0;
  }
  s=0;
  for(k=1;k<=n;k++)
      {s=s+a[k]*b[k];
       }
  f=s/m;
 printf("%.2lf",f);
 scanf("%d",&n);
 return 0;
}
