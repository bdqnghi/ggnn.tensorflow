int main()
{
    int n;
	scanf("%d",&n);
	double large=0,dis;

	struct{
	double x;
	double y;
	} a[10000];

	int j, i;
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&a[i].x,&a[i].y);
	}

	
	
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				dis=sqrt(pow(a[i].x-a[j].x,2)+pow(a[i].y-a[j].y,2));
		
		if(dis>large)
		{
			large=dis;
		}
	}
		}

	printf("%.4f\n",large);

	return 0;

	
}

