void main()
{
	double t[1000],y[1000],max,s;
	int n,i,j;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{scanf("%lf",&t[i]);
	 scanf("%lf",&y[i]);
	}
	max=0;
	for (i=1;i<=n;i++)
	for (j=i;j<=n;j++)
    {s=sqrt((t[i]-t[j])*(t[i]-t[j])+(y[i]-y[j])*(y[i]-y[j]));
     if (s>=max) max=s;
	}
	printf("%.4f",max);
}

