main()
{
int n,i,j,m;
double a[2000],x=0;
double sum=0;
scanf("%d",&n);
for (i=1;i<=n;i++)
 { scanf("%d",&m);
   for (j=1;j<=m;j++)
       {
        scanf("%lf",&a[j]);
  	x=x+a[j];
       }
 for (j=1;j<=m;j++)
 sum=sum+(a[j]-x/m)*(a[j]-x/m);
 sum=sqrt(sum/m);
 printf("%.5f\n",sum);
 sum=0;
 x=0;
for (j=1;j<=m;j++)
a[j]=0;
 }
}  