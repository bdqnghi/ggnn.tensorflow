void main()
{
	int high[25],i,j,x[25][2],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&high[i]);
	for(i=0;i<n;i++)
	x[i][0]=1;
	for(i=0;i<n;i++)
	x[i][1]=0;
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if((high[j]>=high[i])&&(x[j][0]>=x[i][0]))
					x[i][0]=x[j][0]+1;
			if(x[j][1]>x[i][1])
				x[i][1]=x[j][1];
			if(x[j][0]>x[i][1])
				x[i][1]=x[j][0];
		}
	}
	i--;
	if(x[i][0]<x[i][1])
		x[i][0]=x[i][1];
	printf("%d",x[i][0]);
}


