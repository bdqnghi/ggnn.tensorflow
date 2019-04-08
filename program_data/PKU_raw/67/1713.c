int main()
{
	int x1, x2, y1[10000],y2[10000],n, flag[10000];
	double x, y[10000];
	double temp;
	scanf("%d", &n);
	int i;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			scanf("%d %d", &x1, &x2);
			x=100*(x2)/(x1);
		}
		else
		{
			scanf("%d %d", &y1[i], &y2[i]);
			y[i]=100*(y2[i])/(y1[i]);
			temp=y[i]-x;
			if(5<=temp)
				flag[i]=2;
			else if(temp<=(-5))
				flag[i]=0;
			else 
				flag[i]=1;
		}
	}
	for(i=1;i<n;i++)
	{
		if(flag[i]==2)
			printf("better\n");
		else if(flag[i]==1)
			printf("same\n");
		else if(flag[i]==0)
			printf("worse\n");
	}
	return 0;
}