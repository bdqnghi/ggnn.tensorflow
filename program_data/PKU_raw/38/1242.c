void main()
{
 int k,n,i,j;
 double *x=0,a,s;
 scanf("%d",&k);
 for (i=1;i<=k;i++)
   {
   scanf("%d",&n);a=0;s=0;
   x=(double*)calloc(100,sizeof(double));
   for (j=1;j<=n;j++)
	 {
	 scanf("%lf",x+j-1);
	 a=a+*(x+j-1);
	 }
   a=a/n;
   for (j=1;j<=n;j++)
	 s=s+(*(x+j-1)-a)*(*(x+j-1)-a);
   s=sqrt(s/n);
   printf("%.5f\n",s);
   }
}