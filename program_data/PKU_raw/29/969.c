int main()
{
int i,m,j,n,a[500],b[500];
double sum,c[500];
a[0]=2;
b[0]=1;
for(i=1;i<500;i++)
{
	a[i]=a[i-1]+b[i-1];
	b[i]=a[i-1];
}
scanf("%d",&m);
sum=0.0;
for(i=0;i<m;i++)
{
	sum=0.0;
	scanf("%d",&n);
	if(n==1)
	{
		sum=1.0*2;
	}
	else
	{
	for(j=0;j<n;j++)
	{
		sum+=1.0*a[j]/b[j];
	}
	}
    c[i]=sum;
}
for(i=0;i<m;i++)
{
	if(i==m-1)
	{
		printf("%.3lf",c[i]);
	}
	else
	{
	    printf("%.3lf\n",c[i]);
	}
}
return 0;
}