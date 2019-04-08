int main()
{
    int k,i,j,a[100];
    double b[100][1000],c[100],d[100],jun[100],s[100];
    scanf("%d",&k);
    for(i=0;i<k;i++)
   {
    scanf("%d",&a[i]);
    for(j=0;j<a[i];j++)
    {
     scanf("%lf",&b[i][j]);
     }
    }
   for(i=0;i<k;i++)
   { 
    c[i]=0;
    for(j=0;j<a[i];j++)
    {
     c[i]+=b[i][j];
     }
    }
   for(i=0;i<k;i++)
   {
    jun[i]=c[i]/a[i];
   }
   for(i=0;i<k;i++)
   {
    d[i]=0;
    for(j=0;j<a[i];j++)
    {
     d[i]+=pow(b[i][j]-jun[i],2);
    }
   }
  for(i=0;i<k;i++)
  {
   s[i]=sqrt(d[i]/a[i]);
   printf("%.5lf\n",s[i]);
   }
  return 0;
}