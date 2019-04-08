int main()
{
	int n;
	scanf("%d",&n);
	double x[150],y[150],z[150];
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&x[i]);
		scanf("%lf",&y[i]);
		scanf("%lf",&z[i]);
	}
	int j,h;
	h=1;
	double sum;
	double s1[150][150];
	double a[10000];
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			sum=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
			s1[i][j]=sqrt(sum);
			a[h]=s1[i][j];
			h++;
		}
	}
	h--;
	int k;
	double e;
	for(k=1;k<h;k++)
	{
		for(i=1;i<=h-k;i++)
		{
			if(a[i]<a[i+1])
			{
				e=a[i];
				a[i]=a[i+1];
				a[i+1]=e;
			}
		}
	}
	int count=2;
	double b[10000];
	b[1]=a[1];
	for(i=2;i<=h;i++)
	{
		if(a[i]!=a[i-1])
		{
			b[count]=a[i];
			count++;
		}
	}
	count--;
	for(k=1;k<=count;k++)
	{
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				if(s1[i][j]==b[k])
					printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",x[i],y[i],z[i],x[j],y[j],z[j],b[k]);
			}
		}
	}
	return 0;
}