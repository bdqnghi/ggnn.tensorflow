int main()
{
	int n;
	double z[1000],y[1000],a,p;
	scanf("%d",&n);
    for(int i=1;i<=n;i++)
	{
		scanf("%lf %lf",&z[i],&y[i]);
	}
    a=y[1]/z[1];
	for(int b=2;b<=n;b++)
	{
		p=y[b]/z[b];
		if(p-a>0.05)
		{
		    printf("better\n");
		}
        else if(a-p>0.05)
		{
			printf("worse\n");
		}
		else
		{
		    printf("same\n");
		}
	}
	return 0;
}