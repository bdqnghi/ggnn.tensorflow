void main()
{
	int x[11]={0},y[11]={0},i,j,flag=1;
	scanf("%d%d",&x[0],&y[0]);
	for(i=0;i<10;i++)
	{
		x[i+1]=x[i]/2;
		if(x[i]==1)
		{
			break;
		}
	}
	for(j=0;j<10;j++)
	{
		y[j+1]=y[j]/2;
		if(y[j]==1)
		{
			break;
		}
	}
	for(i=0;i<11;i++)
	{
		if(x[i]==1)
		{
			printf("1\n");
			break;
		}
		for(j=0;j<11;j++)
		{
			if(x[i]==y[j])
			{
				printf("%d\n",x[i]);
				
				if(x[i+1]==y[j+1])
				{
					flag=0;
				}
				break;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
}

