int main()
{
int k,n,i,t;
double a[100]={0.0},e1=0.0,e2=0.0,e3=0.0,e4=0.0;
scanf("%d",&k);
for(;k>0;k--)
{
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{
scanf("%lf",&a[i]);
}
for(i=0;i<n;i++)
{e1=e1+a[i];}
e2=e1/n;
for(i=0;i<n;i++)
{e3=e3+(a[i]-e2)*(a[i]-e2);}
e4=sqrt(e3/n);
printf("%.5lf\n",e4);
e1=0;e2=0;e3=0;e4=0;
}
return 0;
}
