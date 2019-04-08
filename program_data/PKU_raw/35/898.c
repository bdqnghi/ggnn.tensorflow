void main()
{
	int h,l,i,j,x[10][10],H[10],L[10],t=0;
	scanf("%d,%d",&h,&l);
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
		{
			scanf("%d",&x[i][j]);
			if(j==0)
				H[i]=x[i][0];
			else if(j>=1)
            {
				if(x[i][j]>x[i][j-1])
			    H[i]=x[i][j];
			}
		}
		
	}
	for(i=0;i<l;i++)
	{
    	for(j=0;j<h-1;j++)
		{
			if(j==0)
			   L[i]=x[0][i];
			else
			{
				if(x[j][i]>x[j+1][i])
				L[i]=x[j+1][i];
			}
		}
	}

	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
		{
			if(H[i]==L[j])
			{
				printf("%d+%d",i,j);
				t=1;
				break;
			}
		}
		if(t==1)
			break;
	}
	if(t==0)
		printf("No\n");
}


