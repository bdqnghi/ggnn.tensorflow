void main()
{int k,n,i,j;
double a[1000]={0},av=0,s=0,out=0;
double *p=a;

scanf("%d",&k);
for(j=0;j<k;j++)
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	scanf("%lf",p+i);
	av+=*(p+i);}
	av=av/n;
	for(i=0;i<n;i++)
	s+=(a[i]-av)*(a[i]-av);
	s=s/n;
	out=sqrt(s);
	printf("%.5lf\n",out);
	s=0;out=0;av=0;
}
}