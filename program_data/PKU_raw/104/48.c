void main()
{
	int x[12],y[12];
	scanf("%d%d",&x[1],&y[1]);
	int i,j,k;
	i=1;
	while(x[i]>=1)
	{
		if(x[i]%2==0)
			x[i+1]=x[i]/2;
		else
			x[i+1]=(x[i]-1)/2;
		i++;
	}
	i=1;
	while(y[i]>=1)
	{
		if(y[i]%2==0)
			y[i+1]=y[i]/2;
		else
			y[i+1]=(y[i]-1)/2;
		i++;
	}
	for(j=1;j<11;j++)
	{
		for(k=1;k<=i;k++)
			if(x[j]==y[k])
			{
				printf("%d",x[j]);
				break;
			}
		if(x[j]==y[k]) break;
	}
}