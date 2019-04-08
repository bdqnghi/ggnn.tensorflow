int main()
{
	int n,i,j,k;
	double distance[100],b,x[100][2],c,first;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%lf",&x[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(k=1;k<n;k++)
		{
			b=sqrt((x[k][0]-x[i][0])*(x[k][0]-x[i][0])+(x[k][1]-x[i][1])*(x[k][1]-x[i][1]));
			if(i==1)
			{
				c=b;
			}
			else
			{
				if(b>c)
				{
					c=b;
				}
			}
			distance[k]=c;
		}
	}
	for(k=1;k<n;k++)
	{
		if(k==1)
		{
			first=distance[1];
		}
		else
		{
			if(distance[i]>first)
			{
				first=distance[i];
			}
		}
	}
	printf("%.4lf",first);
	return 0;
}