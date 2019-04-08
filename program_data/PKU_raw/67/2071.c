int main()
{
	int n, x, y, i;
	double p, m;
	scanf("%d",&n);
	for(i=0;i<1;i++)
	{
		scanf("%d%d\n",&x,&y);
		p=100*((double)y)/((double)x);
	}
	for(i=1;i<n;i++)
	{
		scanf("%d%d",&x, &y);
		m=100*((double)y)/((double)x);
		if(p>m+5)
		{
			printf("worse\n");
		}
		else if(p<m-5)
		{
			printf("better\n");
		}
		else{
			printf("same\n");
		}
	}
	return 0;
}
