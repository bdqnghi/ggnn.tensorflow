int main()
{
int k,n,i,j;
scanf("%d",&k);
for(i=0;i<k;i++)
   {
       scanf("%d",&n);
       double a[n];
       for(j=0;j<n;j++)
           scanf("%lf",&a[j]);
       double x=0,y=0;
       for(j=0;j<n;j++)
         x=x+a[j];
       x=x/n;
       for(j=0;j<n;j++)
         y=y+(a[j]-x)*(a[j]-x);
       y=sqrt(y/n);
       printf("%.5lf\n",y);}
      return 0;
}